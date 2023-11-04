#include <iostream>
using namespace std;

//电视机
class Television {
public :
	void On() {
		cout << "电视机打开" << endl;
	}
	void Off() {
		cout << "电视机关闭" << endl;
	}
};

//灯
class Light {
public:
	void On() {
		cout << "灯打开" << endl;
	}
	void Off() {
		cout << "灯关闭" << endl;
	}
};

//音响
class Audio {
public:
	void On() {
		cout << "音响打开" << endl;
	}
	void Off() {
		cout << "音响关闭" << endl;
	}
};

//麦克风
class Mircophone {
public:
	void On() {
		cout << "麦克风打开" << endl;
	}
	void Off() {
		cout << "麦克风关闭" << endl;
	}
};

//DVD播放器
class DvdPlayer {
public:
	void On() {
		cout << "DVD播放器打开" << endl;
	}
	void Off() {
		cout << "DVD播放器关闭" << endl;
	}
};

//游戏机
class Gamemach {
public:
	void On() {
		cout << "游戏机打开" << endl;
	}
	void Off() {
		cout << "游戏机关闭" << endl;
	}
};

class KTVMode {
public :
	KTVMode(){
		pTv			= new Television;
		pLight		= new Light;
		pAudio		= new Audio;
		pMircophone = new Mircophone;
		pDvd		= new DvdPlayer;
	}

	void OnKTV() {
		pTv->On();
		pLight->Off();
		pAudio->On();
		pMircophone->On();
		pDvd->On();
	}

	void OffKTV() {
		pTv->Off();
		pLight->On();
		pAudio->Off();
		pMircophone->Off();
		pDvd->Off();
	}

	~KTVMode() {
		delete pTv;
		delete pLight;
		delete pAudio;
		delete pMircophone;
		delete pDvd;
	}

public:
	Television* pTv;
	Light* pLight;
	Audio* pAudio;
	Mircophone* pMircophone;
	DvdPlayer* pDvd;
};

void test01() {
	KTVMode * ktc = new KTVMode();
	ktc->OnKTV();
}




int main() {
	test01();

	return 0;
}













