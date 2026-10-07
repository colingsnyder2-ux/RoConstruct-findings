// roc 2008-06 00583210  unit: RBX::CameraZoomExtentsCommand  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583210
//
// 00583210  8b442404             mov eax, dword ptr [esp + 4]
// 00583214  894124               mov dword ptr [ecx + 0x24], eax
// 00583217  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00583210 {
    char pad0[36];
    int m_x;
    void f(int a1);
};
void S_func_00583210::f(int a1)
{
    m_x = (int)a1;
}
