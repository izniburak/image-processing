int main()
{
	Mat src;
	int c = 100; // const
	
	src = imread("image.png", CV_LOAD_IMAGE_GRAYSCALE);
	
	for(int y=0; y<src.rows; y++)
		for(int x=0; x<src.cols; x++)
			src.at<uchar>(y,x) = c * log(1 + src.at<uchar>(y,x));
}