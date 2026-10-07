// roc 2010-06 006acf50  unit: RBX::BaseThreadPool  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006acf50
//
// 006acf50  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 006acf56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006acf50 {
    char pad0[148];
    int m_x;
    int f();
};
int S_func_006acf50::f()
{
    return m_x;
}
