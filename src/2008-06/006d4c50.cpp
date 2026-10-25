// from server: 100% by tester
// roc 2008-06 006d4c50  unit: CXTPReportColumn  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4c50
//
// 006d4c50  56                   push esi
// 006d4c51  8bf1                 mov esi, ecx
// 006d4c53  837e6800             cmp dword ptr [esi + 0x68], 0
// 006d4c57  7511                 jne 0x6d4c6a
// 006d4c59  e892fdffff           call 0x6d49f0
// 006d4c5e  8bc8                 mov ecx, eax
// 006d4c60  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 006d4c66  03c1                 add eax, ecx
// 006d4c68  5e                   pop esi
// 006d4c69  c3                   ret 
// 006d4c6a  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 006d4c70  33c9                 xor ecx, ecx
// 006d4c72  03c1                 add eax, ecx
// 006d4c74  5e                   pop esi
// 006d4c75  c3                   ret 

struct CXTPReportColumn
{
    char pad0[0x68];
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
