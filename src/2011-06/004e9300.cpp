// roc 2011-06 004e9300  unit: RBX::Network::PhysicsSender::Job  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e9300
//
// 004e9300  8bc1                 mov eax, ecx
// 004e9302  33c9                 xor ecx, ecx
// 004e9304  c70074a8a700         mov dword ptr [eax], 0xa7a874
// 004e930a  894804               mov dword ptr [eax + 4], ecx
// 004e930d  894808               mov dword ptr [eax + 8], ecx
// 004e9310  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_004e9300
{
    void* p0;
    int z0;
    int z1;
    S_func_004e9300();
};
S_func_004e9300::S_func_004e9300()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = 0;
}
