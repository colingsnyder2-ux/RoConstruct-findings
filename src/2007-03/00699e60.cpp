// roc 2007-03 00699e60  unit: seg_00690000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00699e60
//
// 00699e60  8b8158020000         mov eax, dword ptr [ecx + 0x258]
// 00699e66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00699e60 {
    char pad0[600];
    int m_x;
    int f();
};
int S_func_00699e60::f()
{
    return m_x;
}
