// from server: 87% by colin
// roc 2007-08 0042f1c0  unit: CMainFrame  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f1c0
//
// 0042f1c0  56                   push esi
// 0042f1c1  8bf1                 mov esi, ecx
// 0042f1c3  8b06                 mov eax, dword ptr [esi]
// 0042f1c5  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 0042f1cb  ffd2                 call edx
// 0042f1cd  85c0                 test eax, eax
// 0042f1cf  750a                 jne 0x42f1db
// 0042f1d1  8b442408             mov eax, dword ptr [esp + 8]
// 0042f1d5  898634010000         mov dword ptr [esi + 0x134], eax
// 0042f1db  5e                   pop esi
// 0042f1dc  c20400               ret 4

struct CMainFrame {
    char pad[0x134];
    int field_0x134;
    int method_0x188();
    void func(int arg);
};

void CMainFrame::func(int arg)
{
    if (this->method_0x188() == 0)
        this->field_0x134 = arg;
}
