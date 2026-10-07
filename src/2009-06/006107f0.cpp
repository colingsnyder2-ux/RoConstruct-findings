// roc 2009-06 006107f0  unit: RBX::CameraZoomExtentsCommand  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006107f0
//
// 006107f0  8b442404             mov eax, dword ptr [esp + 4]
// 006107f4  894124               mov dword ptr [ecx + 0x24], eax
// 006107f7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006107f0 {
    char pad0[36];
    int m_x;
    void f(int a1);
};
void S_func_006107f0::f(int a1)
{
    m_x = (int)a1;
}
