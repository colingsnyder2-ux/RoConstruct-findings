// from server: 92% by atomic.potato
extern "C" long __stdcall InterlockedExchange(long*, long);
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, long);

struct S
{
    int f();
};

int S::f()
{
    long value = InterlockedExchange((long*)((char*)this + 0x1ac), 1);
    if (value == 0)
        PostMessageA(*(void**)((char*)this + 0x20), 0x469, 0, 0);
    return 0;
}
