// roc 2008-06 00472990  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00472990
//
// 00472990  8bc1                 mov eax, ecx
// 00472992  33c9                 xor ecx, ecx
// 00472994  c700e0e18100         mov dword ptr [eax], 0x81e1e0
// 0047299a  894804               mov dword ptr [eax + 4], ecx
// 0047299d  894808               mov dword ptr [eax + 8], ecx
// 004729a0  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00472990
{
    void* p0;
    int z0;
    int z1;
    S_func_00472990();
};
S_func_00472990::S_func_00472990()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = 0;
}
