// roc 2009-06 0074f000  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074f000
//
// 0074f000  8b442404             mov eax, dword ptr [esp + 4]
// 0074f004  56                   push esi
// 0074f005  8bf1                 mov esi, ecx
// 0074f007  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0074f00a  89868c000000         mov dword ptr [esi + 0x8c], eax
// 0074f010  c7810c01000000000000 mov dword ptr [ecx + 0x10c], 0
// 0074f01a  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 0074f021  7412                 je 0x74f035
// 0074f023  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0074f026  83792000             cmp dword ptr [ecx + 0x20], 0
// 0074f02a  7409                 je 0x74f035
// 0074f02c  6a00                 push 0
// 0074f02e  6a00                 push 0
// 0074f030  e835d10f00           call 0x84c16a
// 0074f035  8b4624               mov eax, dword ptr [esi + 0x24]
// 0074f038  8b5078               mov edx, dword ptr [eax + 0x78]
// 0074f03b  2b5070               sub edx, dword ptr [eax + 0x70]
// 0074f03e  83c070               add eax, 0x70
// 0074f041  6a00                 push 0
// 0074f043  52                   push edx
// 0074f044  8bce                 mov ecx, esi
// 0074f046  e815ecffff           call 0x74dc60
// 0074f04b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0074f04e  e81d56ffff           call 0x744670
// 0074f053  5e                   pop esi
// 0074f054  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?SetAutoColumnSizing@CXTPReportHeader@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
