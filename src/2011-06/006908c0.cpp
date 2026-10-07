// roc 2011-06 006908c0  unit: RBX::ImageLabel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006908c0
//
// 006908c0  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 006908c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006908c0 {
    char pad0[648];
    int m_x;
    int f();
};
int S_func_006908c0::f()
{
    return m_x;
}
