// roc 2009-12 00828180  unit: CXTPReportColumn  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00828180
//
// 00828180  56                   push esi
// 00828181  8bf1                 mov esi, ecx
// 00828183  837e6800             cmp dword ptr [esi + 0x68], 0
// 00828187  7511                 jne 0x82819a
// 00828189  e892fdffff           call 0x827f20
// 0082818e  8bc8                 mov ecx, eax
// 00828190  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00828196  03c1                 add eax, ecx
// 00828198  5e                   pop esi
// 00828199  c3                   ret 
// 0082819a  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008281a0  33c9                 xor ecx, ecx
// 008281a2  03c1                 add eax, ecx
// 008281a4  5e                   pop esi
// 008281a5  c3                   ret 
// copied from an identical function in another client (function ?getValue@CXTPReportColumn@@QAEHXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
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