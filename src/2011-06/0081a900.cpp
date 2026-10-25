// from server: 100% by tester
// roc 2011-06 0081a900  unit: CXTPCommandBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081a900
//
// 0081a900  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 0081a906  8b542404             mov edx, dword ptr [esp + 4]
// 0081a90a  895014               mov dword ptr [eax + 0x14], edx
// 0081a90d  8b01                 mov eax, dword ptr [ecx]
// 0081a90f  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 0081a915  6a01                 push 1
// 0081a917  6a00                 push 0
// 0081a919  ffd2                 call edx
// 0081a91b  c20400               ret 4

struct CXTPCommandBar {
    void SetVisible(int bVisible);
};

void CXTPCommandBar::SetVisible(int bVisible) {
    *(int*)(*(int*)((char*)this + 0x178) + 0x14) = bVisible;
    (*(void (__thiscall**)(CXTPCommandBar*, int, int))(*(int*)this + 0x1ac))(this, 0, 1);
}