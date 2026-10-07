// roc 2008-06 00792450  unit: CXTCaptionButton  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792450
//
// 00792450  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 00792456  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00792450 {
    char pad0[156];
    int m_x;
    int f();
};
int S_func_00792450::f()
{
    return m_x;
}
