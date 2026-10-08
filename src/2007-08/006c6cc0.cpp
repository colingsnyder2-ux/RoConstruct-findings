// from server: 71% by colin
// roc 2007-08 006c6cc0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c6cc0
//
// 006c6cc0  56                   push esi
// 006c6cc1  8bf1                 mov esi, ecx
// 006c6cc3  8b465c               mov eax, dword ptr [esi + 0x5c]
// 006c6cc6  85c0                 test eax, eax
// 006c6cc8  740b                 je 0x6c6cd5
// 006c6cca  058c010000           add eax, 0x18c
// 006c6ccf  50                   push eax
// 006c6cd0  e81beef6ff           call 0x635af0
// 006c6cd5  8bce                 mov ecx, esi
// 006c6cd7  5e                   pop esi
// 006c6cd8  e96f9cf6ff           jmp 0x63094c

struct CXTPCustomizeSheet_CCustomizeEdit
{
    char pad[0x5c];
    void* field_5c;
    void Finalize();
};

extern "C" void __cdecl sub_635af0(void*);
extern "C" void __cdecl sub_63094c(void*);

void CXTPCustomizeSheet_CCustomizeEdit::Finalize()
{
    if (field_5c != 0)
    {
        sub_635af0((char*)field_5c + 0x18c);
    }
    sub_63094c(this);
}
