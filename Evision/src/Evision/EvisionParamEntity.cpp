#include "EvisionParamEntity.h"

//构造函数是私有的
EvisionParamEntity::EvisionParamEntity()
{ 
}

//获取实例(单例模式)
EvisionParamEntity * EvisionParamEntity::getInstance()
{
     static EvisionParamEntity *m_pInstance;
     if (m_pInstance == NULL) //判断是否第一次调用
         m_pInstance = new EvisionParamEntity();
     return m_pInstance;
}

EvisionParamEntity::~EvisionParamEntity()
{
}
//
int EvisionParamEntity::getBoardWidth()
{
	return BoardWidth;
}
void EvisionParamEntity::setBoardWidth(int value)
{
	BoardWidth = value;
	//发出值更改事件
	emit paramChanged_BoardWidth();
}

int EvisionParamEntity::getBoardHeight()
{
	return BoardHeight;
}
void EvisionParamEntity::setBoardHeight(int value)
{
	BoardHeight = value;
	emit paramChanged_BoardHeight();
}

int EvisionParamEntity::getSquareSize()
{
	return SquareSize;
}
void EvisionParamEntity::setSquareSize(int value)
{
	SquareSize = value;
	emit paramChanged_SquareSize();
}

int EvisionParamEntity::getAlpha()
{
	return Alpha;
}
void EvisionParamEntity::setAlpha(int value)
{
	Alpha = value;
	emit paramChanged_Alpha();
}

int EvisionParamEntity::getnBoards()
{
	return nBoards;
}
void EvisionParamEntity::setnBoards(int value)
{
	nBoards = value;
	emit paramChanged_nBoards();
}

bool EvisionParamEntity::getFI()
{
	return FI;
}
void EvisionParamEntity::setFI(bool value)
{
	FI = value;
	emit paramChanged_FI();
}

bool EvisionParamEntity::getUIG()
{
	return UIG;
}
void EvisionParamEntity::setUIG(bool value)
{
	UIG = value;
	emit paramChanged_UIG();
}

bool EvisionParamEntity::getSFL()
{
	return SFL;
}
void EvisionParamEntity::setSFL(bool value)
{
	SFL = value;
	emit paramChanged_SFL();
}

bool EvisionParamEntity::getFPP()
{
	return FPP;
}
void EvisionParamEntity::setFPP(bool value)
{
	FPP = value;
	emit paramChanged_FPP();
}

bool EvisionParamEntity::getFAR()
{
	return FAR;
}
void EvisionParamEntity::setFAR(bool value)
{
	FAR = value;
	emit paramChanged_FAR();
}

bool EvisionParamEntity::getBouguet()
{
	return Bouguet;
}
void EvisionParamEntity::setBouguet(bool value)
{
	Bouguet = value;
	if (value==true)
	{
		Hartley = false;
	}
	emit paramChanged_Bouguet();
}

bool EvisionParamEntity::getHartley()
{
	return Hartley;
}
void EvisionParamEntity::setHartley(bool value)
{
	Hartley = value;
	if (value)
	{
		Bouguet = false;
	}
	emit paramChanged_Hartley();
}

int EvisionParamEntity::getMinDisp()
{
	return MinDisp;
}
void EvisionParamEntity::setMinDisp(int value)
{
	MinDisp = value;
	emit paramChanged_MinDisp();
}

int EvisionParamEntity::getUniradio()
{
	return Uniradio;
}
void EvisionParamEntity::setUniradio(int value)
{
	Uniradio = value;
	emit paramChanged_Uniradio();
}

int EvisionParamEntity::getSpecwinsz()
{
	return Specwinsz;
}
void EvisionParamEntity::setSpecwinsz(int value)
{
	Specwinsz = value;
	emit paramChanged_Specwinsz();
}

int EvisionParamEntity::getMaxDisp()
{
	return MaxDisp;
}
void EvisionParamEntity::setMaxDisp(int value)
{
	MaxDisp = value;
	emit paramChanged_MaxDisp();
}

int EvisionParamEntity::getSpecrange()
{
	return Specrange;
}
void EvisionParamEntity::setSpecrange(int value)
{
	Specrange = value;
	emit paramChanged_Specrange();
}

int EvisionParamEntity::getPrefilcap()
{
	return Prefilcap;
}
void EvisionParamEntity::setPrefilcap(int value)
{
	Prefilcap = value;
	emit paramChanged_Prefilcap();
}

int EvisionParamEntity::getSadWinsz()
{
	return SadWinsz;
}
void EvisionParamEntity::setSadWinsz(int value)
{
	SadWinsz = value;
	emit paramChanged_SadWinsz();
}

int EvisionParamEntity::getTextThread()
{
	return TextThread;
}
void EvisionParamEntity::setTextThread(int value)
{
	TextThread = value;
	emit paramChanged_TextThread();
}

int EvisionParamEntity::getMaxdifdisp12()
{
	return Maxdifdisp12;
}
void EvisionParamEntity::setMaxdifdisp12(int value)
{
	Maxdifdisp12 = value;
	emit paramChanged_Maxdifdisp12();
}

int EvisionParamEntity::getLevels()
{
	return Levels;
}
void EvisionParamEntity::setLevels(int value)
{
	Levels = value;
	paramChanged_Levels();
}

float EvisionParamEntity::getPyrScale()
{
	return PyrScale;
}
void EvisionParamEntity::setPyrScale(float value)
{
	PyrScale = value;
	emit paramChanged_pyrScale();
}

int EvisionParamEntity::getPolyN()
{
	return PolyN;
}
void EvisionParamEntity::setPolyN(int value)
{
	PolyN = value;
	emit paramChanged_PolyN();
}

float EvisionParamEntity::getPolySigma()
{
	return PolySigma;
}
void EvisionParamEntity::setPolySigma(float value)
{
	PolySigma = value;
	emit paramChanged_PolySigma();
}

float EvisionParamEntity::getFi()
{
	return Fi;
}
void EvisionParamEntity::setFi(float value)
{
	Fi = value;
	emit paramChanged_Fi();
}

float EvisionParamEntity::getLambda()
{
	return Lambda;
}
void EvisionParamEntity::setLambda(float value)
{
	Lambda = value;
	emit paramChanged_Lambda();
}

bool EvisionParamEntity::getBM()
{
	return BM;
}
void EvisionParamEntity::setBM(bool value)
{
	BM = value;
	if (value)
	{
		SGBM = false;
		VAR = false;
	}
	emit paramChanged_BM();
}

bool EvisionParamEntity::getSGBM()
{
	return SGBM;
}
void EvisionParamEntity::setSGBM(bool value)
{
	SGBM = value;
	if (value)
	{
		BM = false;
		VAR = false;
	}
	emit paramChanged_SGBM();
}

bool EvisionParamEntity::getVAR()
{
	return VAR;
}
void EvisionParamEntity::setVAR(bool value)
{
	VAR = value;
	if (value)
	{
		BM = false;
		SGBM = false;
	}
	emit paramChanged_VAR();
}

float EvisionParamEntity::getDistance()
{
	return Distance;
}
void EvisionParamEntity::setDistance(float value)
{
	Distance = value;
	emit paramChanged_distance();
}

cv::Mat EvisionParamEntity::getImageLtoShow()
{
	return imgLtoShow;
}
void EvisionParamEntity::setImageLtoShow(cv::Mat value)
{
	imgLtoShow = value;
	emit paramChanged_ImageLtoShow();
}

cv::Mat EvisionParamEntity::getImageRtoShow()
{
	return imgRtoShow;
}
void EvisionParamEntity::setImageRtoShow(cv::Mat value)
{
	imgRtoShow = value;
	emit paramChanged_ImageRtoShow();
}

QString EvisionParamEntity::getStatusBarText()
{
	return StatusBarText;
}
void EvisionParamEntity::setStatusBarText(QString value=QStringLiteral("就绪"))
{
	StatusBarText = value;
	emit paramChanged_StatusBar();
}
