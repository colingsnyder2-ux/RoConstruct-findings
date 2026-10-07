// roc 2010-06 00667500  unit: RBX::PlayerGui  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00667500
//
// 00667500  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 00667506  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00667500 {
    char pad0[648];
    int m_x;
    int f();
};
int S_func_00667500::f()
{
    return m_x;
}
