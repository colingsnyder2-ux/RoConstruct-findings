// roc 2008-06 0074eb40  unit: CXTPReportHyperlink  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074eb40
//
// 0074eb40  56                   push esi
// 0074eb41  57                   push edi
// 0074eb42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0074eb46  8bf1                 mov esi, ecx
// 0074eb48  8d4630               lea eax, [esi + 0x30]
// 0074eb4b  50                   push eax
// 0074eb4c  6880438600           push 0x864380
// 0074eb51  57                   push edi
// 0074eb52  e8e9e7faff           call 0x6fd340
// 0074eb57  83c634               add esi, 0x34
// 0074eb5a  56                   push esi
// 0074eb5b  6870438600           push 0x864370
// 0074eb60  57                   push edi
// 0074eb61  e8dae7faff           call 0x6fd340
// 0074eb66  83c418               add esp, 0x18
// 0074eb69  5f                   pop edi
// 0074eb6a  5e                   pop esi
// 0074eb6b  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHyperlink.cpp (function ?DoPropExchange@CXTPReportHyperlink@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHyperlink.cpp
