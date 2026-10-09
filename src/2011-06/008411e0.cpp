// roc 2011-06 008411e0  unit: CXTPReportRecordItemNumber  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008411e0
//
// 008411e0  8b442408             mov eax, dword ptr [esp + 8]
// 008411e4  56                   push esi
// 008411e5  50                   push eax
// 008411e6  8bf1                 mov esi, ecx
// 008411e8  ff155408a400         call dword ptr [0xa40854]
// 008411ee  dd9e80000000         fstp qword ptr [esi + 0x80]
// 008411f4  83c404               add esp, 4
// 008411f7  5e                   pop esi
// 008411f8  c20800               ret 8
// copied from an identical function in another client (function ?SetValueDouble@CXTPReportRecordItemNumber@ns_ROCX000014@@QAEXPBD0@Z)

namespace ns_ROCX000014 {
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
