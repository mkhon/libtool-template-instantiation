#ifndef _TEST_H_
#define _TEST_H_

template<class T>
class A {
public:
	A(const T &t): _t(t) {}

	void print();

private:
	T _t;
};

#endif // _TEST_H_
