// roc 2012-06 00a73f90  unit: CXTPToolBar::CControlButtonHide  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a73f90
//
// 00a73f90  56                   push esi
// 00a73f91  57                   push edi
// 00a73f92  8bf1                 mov esi, ecx
// 00a73f94  e867aef5ff           call 0x9cee00
// 00a73f99  b803000000           mov eax, 3
// 00a73f9e  898600020000         mov dword ptr [esi + 0x200], eax
// 00a73fa4  8bc8                 mov ecx, eax
// 00a73fa6  8bd0                 mov edx, eax
// 00a73fa8  8bf8                 mov edi, eax
// 00a73faa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a73fae  898e04020000         mov dword ptr [esi + 0x204], ecx
// 00a73fb4  899608020000         mov dword ptr [esi + 0x208], edx
// 00a73fba  89be0c020000         mov dword ptr [esi + 0x20c], edi
// 00a73fc0  89865c020000         mov dword ptr [esi + 0x25c], eax
// 00a73fc6  5f                   pop edi
// 00a73fc7  c706d477c200         mov dword ptr [esi], 0xc277d4
// 00a73fcd  c74654c477c200       mov dword ptr [esi + 0x54], 0xc277c4
// 00a73fd4  c7465c6477c200       mov dword ptr [esi + 0x5c], 0xc27764
// 00a73fdb  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 00a73fe5  8bc6                 mov eax, esi
// 00a73fe7  5e                   pop esi
// 00a73fe8  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ??0CXTPRibbonBarMorePopupToolBar@@QAE@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
