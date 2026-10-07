// roc 2010-06 0041adc0  unit: CInstanceRecord::CNameItem  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041adc0
//
// 0041adc0  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 0041adc3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0041adc0 {
    char pad0[108];
    int m_x;
    int f();
};
int S_func_0041adc0::f()
{
    return m_x;
}
