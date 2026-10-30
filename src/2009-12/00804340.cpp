// roc 2009-12 00804340  unit: CXTPCommandBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804340
//
// 00804340  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00804346  8b542404             mov edx, dword ptr [esp + 4]
// 0080434a  895014               mov dword ptr [eax + 0x14], edx
// 0080434d  8b01                 mov eax, dword ptr [ecx]
// 0080434f  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00804355  6a01                 push 1
// 00804357  6a00                 push 0
// 00804359  ffd2                 call edx
// 0080435b  c20400               ret 4
// copied from an identical function in another client (function ?SetVisible@CXTPCommandBar@ns_ROCX00000e@@QAEXH@Z)

namespace ns_ROCX00000e {
// from server: 100% by tester
struct CXTPCommandBar {
    void SetVisible(int bVisible);
};

void CXTPCommandBar::SetVisible(int bVisible) {
    *(int*)(*(int*)((char*)this + 0x178) + 0x14) = bVisible;
    (*(void (__thiscall**)(CXTPCommandBar*, int, int))(*(int*)this + 0x1ac))(this, 0, 1);
}
}
