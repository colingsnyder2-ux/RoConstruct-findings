// from DeepSeek/server: 100% by colin
// roc 2007-08 0065eb30  unit: CXTPReportColumn  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065eb30
//
// 0065eb30  56                   push esi
// 0065eb31  8bf1                 mov esi, ecx
// 0065eb33  837e6400             cmp dword ptr [esi + 0x64], 0
// 0065eb37  7511                 jne 0x65eb4a
// 0065eb39  e862feffff           call 0x65e9a0
// 0065eb3e  8bc8                 mov ecx, eax
// 0065eb40  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0065eb46  03c1                 add eax, ecx
// 0065eb48  5e                   pop esi
// 0065eb49  c3                   ret 
// 0065eb4a  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0065eb50  33c9                 xor ecx, ecx
// 0065eb52  03c1                 add eax, ecx
// 0065eb54  5e                   pop esi
// 0065eb55  c3                   ret 

struct CXTPReportColumn
{
    char pad0[0x64];
    int field_0x64;
    char pad1[0x38];
    int field_0xa0;
    int getSomething();
    int getValue();
};

int CXTPReportColumn::getValue()
{
    int r;
    if (field_0x64 == 0)
    {
        r = getSomething();
    }
    else
    {
        r = 0;
    }
    return field_0xa0 + r;
}
