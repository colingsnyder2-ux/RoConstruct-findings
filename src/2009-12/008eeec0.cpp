// roc 2009-12 008eeec0  unit: CXTPRibbonGroupPopupToolBar  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eeec0
//
// 008eeec0  56                   push esi
// 008eeec1  57                   push edi
// 008eeec2  8bf1                 mov esi, ecx
// 008eeec4  e86760f5ff           call 0x844f30
// 008eeec9  b803000000           mov eax, 3
// 008eeece  898600020000         mov dword ptr [esi + 0x200], eax
// 008eeed4  8bc8                 mov ecx, eax
// 008eeed6  8bd0                 mov edx, eax
// 008eeed8  8bf8                 mov edi, eax
// 008eeeda  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008eeede  898e04020000         mov dword ptr [esi + 0x204], ecx
// 008eeee4  899608020000         mov dword ptr [esi + 0x208], edx
// 008eeeea  89be0c020000         mov dword ptr [esi + 0x20c], edi
// 008eeef0  89865c020000         mov dword ptr [esi + 0x25c], eax
// 008eeef6  5f                   pop edi
// 008eeef7  c70624e3a000         mov dword ptr [esi], 0xa0e324
// 008eeefd  c7465414e3a000       mov dword ptr [esi + 0x54], 0xa0e314
// 008eef04  c7465cb4e2a000       mov dword ptr [esi + 0x5c], 0xa0e2b4
// 008eef0b  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 008eef15  8bc6                 mov eax, esi
// 008eef17  5e                   pop esi
// 008eef18  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ??0CXTPRibbonBarMorePopupToolBar@@QAE@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
