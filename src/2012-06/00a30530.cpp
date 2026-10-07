// roc 2012-06 00a30530  unit: CXTPReportHyperlink  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30530
//
// 00a30530  56                   push esi
// 00a30531  57                   push edi
// 00a30532  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a30536  8bf1                 mov esi, ecx
// 00a30538  8d4630               lea eax, [esi + 0x30]
// 00a3053b  50                   push eax
// 00a3053c  689004c200           push 0xc20490
// 00a30541  57                   push edi
// 00a30542  e8097efaff           call 0x9d8350
// 00a30547  83c634               add esi, 0x34
// 00a3054a  56                   push esi
// 00a3054b  688004c200           push 0xc20480
// 00a30550  57                   push edi
// 00a30551  e8fa7dfaff           call 0x9d8350
// 00a30556  83c418               add esp, 0x18
// 00a30559  5f                   pop edi
// 00a3055a  5e                   pop esi
// 00a3055b  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportHyperlink.cpp (function ?DoPropExchange@CXTPReportHyperlink@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportHyperlink.cpp
