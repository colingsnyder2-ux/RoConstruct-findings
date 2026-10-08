// roc 2009-06 00750a10  unit: CXTPReportRecordItemPreview  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00750a10
//
// 00750a10  56                   push esi
// 00750a11  57                   push edi
// 00750a12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00750a16  57                   push edi
// 00750a17  8bf1                 mov esi, ecx
// 00750a19  e89207ffff           call 0x7411b0
// 00750a1e  83c67c               add esi, 0x7c
// 00750a21  56                   push esi
// 00750a22  68005a8f00           push 0x8f5a00
// 00750a27  57                   push edi
// 00750a28  e803530200           call 0x775d30
// 00750a2d  83c40c               add esp, 0xc
// 00750a30  5f                   pop edi
// 00750a31  5e                   pop esi
// 00750a32  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemPreview@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
