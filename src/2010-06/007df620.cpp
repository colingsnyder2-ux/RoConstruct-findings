// roc 2010-06 007df620  unit: CXTPReportRecordItemNumber  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007df620
//
// 007df620  8b442408             mov eax, dword ptr [esp + 8]
// 007df624  56                   push esi
// 007df625  50                   push eax
// 007df626  8bf1                 mov esi, ecx
// 007df628  ff1548a79e00         call dword ptr [0x9ea748]
// 007df62e  dd9e80000000         fstp qword ptr [esi + 0x80]
// 007df634  83c404               add esp, 4
// 007df637  5e                   pop esi
// 007df638  c20800               ret 8
// copied from an identical function in another client (function ?SetValueDouble@CXTPReportRecordItemNumber@ns_ROCX00000b@@QAEXPBD0@Z)

namespace ns_ROCX00000b {
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
}
