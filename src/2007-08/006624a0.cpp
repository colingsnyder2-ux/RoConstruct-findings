// from server: 100% by colin
// roc 2007-08 006624a0  unit: CXTPReportRecordItemNumber  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006624a0
//
// 006624a0  8b442408             mov eax, dword ptr [esp + 8]
// 006624a4  56                   push esi
// 006624a5  50                   push eax
// 006624a6  8bf1                 mov esi, ecx
// 006624a8  ff153ce97700         call dword ptr [0x77e93c]
// 006624ae  dd9e80000000         fstp qword ptr [esi + 0x80]
// 006624b4  83c404               add esp, 4
// 006624b7  5e                   pop esi
// 006624b8  c20800               ret 8

extern "C" double (__cdecl* atof)(const char*);

struct CXTPReportRecordItemNumber
{
    char  gap0[0x80];
    double m_nValue;
    void SetValueDouble(const char* a, const char* b);
};

void CXTPReportRecordItemNumber::SetValueDouble(const char* a, const char* b)
{
    m_nValue = atof(b);
}
