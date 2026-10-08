// from server: 100% by colin
// roc 2007-08 006437f0  unit: CXTPCommandBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006437f0
//
// 006437f0  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 006437f6  8b542404             mov edx, dword ptr [esp + 4]
// 006437fa  895014               mov dword ptr [eax + 0x14], edx
// 006437fd  8b01                 mov eax, dword ptr [ecx]
// 006437ff  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 00643805  6a01                 push 1
// 00643807  6a00                 push 0
// 00643809  ffd2                 call edx
// 0064380b  c20400               ret 4

struct CXTPCommandBar {
    void SetVisible(int bVisible);
};

void CXTPCommandBar::SetVisible(int bVisible) {
    *(int*)(*(int*)((char*)this + 0x178) + 0x14) = bVisible;
    (*(void (__thiscall**)(CXTPCommandBar*, int, int))(*(int*)this + 0x19c))(this, 0, 1);
}
