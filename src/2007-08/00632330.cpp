// roc 2007-08 00632330  unit: CRobloxControlColorSelector  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632330
//
// 00632330  8bc1                 mov eax, ecx
// 00632332  33c9                 xor ecx, ecx
// 00632334  c700184f7c00         mov dword ptr [eax], 0x7c4f18
// 0063233a  894804               mov dword ptr [eax + 4], ecx
// 0063233d  894810               mov dword ptr [eax + 0x10], ecx
// 00632340  89480c               mov dword ptr [eax + 0xc], ecx
// 00632343  894808               mov dword ptr [eax + 8], ecx
// 00632346  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00632330
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00632330();
};
S_func_00632330::S_func_00632330()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
