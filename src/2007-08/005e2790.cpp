// roc 2007-08 005e2790  unit: seg_005e0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e2790
//
// 005e2790  8bc1                 mov eax, ecx
// 005e2792  33c9                 xor ecx, ecx
// 005e2794  c700aca87a00         mov dword ptr [eax], 0x7aa8ac
// 005e279a  894804               mov dword ptr [eax + 4], ecx
// 005e279d  894808               mov dword ptr [eax + 8], ecx
// 005e27a0  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_005e2790
{
    void* p0;
    int z0;
    int z1;
    S_func_005e2790();
};
S_func_005e2790::S_func_005e2790()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = 0;
}
