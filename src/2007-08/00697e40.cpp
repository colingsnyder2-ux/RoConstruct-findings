// roc 2007-08 00697e40  unit: CXTCaptionButton  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697e40
//
// 00697e40  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00697e46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00697e40 {
    char pad0[128];
    int m_x;
    int f();
};
int S_func_00697e40::f()
{
    return m_x;
}
