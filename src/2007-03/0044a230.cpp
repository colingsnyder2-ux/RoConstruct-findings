// roc 2007-03 0044a230  unit: seg_00440000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044a230
//
// 0044a230  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 0044a236  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0044a230 {
    char pad0[372];
    int m_x;
    int f();
};
int S_func_0044a230::f()
{
    return m_x;
}
