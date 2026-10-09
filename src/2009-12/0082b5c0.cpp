// roc 2009-12 0082b5c0  unit: CXTPReportRecordItemNumber  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b5c0
//
// 0082b5c0  8b442408             mov eax, dword ptr [esp + 8]
// 0082b5c4  56                   push esi
// 0082b5c5  50                   push eax
// 0082b5c6  8bf1                 mov esi, ecx
// 0082b5c8  ff152cb89800         call dword ptr [0x98b82c]
// 0082b5ce  dd9e80000000         fstp qword ptr [esi + 0x80]
// 0082b5d4  83c404               add esp, 4
// 0082b5d7  5e                   pop esi
// 0082b5d8  c20800               ret 8
// copied from an identical function in another client (function ?SetValueDouble@CXTPReportRecordItemNumber@ns_ROCX00000f@@QAEXPBD0@Z)

namespace ns_ROCX00000f {
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
