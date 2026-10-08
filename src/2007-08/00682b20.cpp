// roc 2007-08 00682b20  unit: CXTPPropertyGrid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682b20
//
// 00682b20  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00682b26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00682b20 {
    char pad0[376];
    int m_x;
    int f();
};
int S_func_00682b20::f()
{
    return m_x;
}
