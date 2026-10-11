// from server: 64% by atomic.potato
struct S {
    int f0;
    char pad0[0x14];
    int f18;
    int f1c;
    int f20;
    int init();
};

extern "C" int (__stdcall *GetSystemMetrics)(int);

int S::init()
{
    char* p = (char*)this + 4;
    ((S*)p)->init();
    this->f0 = 0x20;
    this->f18 = 0;
    int a = GetSystemMetrics(1);
    int b = GetSystemMetrics(0);
    this->f1c = b;
    this->f20 = a;
    return (int)this;
}
