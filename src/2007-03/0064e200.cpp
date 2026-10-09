// roc 2007-03 0064e200  unit: seg_00640000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064e200
//
// 0064e200  8b442408             mov eax, dword ptr [esp + 8]
// 0064e204  56                   push esi
// 0064e205  50                   push eax
// 0064e206  8bf1                 mov esi, ecx
// 0064e208  ff1564ea7700         call dword ptr [0x77ea64]
// 0064e20e  dd9e80000000         fstp qword ptr [esi + 0x80]
// 0064e214  83c404               add esp, 4
// 0064e217  5e                   pop esi
// 0064e218  c20800               ret 8
// copied from an identical function in another client (function ?SetValueDouble@CXTPReportRecordItemNumber@ns_ROCX000018@@QAEXPBD0@Z)

namespace ns_ROCX000018 {
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
