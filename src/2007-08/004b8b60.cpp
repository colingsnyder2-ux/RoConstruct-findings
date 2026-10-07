// roc 2007-08 004b8b60  unit: RakPeer  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8b60
//
// 004b8b60  8b442404             mov eax, dword ptr [esp + 4]
// 004b8b64  8981f8080000         mov dword ptr [ecx + 0x8f8], eax
// 004b8b6a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004b8b60 {
    char pad0[2296];
    int m_x;
    void f(int a1);
};
void S_func_004b8b60::f(int a1)
{
    m_x = (int)a1;
}
