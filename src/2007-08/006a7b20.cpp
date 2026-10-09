// from server: 89% by colin
// roc 2007-08 006a7b20  unit: CXTPRibbonBar  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7b20
//
// 006a7b20  56                   push esi
// 006a7b21  8bf1                 mov esi, ecx
// 006a7b23  8b06                 mov eax, dword ptr [esi]
// 006a7b25  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 006a7b2b  57                   push edi
// 006a7b2c  ffd2                 call edx
// 006a7b2e  8bf8                 mov edi, eax
// 006a7b30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a7b34  50                   push eax
// 006a7b35  8bce                 mov ecx, esi
// 006a7b37  e8248efaff           call 0x650960
// 006a7b3c  8bce                 mov ecx, esi
// 006a7b3e  e8fdfeffff           call 0x6a7a40
// 006a7b43  85c0                 test eax, eax
// 006a7b45  7419                 je 0x6a7b60
// 006a7b47  8b16                 mov edx, dword ptr [esi]
// 006a7b49  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 006a7b4f  ffd0                 call eax
// 006a7b51  3bf8                 cmp edi, eax
// 006a7b53  740b                 je 0x6a7b60
// 006a7b55  8b8e7c020000         mov ecx, dword ptr [esi + 0x27c]
// 006a7b5b  e810ef0600           call 0x716a70
// 006a7b60  5f                   pop edi
// 006a7b61  5e                   pop esi
// 006a7b62  c20400               ret 4

struct CXTPRibbonBar {
    void sub_650960(int);
    int sub_6a7a40();
    void sub_716a70();
    void func(int);
};

void CXTPRibbonBar::func(int arg) {
    int saved = (*(int (__thiscall **)(CXTPRibbonBar *))(*(int *)this + 0x160))(this);
    sub_650960(arg);
    if (sub_6a7a40() != 0) {
        int cur = (*(int (__thiscall **)(CXTPRibbonBar *))(*(int *)this + 0x160))(this);
        if (saved != cur) {
            sub_716a70();
        }
    }
}
