// from server: 87% by colin
// roc 2007-08 006c6b30  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c6b30
//
// 006c6b30  56                   push esi
// 006c6b31  8b742408             mov esi, dword ptr [esp + 8]
// 006c6b35  56                   push esi
// 006c6b36  e8d53df7ff           call 0x63a910
// 006c6b3b  85c0                 test eax, eax
// 006c6b3d  7504                 jne 0x6c6b43
// 006c6b3f  5e                   pop esi
// 006c6b40  c20400               ret 4
// 006c6b43  e808fdffff           call 0x6c6850
// 006c6b48  50                   push eax
// 006c6b49  8bce                 mov ecx, esi
// 006c6b4b  e8a096f6ff           call 0x6301f0
// 006c6b50  f7d8                 neg eax
// 006c6b52  1bc0                 sbb eax, eax
// 006c6b54  f7d8                 neg eax
// 006c6b56  5e                   pop esi
// 006c6b57  c20400               ret 4

struct CXTPCustomizeSheet_CCustomizeEdit {
    bool IsCustomizeEdit(void* p) const;
};

extern "C" void* __stdcall sub_0063a910(void*);
extern "C" void* __stdcall sub_006c6850();
extern "C" int __stdcall sub_006301f0(void*, void*);

bool CXTPCustomizeSheet_CCustomizeEdit::IsCustomizeEdit(void* p) const
{
    if (sub_0063a910(p) == 0)
        return false;
    void* v = sub_006c6850();
    return sub_006301f0(p, v) != 0;
}
