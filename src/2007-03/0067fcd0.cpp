// roc 2007-03 0067fcd0  unit: seg_00670000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067fcd0
//
// 0067fcd0  8b442408             mov eax, dword ptr [esp + 8]
// 0067fcd4  50                   push eax
// 0067fcd5  e8d6edffff           call 0x67eab0
// 0067fcda  c20800               ret 8
// copied from an identical function in another client (function ?Forward@CXTPReportRecordItemText@ns_ROCX00001f@@QAGXH@Z)

namespace ns_ROCX00001f {
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
}
