// roc 2011-06 004967c0  unit: DxUserInput  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004967c0
//
// 004967c0  8b442404             mov eax, dword ptr [esp + 4]
// 004967c4  8981a8000000         mov dword ptr [ecx + 0xa8], eax
// 004967ca  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004967c0 {
    char pad0[168];
    int m_x;
    void f(int a1);
};
void S_func_004967c0::f(int a1)
{
    m_x = (int)a1;
}
