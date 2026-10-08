// roc 2007-03 004b9a10  unit: seg_004b0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9a10
//
// 004b9a10  8b81e0020000         mov eax, dword ptr [ecx + 0x2e0]
// 004b9a16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b9a10 {
    char pad0[736];
    int m_x;
    int f();
};
int S_func_004b9a10::f()
{
    return m_x;
}
