// roc 2007-03 0064e220  unit: seg_00640000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064e220
//
// 0064e220  56                   push esi
// 0064e221  57                   push edi
// 0064e222  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064e226  57                   push edi
// 0064e227  8bf1                 mov esi, ecx
// 0064e229  e8923bffff           call 0x641dc0
// 0064e22e  81c680000000         add esi, 0x80
// 0064e234  56                   push esi
// 0064e235  68600c7900           push 0x790c60
// 0064e23a  57                   push edi
// 0064e23b  e8a08b0100           call 0x666de0
// 0064e240  83c40c               add esp, 0xc
// 0064e243  5f                   pop edi
// 0064e244  5e                   pop esi
// 0064e245  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemNumber@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecordItemText.cpp
