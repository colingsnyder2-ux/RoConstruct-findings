// from server: 76% by colin
extern "C" void* __cdecl sub_00500060(unsigned int, unsigned int);
extern "C" void __cdecl sub_00500580(void*, int, unsigned int);
extern "C" void __cdecl sub_00630D23(void*);

extern unsigned int dword_8975EC;
extern void* dword_8975E8;
extern char byte_778D40;

void func_0076FED0()
{
    void* p = sub_00500060(0x10, 0x28);
    unsigned int n = dword_8975EC;
    sub_00500580(p, 0, n * 4);
    dword_8975E8 = p;
    sub_00630D23(&byte_778D40);
}
