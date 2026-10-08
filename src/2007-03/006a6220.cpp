// roc 2007-03 006a6220  unit: seg_006a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a6220
//
// 006a6220  8b81a4050000         mov eax, dword ptr [ecx + 0x5a4]
// 006a6226  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a6220 {
    char pad0[1444];
    int m_x;
    int f();
};
int S_func_006a6220::f()
{
    return m_x;
}
