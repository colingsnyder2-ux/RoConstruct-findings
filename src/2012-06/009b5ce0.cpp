// roc 2012-06 009b5ce0  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b5ce0
//
// 009b5ce0  8b442404             mov eax, dword ptr [esp + 4]
// 009b5ce4  56                   push esi
// 009b5ce5  8bf1                 mov esi, ecx
// 009b5ce7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 009b5cea  89868c000000         mov dword ptr [esi + 0x8c], eax
// 009b5cf0  c7810c01000000000000 mov dword ptr [ecx + 0x10c], 0
// 009b5cfa  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 009b5d01  7412                 je 0x9b5d15
// 009b5d03  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 009b5d06  83792000             cmp dword ptr [ecx + 0x20], 0
// 009b5d0a  7409                 je 0x9b5d15
// 009b5d0c  6a00                 push 0
// 009b5d0e  6a00                 push 0
// 009b5d10  e8c73a0e00           call 0xa997dc
// 009b5d15  8b4624               mov eax, dword ptr [esi + 0x24]
// 009b5d18  8b5078               mov edx, dword ptr [eax + 0x78]
// 009b5d1b  2b5070               sub edx, dword ptr [eax + 0x70]
// 009b5d1e  83c070               add eax, 0x70
// 009b5d21  6a00                 push 0
// 009b5d23  52                   push edx
// 009b5d24  8bce                 mov ecx, esi
// 009b5d26  e815ecffff           call 0x9b4940
// 009b5d2b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 009b5d2e  e83d5fffff           call 0x9abc70
// 009b5d33  5e                   pop esi
// 009b5d34  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?SetAutoColumnSizing@CXTPReportHeader@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
