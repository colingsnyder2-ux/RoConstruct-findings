// roc 2011-06 0066bed0  unit: DxUserInput  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066bed0
//
// 0066bed0  d981b8010000         fld dword ptr [ecx + 0x1b8]
// 0066bed6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066bed0 {
    char pad[440];
    float m_x;
    float f();
};
float S_func_0066bed0::f()
{
    return m_x;
}
