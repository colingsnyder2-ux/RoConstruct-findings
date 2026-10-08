// from server: 76% by colin
// roc 2007-08 00662610  unit: CXTPReportRecordItemPreview  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00662610
//
// 00662610  51                   push ecx
// 00662611  56                   push esi
// 00662612  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00662616  83c17c               add ecx, 0x7c
// 00662619  51                   push ecx
// 0066261a  8bce                 mov ecx, esi
// 0066261c  c744240800000000     mov dword ptr [esp + 8], 0
// 00662624  ff1574dd7700         call dword ptr [0x77dd74]
// 0066262a  8bc6                 mov eax, esi
// 0066262c  5e                   pop esi
// 0066262d  59                   pop ecx
// 0066262e  c20400               ret 4

struct CXTPReportRecordItemPreview
{
    char pad[0x7c];
    void* field_7c;
    void* sub_00662610(void* param);
};

extern "C" void* __stdcall sub_77dd74(void*, void*);

void* CXTPReportRecordItemPreview::sub_00662610(void* param)
{
    void* tmp = 0;
    sub_77dd74(&field_7c, &tmp);
    return param;
}
