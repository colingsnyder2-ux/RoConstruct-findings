// from server: 73% by atomic.potato
extern "C" void __cdecl sub_738640(const char*, const char*, int, int, int);
extern "C" void __cdecl sub_7f4929(const char*);

struct S
{
    void f();
};

void S::f()
{
    sub_738640((const char*)0x9e1c64, (const char*)0x9e1c48, 0x18c, 0xf, 0);
    sub_7f4929((const char*)0x9885d0);
}
