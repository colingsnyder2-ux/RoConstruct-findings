// roc 2011-06 0089ff60  unit: CXTPShortcutManager::CKeyHelper  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089ff60
//
// 0089ff60  8bc1                 mov eax, ecx
// 0089ff62  33c9                 xor ecx, ecx
// 0089ff64  c700c81ead00         mov dword ptr [eax], 0xad1ec8
// 0089ff6a  894804               mov dword ptr [eax + 4], ecx
// 0089ff6d  894810               mov dword ptr [eax + 0x10], ecx
// 0089ff70  89480c               mov dword ptr [eax + 0xc], ecx
// 0089ff73  894808               mov dword ptr [eax + 8], ecx
// 0089ff76  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0089ff60
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0089ff60();
};
S_func_0089ff60::S_func_0089ff60()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
