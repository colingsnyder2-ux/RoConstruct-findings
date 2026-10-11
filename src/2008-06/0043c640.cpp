// from server: 80% by colin
// roc 2008-06 0043c640  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043c640
//
// 0043c640  56                   push esi
// 0043c641  8bf1                 mov esi, ecx
// 0043c643  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0043c649  85c0                 test eax, eax
// 0043c64b  7409                 je 0x43c656
// 0043c64d  50                   push eax
// 0043c64e  e827402600           call 0x6a067a
// 0043c653  83c404               add esp, 4
// 0043c656  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0043c65c  50                   push eax
// 0043c65d  c7862401000000000000 mov dword ptr [esi + 0x124], 0
// 0043c667  c7862801000000000000 mov dword ptr [esi + 0x128], 0
// 0043c671  c7862c01000000000000 mov dword ptr [esi + 0x12c], 0
// 0043c67b  e8fa3f2600           call 0x6a067a
// 0043c680  83c404               add esp, 4
// 0043c683  8bce                 mov ecx, esi
// 0043c685  e826b22d00           call 0x7178b0
// 0043c68a  f644240801           test byte ptr [esp + 8], 1
// 0043c68f  7409                 je 0x43c69a
// 0043c691  56                   push esi
// 0043c692  e8e33f2600           call 0x6a067a
// 0043c697  83c404               add esp, 4
// 0043c69a  8bc6                 mov eax, esi
// 0043c69c  5e                   pop esi
// 0043c69d  c20400               ret 4

extern "C" void __cdecl free_006a067a(void*);

struct HVCXTPPropertyGridItemEnum_XItem {
    char pad_0000[0x118];
    void* field_0118;
    char pad_011c[0x8];
    void* field_0124;
    void* field_0128;
    void* field_012c;
    void base_dtor();
    HVCXTPPropertyGridItemEnum_XItem* destroy(char flag);
};

void HVCXTPPropertyGridItemEnum_XItem::base_dtor()
{
    void (__thiscall* fn)(void*) = (void (__thiscall*)(void*))0x007178b0;
    fn(this);
}

HVCXTPPropertyGridItemEnum_XItem* HVCXTPPropertyGridItemEnum_XItem::destroy(char flag)
{
    if (field_0124) {
        free_006a067a(field_0124);
    }
    free_006a067a(field_0118);
    field_0124 = 0;
    field_0128 = 0;
    field_012c = 0;
    base_dtor();
    if (flag & 1) {
        free_006a067a(this);
    }
    return this;
}
