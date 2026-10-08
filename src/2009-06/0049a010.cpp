// roc 2009-06 0049a010  unit: Ogre::RbxManualResourceLoaderChain  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049a010
//
// 0049a010  8bc1                 mov eax, ecx
// 0049a012  33c9                 xor ecx, ecx
// 0049a014  c700a0fc8b00         mov dword ptr [eax], 0x8bfca0
// 0049a01a  894810               mov dword ptr [eax + 0x10], ecx
// 0049a01d  89480c               mov dword ptr [eax + 0xc], ecx
// 0049a020  894808               mov dword ptr [eax + 8], ecx
// 0049a023  894804               mov dword ptr [eax + 4], ecx
// 0049a026  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0049a010
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0049a010();
};
S_func_0049a010::S_func_0049a010()
{
    p0 = (void*)&G;
    z0 = z1 = z2 = z3 = 0;
}
