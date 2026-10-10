// from server: 88% by atomic.potato
extern "C" void (__thiscall *const call_0098dec0)(void*);

struct S
{
    void f();
};

void S::f()
{
    *(unsigned long*)this = 0x009fa014;
    *(unsigned long*)((char*)this + 0x54) = 0x009fa004;
    *(unsigned long*)((char*)this + 0x5c) = 0x009f9fa4;
    call_0098dec0((char*)this + 0x1f0);
    ((void (__thiscall*)(void*))0x00807eb0)(this);
}
