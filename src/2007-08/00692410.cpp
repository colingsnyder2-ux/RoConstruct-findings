// from server: 93% by colin
// roc 2007-08 00692410  unit: CXTPStatusBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692410
//
// 00692410  56                   push esi
// 00692411  8bf1                 mov esi, ecx
// 00692413  e8b8ffffff           call 0x6923d0
// 00692418  85c0                 test eax, eax
// 0069241a  750b                 jne 0x692427
// 0069241c  8bce                 mov ecx, esi
// 0069241e  e81bdef9ff           call 0x63023e
// 00692423  5e                   pop esi
// 00692424  c20400               ret 4
// 00692427  b801000000           mov eax, 1
// 0069242c  5e                   pop esi
// 0069242d  c20400               ret 4

struct CXTPStatusBar {
    int sub_6923D0();
    int sub_63023E();
    int func(int arg);
};

int CXTPStatusBar::func(int arg) {
    if (this->sub_6923D0() == 0) {
        this->sub_63023E();
        return 0;
    }
    return 1;
}
