// roc 2008-06 006d87c0  unit: CXTPReportRecordItemNumber  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d87c0
//
// 006d87c0  8b442408             mov eax, dword ptr [esp + 8]
// 006d87c4  56                   push esi
// 006d87c5  50                   push eax
// 006d87c6  8bf1                 mov esi, ecx
// 006d87c8  ff15fc278000         call dword ptr [0x8027fc]
// 006d87ce  dd9e80000000         fstp qword ptr [esi + 0x80]
// 006d87d4  83c404               add esp, 4
// 006d87d7  5e                   pop esi
// 006d87d8  c20800               ret 8
// copied from an identical function in another client (function ?SetValueDouble@CXTPReportRecordItemNumber@ns_ROCX000022@@QAEXPBD0@Z)

namespace ns_ROCX000022 {
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
