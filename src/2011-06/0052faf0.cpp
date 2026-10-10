// from server: 70% by atomic.potato
extern "C" void __stdcall sub_0052ee70(void *, const char *, unsigned int);

struct S_0052faf0 {
    void f(void *);
};

void S_0052faf0::f(void *arg)
{
    sub_0052ee70((char *)this + 0x50, (const char *)0x00a7f220, 0xc33);
}
