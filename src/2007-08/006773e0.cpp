// from server: 97% by colin
// roc 2007-08 006773e0  unit: CXTPPopupBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006773e0
//
// 006773e0  56                   push esi
// 006773e1  57                   push edi
// 006773e2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006773e6  85ff                 test edi, edi
// 006773e8  8bf1                 mov esi, ecx
// 006773ea  750b                 jne 0x6773f7
// 006773ec  89beb0010000         mov dword ptr [esi + 0x1b0], edi
// 006773f2  5f                   pop edi
// 006773f3  5e                   pop esi
// 006773f4  c20c00               ret 0xc
// 006773f7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006773fb  50                   push eax
// 006773fc  8d8edc010000         lea ecx, [esi + 0x1dc]
// 00677402  c786b001000001000000 mov dword ptr [esi + 0x1b0], 1
// 0067740c  ff156cdd7700         call dword ptr [0x77dd6c]
// 00677412  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00677416  89bee0010000         mov dword ptr [esi + 0x1e0], edi
// 0067741c  5f                   pop edi
// 0067741d  898ee4010000         mov dword ptr [esi + 0x1e4], ecx
// 00677423  5e                   pop esi
// 00677424  c20c00               ret 0xc

struct CXTPPopupBar {
    char pad[0x1b0];
    int field_1b0;
    char pad2[0x1dc - 0x1b4];
    int field_1dc;
    int field_1e0;
    int field_1e4;
    void SetPopup(int, int, int);
};

struct Inner {
    void Method(int);
};

extern "C" void __stdcall sub_77dd6c(int);

void CXTPPopupBar::SetPopup(int a, int b, int c) {
    if (b == 0) {
        field_1b0 = b;
        return;
    }
    field_1b0 = 1;
    ((Inner*)((char*)this + 0x1dc))->Method(a);
    field_1e0 = b;
    field_1e4 = c;
}
