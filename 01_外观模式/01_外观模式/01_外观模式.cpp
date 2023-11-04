#include <iostream>
using namespace std;

//���ӻ�
class Television {
public :
	void On() {
		cout << "���ӻ���" << endl;
	}
	void Off() {
		cout << "���ӻ��ر�" << endl;
	}
};

//��
class Light {
public:
	void On() {
		cout << "�ƴ�" << endl;
	}
	void Off() {
		cout << "�ƹر�" << endl;
	}
};

//����
class Audio {
public:
	void On() {
		cout << "�����" << endl;
	}
	void Off() {
		cout << "����ر�" << endl;
	}
};

//��˷�
class Mircophone {
public:
	void On() {
		cout << "��˷��" << endl;
	}
	void Off() {
		cout << "��˷�ر�" << endl;
	}
};

//DVD������
class DvdPlayer {
public:
	void On() {
		cout << "DVD��������" << endl;
	}
	void Off() {
		cout << "DVD�������ر�" << endl;
	}
};

//��Ϸ��
class Gamemach {
public:
	void On() {
		cout << "��Ϸ����" << endl;
	}
	void Off() {
		cout << "��Ϸ���ر�" << endl;
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













