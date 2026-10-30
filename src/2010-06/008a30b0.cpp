// roc 2010-06 008a30b0  unit: CXTPRibbonGroupPopupToolBar  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a30b0
//
// 008a30b0  56                   push esi
// 008a30b1  57                   push edi
// 008a30b2  8bf1                 mov esi, ecx
// 008a30b4  e8075ff5ff           call 0x7f8fc0
// 008a30b9  b803000000           mov eax, 3
// 008a30be  898600020000         mov dword ptr [esi + 0x200], eax
// 008a30c4  8bc8                 mov ecx, eax
// 008a30c6  8bd0                 mov edx, eax
// 008a30c8  8bf8                 mov edi, eax
// 008a30ca  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008a30ce  898e04020000         mov dword ptr [esi + 0x204], ecx
// 008a30d4  899608020000         mov dword ptr [esi + 0x208], edx
// 008a30da  89be0c020000         mov dword ptr [esi + 0x20c], edi
// 008a30e0  89865c020000         mov dword ptr [esi + 0x25c], eax
// 008a30e6  5f                   pop edi
// 008a30e7  c7061c26a700         mov dword ptr [esi], 0xa7261c
// 008a30ed  c746540c26a700       mov dword ptr [esi + 0x54], 0xa7260c
// 008a30f4  c7465cac25a700       mov dword ptr [esi + 0x5c], 0xa725ac
// 008a30fb  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 008a3105  8bc6                 mov eax, esi
// 008a3107  5e                   pop esi
// 008a3108  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ??0CXTPRibbonBarMorePopupToolBar@@QAE@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
