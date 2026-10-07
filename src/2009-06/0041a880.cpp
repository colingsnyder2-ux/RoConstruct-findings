// roc 2009-06 0041a880  unit: DxUserInput  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041a880
//
// 0041a880  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0041a883  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0041a880 {
    char pad0[84];
    int m_x;
    int f();
};
int S_func_0041a880::f()
{
    return m_x;
}
