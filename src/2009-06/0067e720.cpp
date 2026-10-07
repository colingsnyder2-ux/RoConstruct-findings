// roc 2009-06 0067e720  unit: RBX::Mechanism  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067e720
//
// 0067e720  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 0067e726  e915a50500           jmp 0x6d8c40
// auto-matched from its assembly shape

struct P_func_0067e720 { void g(); };
struct S_func_0067e720 {
    char pad[184];
    P_func_0067e720* m_p;
    void f();
};
void S_func_0067e720::f()
{
    m_p->g();
}
