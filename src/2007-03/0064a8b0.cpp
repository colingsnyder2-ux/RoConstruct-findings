// roc 2007-03 0064a8b0  unit: seg_00640000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064a8b0
//
// 0064a8b0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0064a8b6  50                   push eax
// 0064a8b7  e8c4ffffff           call 0x64a880
// 0064a8bc  c3                   ret 
// copied from an identical function in another client (function ?SomeMethod@CXTPReportControl@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
typedef unsigned long DWORD;

struct CXTPReportControl {
    char pad[0x90];
    DWORD field_90;

    void SomeMethod();
};

void __stdcall sub_65e4a0(DWORD);

void CXTPReportControl::SomeMethod() {
    sub_65e4a0(this->field_90);
}
}
