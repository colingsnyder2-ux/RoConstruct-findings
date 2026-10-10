// from server: 71% by atomic.potato
typedef unsigned int DWORD;

typedef void (__thiscall *Func008edb40)(void*, void*, void*, int);

extern Func008edb40 func_008edb40;

struct S
{
    void f(void*, void*);
};

void S::f(void* a, void* b)
{
    func_008edb40((char*)this + 0x20, a, b, 1);
    *(S**) ((char*)b + 0x50) = this;
    typedef void (S::*Method)();
    Method m = *(Method*) (*(DWORD**)this + 0x68);
    (this->*m)();
}
