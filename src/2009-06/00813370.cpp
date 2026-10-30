// roc 2009-06 00813370  unit: CXTPRibbonGroupPopupToolBar  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00813370
//
// 00813370  56                   push esi
// 00813371  57                   push edi
// 00813372  8bf1                 mov esi, ecx
// 00813374  e8b76df5ff           call 0x76a130
// 00813379  b803000000           mov eax, 3
// 0081337e  898600020000         mov dword ptr [esi + 0x200], eax
// 00813384  8bc8                 mov ecx, eax
// 00813386  8bd0                 mov edx, eax
// 00813388  8bf8                 mov edi, eax
// 0081338a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081338e  898e04020000         mov dword ptr [esi + 0x204], ecx
// 00813394  899608020000         mov dword ptr [esi + 0x208], edx
// 0081339a  89be0c020000         mov dword ptr [esi + 0x20c], edi
// 008133a0  89865c020000         mov dword ptr [esi + 0x25c], eax
// 008133a6  5f                   pop edi
// 008133a7  c706bcd59000         mov dword ptr [esi], 0x90d5bc
// 008133ad  c74654acd59000       mov dword ptr [esi + 0x54], 0x90d5ac
// 008133b4  c7465c4cd59000       mov dword ptr [esi + 0x5c], 0x90d54c
// 008133bb  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 008133c5  8bc6                 mov eax, esi
// 008133c7  5e                   pop esi
// 008133c8  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ??0CXTPRibbonBarMorePopupToolBar@@QAE@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
