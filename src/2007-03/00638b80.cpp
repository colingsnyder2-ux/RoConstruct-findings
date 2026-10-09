// roc 2007-03 00638b80  unit: seg_00630000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00638b80
//
// 00638b80  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00638b86  8b542404             mov edx, dword ptr [esp + 4]
// 00638b8a  895014               mov dword ptr [eax + 0x14], edx
// 00638b8d  8b01                 mov eax, dword ptr [ecx]
// 00638b8f  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 00638b95  6a01                 push 1
// 00638b97  6a00                 push 0
// 00638b99  ffd2                 call edx
// 00638b9b  c20400               ret 4
// copied from an identical function in another client (function ?SetVisible@CXTPCommandBar@ns_ROCX000005@@QAEXH@Z)

namespace ns_ROCX000005 {
struct CXTPCommandBar {
    void SetVisible(int bVisible);
};

void CXTPCommandBar::SetVisible(int bVisible) {
    *(int*)(*(int*)((char*)this + 0x178) + 0x14) = bVisible;
    (*(void (__thiscall**)(CXTPCommandBar*, int, int))(*(int*)this + 0x19c))(this, 0, 1);
}
}
