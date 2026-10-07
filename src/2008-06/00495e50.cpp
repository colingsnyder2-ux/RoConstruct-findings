// roc 2008-06 00495e50  unit: RBX::VRunService::?$SignalDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00495e50
//
// 00495e50  8b81ac010000         mov eax, dword ptr [ecx + 0x1ac]
// 00495e56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00495e50 {
    char pad0[428];
    int m_x;
    int f();
};
int S_func_00495e50::f()
{
    return m_x;
}
