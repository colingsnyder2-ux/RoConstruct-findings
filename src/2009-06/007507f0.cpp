// roc 2009-06 007507f0  unit: CXTPReportRecordItemNumber  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007507f0
//
// 007507f0  8b442408             mov eax, dword ptr [esp + 8]
// 007507f4  56                   push esi
// 007507f5  50                   push eax
// 007507f6  8bf1                 mov esi, ecx
// 007507f8  ff15ece88900         call dword ptr [0x89e8ec]
// 007507fe  dd9e80000000         fstp qword ptr [esi + 0x80]
// 00750804  83c404               add esp, 4
// 00750807  5e                   pop esi
// 00750808  c20800               ret 8
// copied from an identical function in another client (function ?SetValueDouble@CXTPReportRecordItemNumber@ns_ROCX000020@@QAEXPBD0@Z)

namespace ns_ROCX000020 {
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
