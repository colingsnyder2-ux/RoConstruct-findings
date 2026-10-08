// roc 2007-08 00587470  unit: RBX::Reflection::EnumDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587470
//
// 00587470  8b8120010000         mov eax, dword ptr [ecx + 0x120]
// 00587476  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00587470 {
    char pad0[288];
    int m_x;
    int f();
};
int S_func_00587470::f()
{
    return m_x;
}
