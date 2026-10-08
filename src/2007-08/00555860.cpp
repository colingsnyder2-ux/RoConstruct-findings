// from server: 100% by colin
// roc 2007-08 00555860  unit: RBX::UnifiedWidget  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00555860
//
// 00555860  8b442404             mov eax, dword ptr [esp + 4]
// 00555864  3981fc000000         cmp dword ptr [ecx + 0xfc], eax
// 0055586a  740d                 je 0x555879
// 0055586c  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 00555872  8b01                 mov eax, dword ptr [ecx]
// 00555874  8b5068               mov edx, dword ptr [eax + 0x68]
// 00555877  ffd2                 call edx
// 00555879  c20400               ret 4

struct UnifiedWidget {
    char pad[0xfc];
    int menuState;
    void setMenuState(int value);
};

void UnifiedWidget::setMenuState(int value) {
    if (menuState != value) {
        menuState = value;
        (*(void (__thiscall **)(UnifiedWidget *))(*(int *)this + 0x68))(this);
    }
}
