// roc 2009-06 0049a0c0  unit: G3D::GImage  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049a0c0
//
// 0049a0c0  8bc1                 mov eax, ecx
// 0049a0c2  33c9                 xor ecx, ecx
// 0049a0c4  c700a8fc8b00         mov dword ptr [eax], 0x8bfca8
// 0049a0ca  894804               mov dword ptr [eax + 4], ecx
// 0049a0cd  894808               mov dword ptr [eax + 8], ecx
// 0049a0d0  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0049a0c0
{
    void* p0;
    int z0;
    int z1;
    S_func_0049a0c0();
};
S_func_0049a0c0::S_func_0049a0c0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = 0;
}
