// from server: 25% by atomic.potato
extern "C" int __stdcall GetSystemMetrics(int);

struct Inner {
    char pad0[1480];
    int m_x;
    int f();
};

int Inner::f() { return m_x; }

struct S {
    char pad0[4];
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    char pad1[0x10];
    int f2c;
    int f30;
    int f34;
    int f38;
    void base();
    void init();
};

void S::init()
{
    base();
    f4 = GetSystemMetrics(0x15);
    f8 = GetSystemMetrics(3);
    f10 = GetSystemMetrics(2);
    fC = GetSystemMetrics(0x14);
    f14 = 0x15;
    f18 = 0x13;
    Inner* p = (Inner*)f2c;
    f30 = p->f();
    f34 = p->f();
    f38 = p->f();
}
