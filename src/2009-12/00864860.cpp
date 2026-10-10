// from server: 77% by atomic.potato
extern "C" void* __cdecl GlobalCall(void*, void*);

struct S
{
    int f();
};

int S::f()
{
    void* value;
    GlobalCall(&value, (char*)this + 0xa8);
    void** table = *(void***)this;
    typedef int (__thiscall S::*Method)();
    Method method = *(Method*)((char*)table + 0x64);
    return (this->*method)();
}
