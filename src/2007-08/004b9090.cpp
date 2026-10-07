// roc 2007-08 004b9090  unit: RakPeer  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9090
//
// 004b9090  8b442404             mov eax, dword ptr [esp + 4]
// 004b9094  89812c070000         mov dword ptr [ecx + 0x72c], eax
// 004b909a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004b9090 {
    char pad0[1836];
    int m_x;
    void f(int a1);
};
void S_func_004b9090::f(int a1)
{
    m_x = (int)a1;
}
