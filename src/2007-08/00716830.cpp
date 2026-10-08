// from server: 86% by colin
// roc 2007-08 00716830  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716830
//
// 00716830  56                   push esi
// 00716831  8bf1                 mov esi, ecx
// 00716833  e878ffffff           call 0x7167b0
// 00716838  85c0                 test eax, eax
// 0071683a  750d                 jne 0x716849
// 0071683c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0071683f  85c9                 test ecx, ecx
// 00716841  7406                 je 0x716849
// 00716843  5e                   pop esi
// 00716844  e93727f9ff           jmp 0x6a8f80
// 00716849  8bce                 mov ecx, esi
// 0071684b  e810ffffff           call 0x716760
// 00716850  8b80a4050000         mov eax, dword ptr [eax + 0x5a4]
// 00716856  034640               add eax, dword ptr [esi + 0x40]
// 00716859  5e                   pop esi
// 0071685a  c3                   ret 

struct CXTPRibbonTabContextHeader
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
    int field_30;
    int field_34;
    int field_38;
    int field_3c;
    int field_40;

    int sub_7167b0();
    int sub_716760();
    int sub_6a8f80();
    int sub_716830();
};

int CXTPRibbonTabContextHeader::sub_716830()
{
    if (sub_7167b0() == 0)
    {
        if (field_c != 0)
        {
            return sub_6a8f80();
        }
    }
    return *(int*)(sub_716760() + 0x5a4) + field_40;
}
