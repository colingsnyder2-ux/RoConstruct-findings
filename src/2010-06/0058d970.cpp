// roc 2010-06 0058d970  unit: seg_00580000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058d970
//
// 0058d970  8b8198000000         mov eax, dword ptr [ecx + 0x98]
// 0058d976  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0058d970 {
    char pad0[152];
    int m_x;
    int f();
};
int S_func_0058d970::f()
{
    return m_x;
}
