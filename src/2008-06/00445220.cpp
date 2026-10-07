// roc 2008-06 00445220  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445220
//
// 00445220  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 00445226  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00445220 {
    char pad0[308];
    int m_x;
    int f();
};
int S_func_00445220::f()
{
    return m_x;
}
