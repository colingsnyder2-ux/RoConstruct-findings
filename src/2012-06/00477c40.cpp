// roc 2012-06 00477c40  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00477c40
//
// 00477c40  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 00477c46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00477c40 {
    char pad0[384];
    int m_x;
    int f();
};
int S_func_00477c40::f()
{
    return m_x;
}
