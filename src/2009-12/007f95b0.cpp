// from server: 75% by atomic.potato
extern "C" void __cdecl RestoreFocus(void*);

struct S
{
    int value;
    void f();
};

void S::f()
{
    void* p = *(void**)((char*)this + 0x100);
    RestoreFocus(p);

    void** vtable = *(void***)this;
    void (__thiscall *method)(S*, int) =
        (void (__thiscall *)(S*, int))vtable[0x70 / 4];
    method(this, 1);
}
