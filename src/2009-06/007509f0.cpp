// from server: 80% by why2
// roc 2009-06 007509f0  unit: CXTPReportRecordItemText  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007509f0
//
// 007509f0  8b442408             mov eax, dword ptr [esp + 8]
// 007509f4  50                   push eax
// 007509f5  83c17c               add ecx, 0x7c
// 007509f8  ff15acfc8900         call dword ptr [0x89fcac]
// 007509fe  c20800               ret 8

extern "C" int __stdcall helper_89fcac(int);

struct CXTPReportRecordItemText {
    char pad[0x7c];
    int field_7c;
    int sub_7509f0(int, int);
};

int CXTPReportRecordItemText::sub_7509f0(int a, int b) {
    return helper_89fcac(b);
}
