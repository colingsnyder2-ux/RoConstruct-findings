// roc 2011-06 008b8060  unit: CXTPReportHyperlink  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8060
//
// 008b8060  56                   push esi
// 008b8061  57                   push edi
// 008b8062  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008b8066  8bf1                 mov esi, ecx
// 008b8068  8d4630               lea eax, [esi + 0x30]
// 008b806b  50                   push eax
// 008b806c  68004ead00           push 0xad4e00
// 008b8071  57                   push edi
// 008b8072  e8a97efaff           call 0x85ff20
// 008b8077  83c634               add esi, 0x34
// 008b807a  56                   push esi
// 008b807b  68f04dad00           push 0xad4df0
// 008b8080  57                   push edi
// 008b8081  e89a7efaff           call 0x85ff20
// 008b8086  83c418               add esp, 0x18
// 008b8089  5f                   pop edi
// 008b808a  5e                   pop esi
// 008b808b  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportHyperlink.cpp (function ?DoPropExchange@CXTPReportHyperlink@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportHyperlink.cpp
