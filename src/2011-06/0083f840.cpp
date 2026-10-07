// roc 2011-06 0083f840  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083f840
//
// 0083f840  8bc1                 mov eax, ecx
// 0083f842  33c9                 xor ecx, ecx
// 0083f844  c7000c57ac00         mov dword ptr [eax], 0xac570c
// 0083f84a  894804               mov dword ptr [eax + 4], ecx
// 0083f84d  894810               mov dword ptr [eax + 0x10], ecx
// 0083f850  89480c               mov dword ptr [eax + 0xc], ecx
// 0083f853  894808               mov dword ptr [eax + 8], ecx
// 0083f856  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0083f840
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0083f840();
};
S_func_0083f840::S_func_0083f840()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
