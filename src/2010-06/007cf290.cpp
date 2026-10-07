// roc 2010-06 007cf290  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cf290
//
// 007cf290  8bc1                 mov eax, ecx
// 007cf292  33c9                 xor ecx, ecx
// 007cf294  c700a88ca500         mov dword ptr [eax], 0xa58ca8
// 007cf29a  894804               mov dword ptr [eax + 4], ecx
// 007cf29d  894810               mov dword ptr [eax + 0x10], ecx
// 007cf2a0  89480c               mov dword ptr [eax + 0xc], ecx
// 007cf2a3  894808               mov dword ptr [eax + 8], ecx
// 007cf2a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007cf290
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007cf290();
};
S_func_007cf290::S_func_007cf290()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
