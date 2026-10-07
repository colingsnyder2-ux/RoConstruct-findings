// roc 2010-06 005e6b50  unit: RBX::CameraZoomExtentsCommand  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e6b50
//
// 005e6b50  8b442404             mov eax, dword ptr [esp + 4]
// 005e6b54  894124               mov dword ptr [ecx + 0x24], eax
// 005e6b57  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005e6b50 {
    char pad0[36];
    int m_x;
    void f(int a1);
};
void S_func_005e6b50::f(int a1)
{
    m_x = (int)a1;
}
