// from server: 64% by atomic.potato
typedef unsigned char BYTE;

extern "C" void __cdecl call_00A40714(void *, void *);
extern "C" void __cdecl call_00A4058C(void *);

struct S
{
    int f(void *);
    BYTE pad54[0x54];
};

int S::f(void *arg)
{
    if ((pad54[0x54] & 1) != 0)
    {
        void *p = *(void **)((char *)this + 0x44);
        if (p != 0)
        {
            call_00A40714((char *)arg, (char *)arg + 4);
            call_00A4058C(arg);
        }
    }
    return 0;
}
