// roc 2010-06 00841750  unit: CXTPKeyboardManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00841750
//
// 00841750  8bc1                 mov eax, ecx
// 00841752  33c9                 xor ecx, ecx
// 00841754  c7004074a600         mov dword ptr [eax], 0xa67440
// 0084175a  894804               mov dword ptr [eax + 4], ecx
// 0084175d  894810               mov dword ptr [eax + 0x10], ecx
// 00841760  89480c               mov dword ptr [eax + 0xc], ecx
// 00841763  894808               mov dword ptr [eax + 8], ecx
// 00841766  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00841750
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00841750();
};
S_func_00841750::S_func_00841750()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
