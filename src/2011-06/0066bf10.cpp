// roc 2011-06 0066bf10  unit: DxUserInput  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066bf10
//
// 0066bf10  8a8180010000         mov al, byte ptr [ecx + 0x180]
// 0066bf16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066bf10 {
    char pad0[384];
    char m_x;
    char f();
};
char S_func_0066bf10::f()
{
    return m_x;
}
