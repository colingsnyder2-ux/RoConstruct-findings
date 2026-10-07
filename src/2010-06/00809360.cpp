// roc 2010-06 00809360  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00809360
//
// 00809360  8bc1                 mov eax, ecx
// 00809362  33c9                 xor ecx, ecx
// 00809364  c700d40ea600         mov dword ptr [eax], 0xa60ed4
// 0080936a  894804               mov dword ptr [eax + 4], ecx
// 0080936d  894810               mov dword ptr [eax + 0x10], ecx
// 00809370  89480c               mov dword ptr [eax + 0xc], ecx
// 00809373  894808               mov dword ptr [eax + 8], ecx
// 00809376  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00809360
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00809360();
};
S_func_00809360::S_func_00809360()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
