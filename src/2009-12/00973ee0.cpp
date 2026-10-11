// from server: 78% by atomic.potato
extern "C" void f006a5460(void*, void*, void*, unsigned int, unsigned int);
extern "C" void __cdecl f007f4929(void*);

struct S
{
    void f();
};

void S::f()
{
    f006a5460((void*)0x00b9174c, (void*)0x009d30a0,
               (void*)0x009aaa58, 0x114, 9);
    f007f4929((void*)0x00985440);
}
