// roc 2011-06 0089e870  unit: CXTPKeyboardManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e870
//
// 0089e870  8bc1                 mov eax, ecx
// 0089e872  33c9                 xor ecx, ecx
// 0089e874  c700601ead00         mov dword ptr [eax], 0xad1e60
// 0089e87a  894804               mov dword ptr [eax + 4], ecx
// 0089e87d  894810               mov dword ptr [eax + 0x10], ecx
// 0089e880  89480c               mov dword ptr [eax + 0xc], ecx
// 0089e883  894808               mov dword ptr [eax + 8], ecx
// 0089e886  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0089e870
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0089e870();
};
S_func_0089e870::S_func_0089e870()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
