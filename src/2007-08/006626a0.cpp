// from server: 80% by colin
// roc 2007-08 006626a0  unit: CXTPReportRecordItemText  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006626a0
//
// 006626a0  8b442408             mov eax, dword ptr [esp + 8]
// 006626a4  50                   push eax
// 006626a5  83c17c               add ecx, 0x7c
// 006626a8  ff156cdd7700         call dword ptr [0x77dd6c]
// 006626ae  c20800               ret 8

struct CXTPReportRecordItemText
{
    char pad[0x7c];
    void __stdcall Forward(int);
};

extern "C" void __stdcall Target(int);

void __stdcall CXTPReportRecordItemText::Forward(int arg)
{
    Target(arg);
}
