// roc 2008-06 007a1160  unit: CXTWindowMap  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1160
//
// 007a1160  8bc1                 mov eax, ecx
// 007a1162  33c9                 xor ecx, ecx
// 007a1164  c7008cf08600         mov dword ptr [eax], 0x86f08c
// 007a116a  89480c               mov dword ptr [eax + 0xc], ecx
// 007a116d  894808               mov dword ptr [eax + 8], ecx
// 007a1170  894804               mov dword ptr [eax + 4], ecx
// 007a1173  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007a1160
{
    void* p0;
    int z0;
    int z1;
    int z2;
    S_func_007a1160();
};
S_func_007a1160::S_func_007a1160()
{
    p0 = (void*)&G;
    z0 = z1 = z2 = 0;
}
