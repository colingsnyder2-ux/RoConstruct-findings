// roc 2007-08 006dc650  unit: CXTPDockingPaneWindowSelect  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006dc650
//
// 006dc650  8bc1                 mov eax, ecx
// 006dc652  33c9                 xor ecx, ecx
// 006dc654  c70024947d00         mov dword ptr [eax], 0x7d9424
// 006dc65a  894804               mov dword ptr [eax + 4], ecx
// 006dc65d  894810               mov dword ptr [eax + 0x10], ecx
// 006dc660  89480c               mov dword ptr [eax + 0xc], ecx
// 006dc663  894808               mov dword ptr [eax + 8], ecx
// 006dc666  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006dc650
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006dc650();
};
S_func_006dc650::S_func_006dc650()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
