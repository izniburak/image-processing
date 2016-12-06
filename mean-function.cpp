int main()
{
	Mat src, dst;
	float sum;
	
	src = imread("image.png", CV_LOAD_IMAGE_GRAYSCALE);
		
	float Mask[3][3] = {
		{1, 2, 1},
		{2, 4, 2},
		{1, 2, 1}
	}
	
	dst = src.clone();
	
	for(int y=0; y<src.rows; y++)
		for(int x=0; x<src.cols; x++)
			dst.at<uchar>(y,x) = 0.0;
			
	for(int y=1; y<src.rows -1; y++)
	{
		for(int x=1; x<src.cols -1; x++)
		{
			sum = 0.0;
			for(int k=-1; k<=1; k++)
				for(int j=-1; j<=1; j++)
					sum = sum + Mask[j+1][k+1] * src.at<uchar>(y-j, x-k);
			dst.at<uchar>(y,x) = (sum / 16)
		}
	}
}
