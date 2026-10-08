// roc 2010-06 00857fd0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00857fd0
//
// 00857fd0  837c240400           cmp dword ptr [esp + 4], 0
// 00857fd5  56                   push esi
// 00857fd6  8bf1                 mov esi, ecx
// 00857fd8  7432                 je 0x85800c
// 00857fda  8b4624               mov eax, dword ptr [esi + 0x24]
// 00857fdd  83b8c401000000       cmp dword ptr [eax + 0x1c4], 0
// 00857fe4  750b                 jne 0x857ff1
// 00857fe6  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 00857fec  e85fa6f8ff           call 0x7e2650
// 00857ff1  8b4624               mov eax, dword ptr [esi + 0x24]
// 00857ff4  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 00857ffa  56                   push esi
// 00857ffb  e860a9f8ff           call 0x7e2960
// 00858000  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00858003  e8d8b4f7ff           call 0x7d34e0
// 00858008  5e                   pop esi
// 00858009  c20400               ret 4
// 0085800c  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0085800f  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00858015  56                   push esi
// 00858016  e875a9f8ff           call 0x7e2990
// 0085801b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0085801e  e8bdb4f7ff           call 0x7d34e0
// 00858023  5e                   pop esi
// 00858024  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?SetSelected@CXTPReportRow@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
