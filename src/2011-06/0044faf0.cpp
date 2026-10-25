// from server: 69% by atomic.potato
// roc 2011-06 0044faf0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0044faf0
//
// 0044faf0  51                   push ecx
// 0044faf1  56                   push esi
// 0044faf2  8bf1                 mov esi, ecx
// 0044faf4  8b4604               mov eax, dword ptr [esi + 4]
// 0044faf7  8b08                 mov ecx, dword ptr [eax]
// 0044faf9  50                   push eax
// 0044fafa  51                   push ecx
// 0044fafb  8d44240c             lea eax, [esp + 0xc]
// 0044faff  50                   push eax
// 0044fb00  8bce                 mov ecx, esi
// 0044fb02  e8c9f1ffff           call 0x44ecd0
// 0044fb07  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044fb0a  51                   push ecx
// 0044fb0b  e848a53b00           call 0x80a058
// 0044fb10  83c404               add esp, 4
// 0044fb13  33c0                 xor eax, eax
// 0044fb15  894604               mov dword ptr [esi + 4], eax
// 0044fb18  894608               mov dword ptr [esi + 8], eax
// 0044fb1b  5e                   pop esi
// 0044fb1c  59                   pop ecx
// 0044fb1d  c3                   ret 

struct Item {
    char pad0[4];
    int* field4;
    int field8;
    void sub_44ecd0(int*, int*, int*);
};

extern "C" void __stdcall sub_80a058(void*);

void func_0044faf0(Item* self)
{
    int local;
    int* p = self->field4;
    self->sub_44ecd0(&local, (int*)*p, p);
    sub_80a058(self->field4);
    self->field4 = 0;
    self->field8 = 0;
}
