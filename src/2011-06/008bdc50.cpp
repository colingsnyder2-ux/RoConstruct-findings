// roc 2011-06 008bdc50  unit: CXTPDockingPaneWindowSelect  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bdc50
//
// 008bdc50  8bc1                 mov eax, ecx
// 008bdc52  33c9                 xor ecx, ecx
// 008bdc54  c7002458ad00         mov dword ptr [eax], 0xad5824
// 008bdc5a  894804               mov dword ptr [eax + 4], ecx
// 008bdc5d  894810               mov dword ptr [eax + 0x10], ecx
// 008bdc60  89480c               mov dword ptr [eax + 0xc], ecx
// 008bdc63  894808               mov dword ptr [eax + 8], ecx
// 008bdc66  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008bdc50
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008bdc50();
};
S_func_008bdc50::S_func_008bdc50()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
