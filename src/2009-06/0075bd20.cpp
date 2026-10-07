// roc 2009-06 0075bd20  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075bd20
//
// 0075bd20  8bc1                 mov eax, ecx
// 0075bd22  33c9                 xor ecx, ecx
// 0075bd24  c700c4788f00         mov dword ptr [eax], 0x8f78c4
// 0075bd2a  894804               mov dword ptr [eax + 4], ecx
// 0075bd2d  894810               mov dword ptr [eax + 0x10], ecx
// 0075bd30  89480c               mov dword ptr [eax + 0xc], ecx
// 0075bd33  894808               mov dword ptr [eax + 8], ecx
// 0075bd36  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0075bd20
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0075bd20();
};
S_func_0075bd20::S_func_0075bd20()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
