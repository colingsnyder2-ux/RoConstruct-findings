// roc 2010-06 006501e0  unit: RBX::VControllerService::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006501e0
//
// 006501e0  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 006501e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006501e0 {
    char pad0[292];
    int m_x;
    int f();
};
int S_func_006501e0::f()
{
    return m_x;
}
