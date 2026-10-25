// from server: 100% by tester
// roc 2008-06 006d44f0  unit: CXTPReportControl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d44f0
//
// 006d44f0  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 006d44f6  50                   push eax
// 006d44f7  e8c4ffffff           call 0x6d44c0
// 006d44fc  c3                   ret 

typedef unsigned long DWORD;

struct CXTPReportControl {
    char pad[0x94];
    DWORD field_90;

    void SomeMethod();
};

void __stdcall sub_65e4a0(DWORD);

void CXTPReportControl::SomeMethod() {
    sub_65e4a0(this->field_90);
}
