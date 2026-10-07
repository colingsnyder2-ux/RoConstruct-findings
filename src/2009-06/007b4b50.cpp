// roc 2009-06 007b4b50  unit: CXTPShortcutManager::CKeyHelper  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b4b50
//
// 007b4b50  8bc1                 mov eax, ecx
// 007b4b52  33c9                 xor ecx, ecx
// 007b4b54  c700d42f9000         mov dword ptr [eax], 0x902fd4
// 007b4b5a  894804               mov dword ptr [eax + 4], ecx
// 007b4b5d  894810               mov dword ptr [eax + 0x10], ecx
// 007b4b60  89480c               mov dword ptr [eax + 0xc], ecx
// 007b4b63  894808               mov dword ptr [eax + 8], ecx
// 007b4b66  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007b4b50
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007b4b50();
};
S_func_007b4b50::S_func_007b4b50()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
