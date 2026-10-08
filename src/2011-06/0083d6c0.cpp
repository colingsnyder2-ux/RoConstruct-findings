// roc 2011-06 0083d6c0  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083d6c0
//
// 0083d6c0  8b442404             mov eax, dword ptr [esp + 4]
// 0083d6c4  56                   push esi
// 0083d6c5  8bf1                 mov esi, ecx
// 0083d6c7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0083d6ca  89868c000000         mov dword ptr [esi + 0x8c], eax
// 0083d6d0  c7810c01000000000000 mov dword ptr [ecx + 0x10c], 0
// 0083d6da  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 0083d6e1  7412                 je 0x83d6f5
// 0083d6e3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0083d6e6  83792000             cmp dword ptr [ecx + 0x20], 0
// 0083d6ea  7409                 je 0x83d6f5
// 0083d6ec  6a00                 push 0
// 0083d6ee  6a00                 push 0
// 0083d6f0  e82df11800           call 0x9cc822
// 0083d6f5  8b4624               mov eax, dword ptr [esi + 0x24]
// 0083d6f8  8b5078               mov edx, dword ptr [eax + 0x78]
// 0083d6fb  2b5070               sub edx, dword ptr [eax + 0x70]
// 0083d6fe  83c070               add eax, 0x70
// 0083d701  6a00                 push 0
// 0083d703  52                   push edx
// 0083d704  8bce                 mov ecx, esi
// 0083d706  e815ecffff           call 0x83c320
// 0083d70b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0083d70e  e85d5fffff           call 0x833670
// 0083d713  5e                   pop esi
// 0083d714  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?SetAutoColumnSizing@CXTPReportHeader@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
