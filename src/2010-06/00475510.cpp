// from server: 81% by atomic.potato
extern "C" long __stdcall InterlockedExchange(long *, long);
extern "C" int __stdcall PostMessageA(void *, unsigned int, unsigned int, long);

struct S
{
    void f();
    char padding[0x1ac];
    long value;
    void *window;
};

void S::f()
{
    if (InterlockedExchange(&value, 1) == 0)
        PostMessageA(window, 0x469, 0, 0);
}
