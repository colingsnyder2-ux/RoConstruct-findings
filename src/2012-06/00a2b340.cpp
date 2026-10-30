// roc 2012-06 00a2b340  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2b340
//
// 00a2b340  837c240400           cmp dword ptr [esp + 4], 0
// 00a2b345  56                   push esi
// 00a2b346  8bf1                 mov esi, ecx
// 00a2b348  7432                 je 0xa2b37c
// 00a2b34a  8b4624               mov eax, dword ptr [esi + 0x24]
// 00a2b34d  83b8c401000000       cmp dword ptr [eax + 0x1c4], 0
// 00a2b354  750b                 jne 0xa2b361
// 00a2b356  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 00a2b35c  e87f10f9ff           call 0x9bc3e0
// 00a2b361  8b4624               mov eax, dword ptr [esi + 0x24]
// 00a2b364  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 00a2b36a  56                   push esi
// 00a2b36b  e88013f9ff           call 0x9bc6f0
// 00a2b370  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00a2b373  e8f808f8ff           call 0x9abc70
// 00a2b378  5e                   pop esi
// 00a2b379  c20400               ret 4
// 00a2b37c  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00a2b37f  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00a2b385  56                   push esi
// 00a2b386  e89513f9ff           call 0x9bc720
// 00a2b38b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00a2b38e  e8dd08f8ff           call 0x9abc70
// 00a2b393  5e                   pop esi
// 00a2b394  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?SetSelected@CXTPReportRow@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
