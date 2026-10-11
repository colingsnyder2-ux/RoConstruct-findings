// from server: 32% by colin
struct Inner {
    void* p;
};

struct Mid {
    char pad[0x18];
    Inner* q;
};

struct Outer {
    char pad0[0x128];
    void* a;
    Mid* b;
    int f(void* x, int y);
};

extern "C" void __stdcall sub_576f00(void*, void*);
extern "C" void __stdcall sub_5773c0(void*);

int Outer::f(void* x, int y)
{
    void* local1 = 0;
    void* local2 = 0;
    void* local3 = 0;
    void* local4 = 0;
    void* local5 = 0;

    void* t = *(void**)((char*)a + 0x198);
    sub_576f00(&local1, t);

    void* arg;
    if (x != 0)
        arg = (char*)x + 0x14;
    else
        arg = 0;

    Mid* m = b;
    Inner* in = m->q;
    void** vt = *(void***)in;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vt[2];
    fn(in, x, arg);

    sub_5773c0(&local1);
    return y;
}
