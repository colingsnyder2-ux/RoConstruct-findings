// roc 2010-06 0080e720  unit: RBX::BlockBlockContact  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080e720
//
// 0080e720  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0080e723  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0080e720 {
    char pad0[84];
    int m_x;
    int f();
};
int S_func_0080e720::f()
{
    return m_x;
}
