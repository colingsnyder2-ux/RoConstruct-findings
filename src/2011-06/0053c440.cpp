// roc 2011-06 0053c440  unit: G3D::Log  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053c440
//
// 0053c440  8bc1                 mov eax, ecx
// 0053c442  33c9                 xor ecx, ecx
// 0053c444  c700b8f7a700         mov dword ptr [eax], 0xa7f7b8
// 0053c44a  894804               mov dword ptr [eax + 4], ecx
// 0053c44d  894808               mov dword ptr [eax + 8], ecx
// 0053c450  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0053c440
{
    void* p0;
    int z0;
    int z1;
    S_func_0053c440();
};
S_func_0053c440::S_func_0053c440()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = 0;
}
