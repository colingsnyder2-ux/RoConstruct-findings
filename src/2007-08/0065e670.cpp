// from server: 87% by colin
// roc 2007-08 0065e670  unit: CXTPReportColumn  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e670
//
// 0065e670  56                   push esi
// 0065e671  8bf1                 mov esi, ecx
// 0065e673  8b4654               mov eax, dword ptr [esi + 0x54]
// 0065e676  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0065e679  56                   push esi
// 0065e67a  e8b14f0700           call 0x6d3630
// 0065e67f  83f8ff               cmp eax, -1
// 0065e682  7407                 je 0x65e68b
// 0065e684  b801000000           mov eax, 1
// 0065e689  5e                   pop esi
// 0065e68a  c3                   ret 
// 0065e68b  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0065e68e  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0065e691  56                   push esi
// 0065e692  e8994f0700           call 0x6d3630
// 0065e697  83f8ff               cmp eax, -1
// 0065e69a  7406                 je 0x65e6a2
// 0065e69c  837e4800             cmp dword ptr [esi + 0x48], 0
// 0065e6a0  75e2                 jne 0x65e684
// 0065e6a2  33c0                 xor eax, eax
// 0065e6a4  5e                   pop esi
// 0065e6a5  c3                   ret 

struct CXTPReportColumn
{
    char pad[0x20];
    int field20;
    int field24;
    char pad3[0x48 - 0x28];
    int field48;
    char pad4[0x54 - 0x4c];
    void* field54;
    int IsVisible();
};

extern "C" int __stdcall sub_6d3630(void* p, void* q);

int CXTPReportColumn::IsVisible()
{
    int result = sub_6d3630(*(void**)((char*)field54 + 0x24), this);
    if (result != -1)
        return 1;
    result = sub_6d3630(*(void**)((char*)field54 + 0x20), this);
    if (result != -1 && field48 != 0)
        return 1;
    return 0;
}
