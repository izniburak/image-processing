int main()
{
	Mat src;
	int k = 100; // Threshold
	
	src = imread("image.png", CV_LOAD_IMAGE_GRAYSCALE);
	
	for(int y=0; y<src.rows; y++)
		for(int x=0; x<src.cols; x++)
			src.at<uchar>(y,x) = 255 - src.at<uchar>(y,x);
}