// from server: 100% by colin
// roc 2007-08 006d0ff0  unit: CXTPReportInplaceEdit  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d0ff0
//
// 006d0ff0  56                   push esi
// 006d0ff1  8bf1                 mov esi, ecx
// 006d0ff3  837e5800             cmp dword ptr [esi + 0x58], 0
// 006d0ff7  741f                 je 0x6d1018
// 006d0ff9  837e6400             cmp dword ptr [esi + 0x64], 0
// 006d0ffd  7419                 je 0x6d1018
// 006d0fff  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 006d1002  8b01                 mov eax, dword ptr [ecx]
// 006d1004  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 006d100a  8d5654               lea edx, [esi + 0x54]
// 006d100d  52                   push edx
// 006d100e  ffd0                 call eax
// 006d1010  8bce                 mov ecx, esi
// 006d1012  5e                   pop esi
// 006d1013  e9b8ffffff           jmp 0x6d0fd0
// 006d1018  5e                   pop esi
// 006d1019  c3                   ret 

struct CXTPReportInplaceEdit {
    char pad[0x54];
    int field_54;
    int field_58;
    char pad2[8];
    void* field_64;
    void OnFocus();
    void DoSomething();
};

void CXTPReportInplaceEdit::DoSomething()
{
    if (field_58 != 0 && field_64 != 0)
    {
        void** vtbl = *(void***)field_64;
        void (__thiscall *fn)(void*, int*) = (void (__thiscall *)(void*, int*))vtbl[0x120 / 4];
        fn(field_64, &field_54);
        OnFocus();
    }
}
