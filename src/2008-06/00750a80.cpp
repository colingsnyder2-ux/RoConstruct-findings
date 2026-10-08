// from server: 100% by auto
// roc 2008-06 00750a80  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750a80
//
// 00750a80  837c240400           cmp dword ptr [esp + 4], 0
// 00750a85  56                   push esi
// 00750a86  8bf1                 mov esi, ecx
// 00750a88  7432                 je 0x750abc
// 00750a8a  8b4624               mov eax, dword ptr [esi + 0x24]
// 00750a8d  83b8c401000000       cmp dword ptr [eax + 0x1c4], 0
// 00750a94  750b                 jne 0x750aa1
// 00750a96  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 00750a9c  e8cfa3f8ff           call 0x6dae70
// 00750aa1  8b4624               mov eax, dword ptr [esi + 0x24]
// 00750aa4  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 00750aaa  56                   push esi
// 00750aab  e8d0a6f8ff           call 0x6db180
// 00750ab0  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00750ab3  e878b4f7ff           call 0x6cbf30
// 00750ab8  5e                   pop esi
// 00750ab9  c20400               ret 4
// 00750abc  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00750abf  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00750ac5  56                   push esi
// 00750ac6  e8e5a6f8ff           call 0x6db1b0
// 00750acb  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00750ace  e85db4f7ff           call 0x6cbf30
// 00750ad3  5e                   pop esi
// 00750ad4  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?SetSelected@CXTPReportRow@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
