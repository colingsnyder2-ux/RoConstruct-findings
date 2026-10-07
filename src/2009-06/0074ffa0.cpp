// roc 2009-06 0074ffa0  unit: CInstanceRecord  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074ffa0
//
// 0074ffa0  8bc1                 mov eax, ecx
// 0074ffa2  33c9                 xor ecx, ecx
// 0074ffa4  c700cc548f00         mov dword ptr [eax], 0x8f54cc
// 0074ffaa  894804               mov dword ptr [eax + 4], ecx
// 0074ffad  894810               mov dword ptr [eax + 0x10], ecx
// 0074ffb0  89480c               mov dword ptr [eax + 0xc], ecx
// 0074ffb3  894808               mov dword ptr [eax + 8], ecx
// 0074ffb6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0074ffa0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0074ffa0();
};
S_func_0074ffa0::S_func_0074ffa0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
