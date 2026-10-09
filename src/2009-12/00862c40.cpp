// roc 2009-12 00862c40  unit: CXTPToolTipContext  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00862c40
//
// 00862c40  8b442408             mov eax, dword ptr [esp + 8]
// 00862c44  50                   push eax
// 00862c45  e846f3ffff           call 0x861f90
// 00862c4a  c20800               ret 8
// copied from an identical function in another client (function ?Forward@CXTPReportRecordItemText@ns_ROCX000016@@QAGXH@Z)

namespace ns_ROCX000016 {
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
