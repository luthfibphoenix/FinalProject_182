#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input(){}
	virtual float Luas(int a) { return 0; }
	virtual float keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }
	void setX(int a) {
		this->x = a;
	}
	void setY(int b) {
		this->y = b;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};

class Lingkaran :public bidangDatar {
public:

	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "\nMasukan Jejari: " << endl;
		int r;
		cin >> r;
		setX(r);
	}
	float Luas() {
		int r = getX();
		return 3.14 * r * r;
	}
	float Keliling() {
		int r = getX();
		return 2 * 3.14 * r;
	}
};

class Persegipanjang :public bidangDatar {
public:
	

	void input() {
		cout << "Persegi Panjang dibuat" << endl;
		cout << "\nMasukan Panjang: " << endl;
		int p; 
		cin >> p; 
		setX(p);  
		cout << "\nMasukan Lebar: " << endl;
		int l; 
		cin >> l; 
		setY(l); 
	}
	float Luas() {
		int p = getX();
		int l = getY();
		return p * l; 
	}
	float Keliling() {
		int p = getX();
		int l = getY();
		return (p + l) * 2; 
	}
	void cekUkuran() {
		if (Keliling() > 30)
			cout << "Persegipanjang besar";
		else if (Keliling() < 20)
			cout << "Persegipanjang sedang";
	}
};



int main() {

	Lingkaran lingkaran; 
	lingkaran.input(); 
	cout << "luas lingkaran = " << lingkaran.Luas() << "\nKeliling lingkaran = " << lingkaran.Keliling() << endl;
	
	Persegipanjang persegipanjang;
	persegipanjang.input();
	cout << "Luas persegipanjang = " << persegipanjang.Luas() << "\nKeliling persegipanjang = " << persegipanjang.Keliling() << endl;

	return 0;
}