// roc 2009-12 00829dc0  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829dc0
//
// 00829dc0  8b442404             mov eax, dword ptr [esp + 4]
// 00829dc4  56                   push esi
// 00829dc5  8bf1                 mov esi, ecx
// 00829dc7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00829dca  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00829dd0  c7810c01000000000000 mov dword ptr [ecx + 0x10c], 0
// 00829dda  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 00829de1  7412                 je 0x829df5
// 00829de3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00829de6  83792000             cmp dword ptr [ecx + 0x20], 0
// 00829dea  7409                 je 0x829df5
// 00829dec  6a00                 push 0
// 00829dee  6a00                 push 0
// 00829df0  e8e1c80f00           call 0x9266d6
// 00829df5  8b4624               mov eax, dword ptr [esi + 0x24]
// 00829df8  8b5078               mov edx, dword ptr [eax + 0x78]
// 00829dfb  2b5070               sub edx, dword ptr [eax + 0x70]
// 00829dfe  83c070               add eax, 0x70
// 00829e01  6a00                 push 0
// 00829e03  52                   push edx
// 00829e04  8bce                 mov ecx, esi
// 00829e06  e815ecffff           call 0x828a20
// 00829e0b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00829e0e  e86d56ffff           call 0x81f480
// 00829e13  5e                   pop esi
// 00829e14  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?SetAutoColumnSizing@CXTPReportHeader@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
