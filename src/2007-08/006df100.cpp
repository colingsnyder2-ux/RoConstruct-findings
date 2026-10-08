// roc 2007-08 006df100  unit: CXTPDockingPaneMiniWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006df100
//
// 006df100  8bc1                 mov eax, ecx
// 006df102  33c9                 xor ecx, ecx
// 006df104  c70050997d00         mov dword ptr [eax], 0x7d9950
// 006df10a  894804               mov dword ptr [eax + 4], ecx
// 006df10d  894810               mov dword ptr [eax + 0x10], ecx
// 006df110  89480c               mov dword ptr [eax + 0xc], ecx
// 006df113  894808               mov dword ptr [eax + 8], ecx
// 006df116  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006df100
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006df100();
};
S_func_006df100::S_func_006df100()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
