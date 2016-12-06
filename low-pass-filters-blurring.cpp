int main()
{
	Mat src, dst;
	float sum;
	
	src = imread("salt.jpg", CV_LOAD_IMAGE_GRAYSCALE);

	float Kernel[3][3] = {
		{1, 1, 1},
		{1, 1, 1},
		{1, 1, 1}
	}; 
    
	dst = src.clone();
	
	for(int y = 0; y < src.rows; y++)
		for(int x = 0; x < src.cols; x++)
			dst.at<uchar>(y,x) = 0.0;
		
	//convolution operation
	for(int y = 1; y < src.rows - 1; y++)
	{
		for(int x = 1; x < src.cols - 1; x++)
		{
			sum = 0.0;
			for(int k = -1; k <= 1;k++)
			{
				for(int j = -1; j <=1; j++)
				{
					sum = sum + Kernel[j+1][k+1] * src.at<uchar>(y - j, x - k);
				}
			}
			dst.at<uchar>(y,x) = (sum / 9);
		}
	}
}
// link: http://www.programming-techniques.com/2013/01/low-pass-filters-blurring-in-image.html
