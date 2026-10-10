// from server: 80% by colin
extern "C" void* __cdecl sub_00500060(unsigned int, unsigned int);
extern "C" void __cdecl sub_00500580(void*, int, unsigned int);
extern "C" void __cdecl sub_00630d23(void*);

extern unsigned int dword_88AC34;
extern void* dword_88AC30;
extern char byte_777F50;

void __cdecl sub_0076D7B0()
{
    void* p = sub_00500060(0x28, 0x10);
    unsigned int n = dword_88AC34;
    sub_00500580(p, 0, n * 4);
    dword_88AC30 = p;
    sub_00630d23(&byte_777F50);
}
