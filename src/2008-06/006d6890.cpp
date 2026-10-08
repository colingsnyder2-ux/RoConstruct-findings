// from server: 100% by auto
// roc 2008-06 006d6890  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d6890
//
// 006d6890  8b442404             mov eax, dword ptr [esp + 4]
// 006d6894  56                   push esi
// 006d6895  8bf1                 mov esi, ecx
// 006d6897  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d689a  89868c000000         mov dword ptr [esi + 0x8c], eax
// 006d68a0  c7810c01000000000000 mov dword ptr [ecx + 0x10c], 0
// 006d68aa  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 006d68b1  7412                 je 0x6d68c5
// 006d68b3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d68b6  83792000             cmp dword ptr [ecx + 0x20], 0
// 006d68ba  7409                 je 0x6d68c5
// 006d68bc  6a00                 push 0
// 006d68be  6a00                 push 0
// 006d68c0  e8e5590e00           call 0x7bc2aa
// 006d68c5  8b4624               mov eax, dword ptr [esi + 0x24]
// 006d68c8  8b5078               mov edx, dword ptr [eax + 0x78]
// 006d68cb  2b5070               sub edx, dword ptr [eax + 0x70]
// 006d68ce  83c070               add eax, 0x70
// 006d68d1  6a00                 push 0
// 006d68d3  52                   push edx
// 006d68d4  8bce                 mov ecx, esi
// 006d68d6  e815ecffff           call 0x6d54f0
// 006d68db  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d68de  e84d56ffff           call 0x6cbf30
// 006d68e3  5e                   pop esi
// 006d68e4  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?SetAutoColumnSizing@CXTPReportHeader@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
