// roc 2007-08 0068f180  unit: CXTPDockingPane  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f180
//
// 0068f180  8b442404             mov eax, dword ptr [esp + 4]
// 0068f184  894114               mov dword ptr [ecx + 0x14], eax
// 0068f187  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0068f180 {
    char pad0[20];
    int m_x;
    void f(int a1);
};
void S_func_0068f180::f(int a1)
{
    m_x = (int)a1;
}
