// from server: 78% by atomic.potato
extern "C" void f738f30(void *, const char *, const char *, int, int);
extern "C" void __cdecl f7f4929(const char *);

struct S {
    void f();
};

void S::f()
{
    f738f30((void *)0xb96258, "force", "Goals", 0x158, 0xf);
    f7f4929((const char *)0x988810);
}
