/*
Copyright :zhubaohua 2016
Beijing university of Post and Tecnology 
*/
#include"SGM.h"


int main ()
{


	
	Mat img11 =  imread("E:/matchpic/testbanch_data/raindeer_left.pgm", 0);
	Mat img22 = imread("E:/matchpic/testbanch_data/raindeer_right.pgm", 0);
		
		
			Mat img111,img222;//ͼƬ�ߴ���С
			cv::resize(img11,img111,CvSize(img11.cols/2,img11.rows/2));
			cv::resize(img22,img222,CvSize(img11.cols/2,img11.rows/2));
			imshow("img111",img111);
			cvWaitKey(10);
			
	SGM sgm;
	Mat disp;//float�����Ӳ���Ϣ���
	int Dmax=80;//������������Ӳ�
	int path=1;//��̬�滮·��ѡ��
	sgm.GetDisprity_mat(img111,img222,path,Dmax,true,disp);
	
	Mat disp8;//��ʾ����
disp.convertTo(disp8,CV_8U,(float)256/Dmax); //dispΪfloat���ͣ�ת����CV_8U������ʾ��
	imshow("disp8",disp8);
	waitKey(0);

}
