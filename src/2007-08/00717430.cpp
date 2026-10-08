// from server: 96% by colin
// roc 2007-08 00717430  unit: CXTPRibbonTabPopupToolBar  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00717430
//
// 00717430  56                   push esi
// 00717431  8b742408             mov esi, dword ptr [esp + 8]
// 00717435  8b06                 mov eax, dword ptr [esi]
// 00717437  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 0071743d  8bce                 mov ecx, esi
// 0071743f  ffd2                 call edx
// 00717441  85c0                 test eax, eax
// 00717443  7408                 je 0x71744d
// 00717445  8d86c4010000         lea eax, [esi + 0x1c4]
// 0071744b  5e                   pop esi
// 0071744c  c3                   ret 
// 0071744d  e8ceffffff           call 0x717420
// 00717452  50                   push eax
// 00717453  8bce                 mov ecx, esi
// 00717455  e8968df1ff           call 0x6301f0
// 0071745a  85c0                 test eax, eax
// 0071745c  7408                 je 0x717466
// 0071745e  8d8648020000         lea eax, [esi + 0x248]
// 00717464  5e                   pop esi
// 00717465  c3                   ret 
// 00717466  33c0                 xor eax, eax
// 00717468  5e                   pop esi
// 00717469  c3                   ret 

struct CXTPRibbonTabPopupToolBar {
    int field_0;
    char pad[0x1c4 - 4];
    int field_1c4;
    char pad2[0x248 - 0x1c8];
    int field_248;
    int getOther(int);
};

int helper_717420();

int getSomething(CXTPRibbonTabPopupToolBar* p) {
    int* vtbl = *(int**)p;
    int (__thiscall *fn)(CXTPRibbonTabPopupToolBar*) = (int (__thiscall *)(CXTPRibbonTabPopupToolBar*))vtbl[0x18c / 4];
    int result = fn(p);
    if (result != 0) {
        return (int)((char*)p + 0x1c4);
    }
    int h = helper_717420();
    int r2 = p->getOther(h);
    if (r2 != 0) {
        return (int)((char*)p + 0x248);
    }
    return 0;
}
