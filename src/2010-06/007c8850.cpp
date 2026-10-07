// roc 2010-06 007c8850  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c8850
//
// 007c8850  8bc1                 mov eax, ecx
// 007c8852  33c9                 xor ecx, ecx
// 007c8854  c7008480a500         mov dword ptr [eax], 0xa58084
// 007c885a  894804               mov dword ptr [eax + 4], ecx
// 007c885d  894810               mov dword ptr [eax + 0x10], ecx
// 007c8860  89480c               mov dword ptr [eax + 0xc], ecx
// 007c8863  894808               mov dword ptr [eax + 8], ecx
// 007c8866  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007c8850
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007c8850();
};
S_func_007c8850::S_func_007c8850()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
