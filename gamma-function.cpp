int main()
{
	Mat src;
	int c = 1; // const
	int gama = 4; // if it's above 1, dark; else light.
	
	src = imread("image.png", CV_LOAD_IMAGE_GRAYSCALE);
	
	for(int y=0; y<src.rows; y++)
		for(int x=0; x<src.cols; x++)
			src.at<uchar>(y,x) = c * pow(src.at<uchar>(y,x), gama)
}
