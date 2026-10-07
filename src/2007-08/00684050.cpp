// roc 2007-08 00684050  unit: CXTPPropertyGrid  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00684050
//
// 00684050  8bc1                 mov eax, ecx
// 00684052  33c9                 xor ecx, ecx
// 00684054  c700b8f07c00         mov dword ptr [eax], 0x7cf0b8
// 0068405a  894804               mov dword ptr [eax + 4], ecx
// 0068405d  894810               mov dword ptr [eax + 0x10], ecx
// 00684060  89480c               mov dword ptr [eax + 0xc], ecx
// 00684063  894808               mov dword ptr [eax + 8], ecx
// 00684066  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00684050
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00684050();
};
S_func_00684050::S_func_00684050()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
