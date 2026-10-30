// from server: 100% by auto
// roc 2008-06 006d8880  unit: CXTPReportRecordItemDateTime  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d8880
//
// 006d8880  56                   push esi
// 006d8881  57                   push edi
// 006d8882  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d8886  57                   push edi
// 006d8887  8bf1                 mov esi, ecx
// 006d8889  e82203ffff           call 0x6c8bb0
// 006d888e  83c67c               add esi, 0x7c
// 006d8891  56                   push esi
// 006d8892  6878848100           push 0x818478
// 006d8897  57                   push edi
// 006d8898  e8c34b0200           call 0x6fd460
// 006d889d  83c40c               add esp, 0xc
// 006d88a0  5f                   pop edi
// 006d88a1  5e                   pop esi
// 006d88a2  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemDateTime@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
