// from server: 100% by colin
// roc 2007-08 006c79d0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c79d0
//
// 006c79d0  56                   push esi
// 006c79d1  8bf1                 mov esi, ecx
// 006c79d3  e888ecf6ff           call 0x636660
// 006c79d8  c7060c767d00         mov dword ptr [esi], 0x7d760c
// 006c79de  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 006c79e5  8bc6                 mov eax, esi
// 006c79e7  5e                   pop esi
// 006c79e8  c3                   ret 

struct CXTPCustomizeSheet_CCustomizeEdit {
    CXTPCustomizeSheet_CCustomizeEdit* construct();
    int field_0;
    char pad[0x58];
    int field_5c;
};

void __fastcall base_ctor(void* p);

CXTPCustomizeSheet_CCustomizeEdit* CXTPCustomizeSheet_CCustomizeEdit::construct()
{
    base_ctor(this);
    *(int*)this = 0x7d760c;
    field_5c = 0;
    return this;
}
