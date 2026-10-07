// roc 2007-08 0054b730  unit: UString_sink::?$stream_buffer  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b730
//
// 0054b730  8b442404             mov eax, dword ptr [esp + 4]
// 0054b734  894148               mov dword ptr [ecx + 0x48], eax
// 0054b737  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0054b730 {
    char pad0[72];
    int m_x;
    void f(int a1);
};
void S_func_0054b730::f(int a1)
{
    m_x = (int)a1;
}
