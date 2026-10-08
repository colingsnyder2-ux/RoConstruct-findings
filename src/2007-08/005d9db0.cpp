// roc 2007-08 005d9db0  unit: RBX::UnifiedImageWidget  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d9db0
//
// 005d9db0  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 005d9db6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005d9db0 {
    char pad0[260];
    int m_x;
    int f();
};
int S_func_005d9db0::f()
{
    return m_x;
}
