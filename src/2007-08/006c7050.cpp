// from server: 100% by colin
// roc 2007-08 006c7050  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c7050
//
// 006c7050  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 006c7056  85c0                 test eax, eax
// 006c7058  740c                 je 0x6c7066
// 006c705a  83782000             cmp dword ptr [eax + 0x20], 0
// 006c705e  7406                 je 0x6c7066
// 006c7060  b801000000           mov eax, 1
// 006c7065  c3                   ret 
// 006c7066  33c0                 xor eax, eax
// 006c7068  c3                   ret 

struct CXTPCustomizeSheet_CCustomizeEdit
{
    char pad[0x168];
    int* field_0x168;
    int IsValid();
};

int CXTPCustomizeSheet_CCustomizeEdit::IsValid()
{
    int* p = field_0x168;
    if (p != 0 && p[8] != 0)
        return 1;
    return 0;
}
