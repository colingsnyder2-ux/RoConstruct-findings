// roc 2011-06 00536b00  unit: CSHA1  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00536b00
//
// 00536b00  8b81b8040000         mov eax, dword ptr [ecx + 0x4b8]
// 00536b06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00536b00 {
    char pad0[1208];
    int m_x;
    int f();
};
int S_func_00536b00::f()
{
    return m_x;
}
