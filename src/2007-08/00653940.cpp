// from server: 76% by colin
// roc 2007-08 00653940  unit: CXTPReportRecordItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653940
//
// 00653940  51                   push ecx
// 00653941  56                   push esi
// 00653942  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00653946  83c160               add ecx, 0x60
// 00653949  51                   push ecx
// 0065394a  8bce                 mov ecx, esi
// 0065394c  c744240800000000     mov dword ptr [esp + 8], 0
// 00653954  ff1574dd7700         call dword ptr [0x77dd74]
// 0065395a  8bc6                 mov eax, esi
// 0065395c  5e                   pop esi
// 0065395d  59                   pop ecx
// 0065395e  c20800               ret 8

struct CXTPReportRecordItem {
    char pad[0x60];
    void* field60;
    CXTPReportRecordItem* assign(CXTPReportRecordItem* other, void* arg);
};

extern "C" void* __stdcall sub_77DD74(void*, void*);

CXTPReportRecordItem* CXTPReportRecordItem::assign(CXTPReportRecordItem* other, void* arg) {
    void* tmp = 0;
    sub_77DD74(&field60, &tmp);
    return other;
}
