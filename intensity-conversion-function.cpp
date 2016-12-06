int main()
{
	Mat src;
	int k = 100; // Threshold
	
	src = imread("image.png", CV_LOAD_IMAGE_GRAYSCALE);
	
	for(int y=0; y<src.rows; y++)
		for(int x=0; x<src.cols; x++)
			if(src.at<uchar>(y,x) < k)
				src.at<uchar>(y,x) = 0;
			else 
				src.at<uchar>(y,x) = 255;
}
