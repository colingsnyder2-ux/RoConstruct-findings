// from server: 100% by tester
// roc 2008-06 006b4c80  unit: CXTPCommandBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4c80
//
// 006b4c80  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 006b4c86  8b542404             mov edx, dword ptr [esp + 4]
// 006b4c8a  895014               mov dword ptr [eax + 0x14], edx
// 006b4c8d  8b01                 mov eax, dword ptr [ecx]
// 006b4c8f  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 006b4c95  6a01                 push 1
// 006b4c97  6a00                 push 0
// 006b4c99  ffd2                 call edx
// 006b4c9b  c20400               ret 4

struct CXTPCommandBar {
    void SetVisible(int bVisible);
};

void CXTPCommandBar::SetVisible(int bVisible) {
    *(int*)(*(int*)((char*)this + 0x178) + 0x14) = bVisible;
    (*(void (__thiscall**)(CXTPCommandBar*, int, int))(*(int*)this + 0x1ac))(this, 0, 1);
}