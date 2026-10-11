// from server: 78% by atomic.potato
extern "C" void f738640(void*, void*, void*, int, int);
extern "C" void __cdecl f7f4929(void*);

struct S {
    void f();
};

void S::f()
{
    f738640((void*)0xb96538, (void*)0x9e1c5c, (void*)0x9e1c48, 0x188, 0xf);
    f7f4929((void*)0x9885b0);
}
