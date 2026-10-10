// from server: 57% by atomic.potato
struct S;

extern "C" void CallTarget(void*, void*);

struct S
{
    void f(void*);
};

void S::f(void* arg)
{
    CallTarget((char*)this + 0x280, arg);
}
