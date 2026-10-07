// roc 2009-06 00740290  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00740290
//
// 00740290  8bc1                 mov eax, ecx
// 00740292  33c9                 xor ecx, ecx
// 00740294  c700e4448f00         mov dword ptr [eax], 0x8f44e4
// 0074029a  894804               mov dword ptr [eax + 4], ecx
// 0074029d  894810               mov dword ptr [eax + 0x10], ecx
// 007402a0  89480c               mov dword ptr [eax + 0xc], ecx
// 007402a3  894808               mov dword ptr [eax + 8], ecx
// 007402a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00740290
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00740290();
};
S_func_00740290::S_func_00740290()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
