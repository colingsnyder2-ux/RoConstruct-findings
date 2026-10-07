// roc 2010-06 0060a880  unit: std::strstream  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060a880
//
// 0060a880  c6812401000001       mov byte ptr [ecx + 0x124], 1
// 0060a887  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0060a880 {
    char pad0[292];
    char m_x;
    void f();
};
void S_func_0060a880::f()
{
    m_x = (char)1;
}
