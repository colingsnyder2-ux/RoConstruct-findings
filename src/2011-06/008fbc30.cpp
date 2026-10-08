// roc 2011-06 008fbc30  unit: CXTPRibbonGroupPopupToolBar  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fbc30
//
// 008fbc30  56                   push esi
// 008fbc31  57                   push edi
// 008fbc32  8bf1                 mov esi, ecx
// 008fbc34  e8d7acf5ff           call 0x856910
// 008fbc39  b803000000           mov eax, 3
// 008fbc3e  898600020000         mov dword ptr [esi + 0x200], eax
// 008fbc44  8bc8                 mov ecx, eax
// 008fbc46  8bd0                 mov edx, eax
// 008fbc48  8bf8                 mov edi, eax
// 008fbc4a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008fbc4e  898e04020000         mov dword ptr [esi + 0x204], ecx
// 008fbc54  899608020000         mov dword ptr [esi + 0x208], edx
// 008fbc5a  89be0c020000         mov dword ptr [esi + 0x20c], edi
// 008fbc60  89865c020000         mov dword ptr [esi + 0x25c], eax
// 008fbc66  5f                   pop edi
// 008fbc67  c7064cc1ad00         mov dword ptr [esi], 0xadc14c
// 008fbc6d  c746543cc1ad00       mov dword ptr [esi + 0x54], 0xadc13c
// 008fbc74  c7465cdcc0ad00       mov dword ptr [esi + 0x5c], 0xadc0dc
// 008fbc7b  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 008fbc85  8bc6                 mov eax, esi
// 008fbc87  5e                   pop esi
// 008fbc88  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ??0CXTPRibbonBarMorePopupToolBar@@QAE@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
