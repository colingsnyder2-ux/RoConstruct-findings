// from server: 100% by tester
// roc 2008-06 005735c0  unit: RBX::UnifiedWidget  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005735c0
//
// 005735c0  8b442404             mov eax, dword ptr [esp + 4]
// 005735c4  398144010000         cmp dword ptr [ecx + 0x144], eax
// 005735ca  740d                 je 0x5735d9
// 005735cc  898144010000         mov dword ptr [ecx + 0x144], eax
// 005735d2  8b01                 mov eax, dword ptr [ecx]
// 005735d4  8b5064               mov edx, dword ptr [eax + 0x64]
// 005735d7  ffd2                 call edx
// 005735d9  c20400               ret 4

struct UnifiedWidget {
    char pad[0x144];
    int menuState;
    void setMenuState(int value);
};

void UnifiedWidget::setMenuState(int value) {
    if (menuState != value) {
        menuState = value;
        (*(void (__thiscall **)(UnifiedWidget *))(*(int *)this + 0x64))(this);
    }
}
