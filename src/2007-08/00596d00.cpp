// from server: 88% by colin
// roc 2007-08 00596d00  unit: RBX::LaserTool  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596d00
//
// 00596d00  56                   push esi
// 00596d01  57                   push edi
// 00596d02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00596d06  803f00               cmp byte ptr [edi], 0
// 00596d09  8bf1                 mov esi, ecx
// 00596d0b  b8440b7a00           mov eax, 0x7a0b44
// 00596d10  7505                 jne 0x596d17
// 00596d12  b8d0797900           mov eax, 0x7979d0
// 00596d17  50                   push eax
// 00596d18  8d8ef0000000         lea ecx, [esi + 0xf0]
// 00596d1e  ff152ce67700         call dword ptr [0x77e62c]
// 00596d24  33c0                 xor eax, eax
// 00596d26  3807                 cmp byte ptr [edi], al
// 00596d28  5f                   pop edi
// 00596d29  0f95c0               setne al
// 00596d2c  89442408             mov dword ptr [esp + 8], eax
// 00596d30  db442408             fild dword ptr [esp + 8]
// 00596d34  dd9ee8000000         fstp qword ptr [esi + 0xe8]
// 00596d3a  5e                   pop esi
// 00596d3b  c20400               ret 4

struct S_func_00596d00 {
    char pad0[0xe8];
    double m_d;
    char pad1[0x100 - 0xe8 - 8];
    char m_str[0x10];
    void f(char* p);
};

extern "C" void* __stdcall sub_77e62c(void*, const char*);

void S_func_00596d00::f(char* p)
{
    const char* s = (const char*)0x7a0b44;
    if (*p == 0)
        s = (const char*)0x7979d0;
    sub_77e62c((void*)((char*)this + 0xf0), s);
    m_d = (double)(*p != 0);
}
