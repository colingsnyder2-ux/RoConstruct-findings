// from server: 100% by tester
// roc 2010-06 007b8440  unit: CXTPCommandBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8440
//
// 007b8440  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 007b8446  8b542404             mov edx, dword ptr [esp + 4]
// 007b844a  895014               mov dword ptr [eax + 0x14], edx
// 007b844d  8b01                 mov eax, dword ptr [ecx]
// 007b844f  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 007b8455  6a01                 push 1
// 007b8457  6a00                 push 0
// 007b8459  ffd2                 call edx
// 007b845b  c20400               ret 4

struct CXTPCommandBar {
    void SetVisible(int bVisible);
};

void CXTPCommandBar::SetVisible(int bVisible) {
    *(int*)(*(int*)((char*)this + 0x178) + 0x14) = bVisible;
    (*(void (__thiscall**)(CXTPCommandBar*, int, int))(*(int*)this + 0x1ac))(this, 0, 1);
}