// roc 2011-06 00714f70  unit: RBX::TouchTransmitter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00714f70
//
// 00714f70  8b8160030000         mov eax, dword ptr [ecx + 0x360]
// 00714f76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00714f70 {
    char pad0[864];
    int m_x;
    int f();
};
int S_func_00714f70::f()
{
    return m_x;
}
