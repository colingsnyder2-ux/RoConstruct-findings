// from server: 76% by colin
// roc 2007-08 0065ecd0  unit: CXTPReportColumn  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065ecd0
//
// 0065ecd0  51                   push ecx
// 0065ecd1  56                   push esi
// 0065ecd2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065ecd6  83c124               add ecx, 0x24
// 0065ecd9  51                   push ecx
// 0065ecda  8bce                 mov ecx, esi
// 0065ecdc  c744240800000000     mov dword ptr [esp + 8], 0
// 0065ece4  ff1574dd7700         call dword ptr [0x77dd74]
// 0065ecea  8bc6                 mov eax, esi
// 0065ecec  5e                   pop esi
// 0065eced  59                   pop ecx
// 0065ecee  c20400               ret 4

struct CXTPReportColumn
{
    char pad[0x24];
    int field_24;
    CXTPReportColumn* sub_0065ecd0(CXTPReportColumn* other);
};

extern "C" void* __stdcall sub_77dd74(void*, void*);

CXTPReportColumn* CXTPReportColumn::sub_0065ecd0(CXTPReportColumn* other)
{
    int local = 0;
    sub_77dd74(&this->field_24, &local);
    return other;
}
