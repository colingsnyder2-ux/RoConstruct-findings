// from server: 100% by auto
// roc 2008-06 007969f0  unit: CXTPRibbonGroupPopupToolBar  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007969f0
//
// 007969f0  56                   push esi
// 007969f1  57                   push edi
// 007969f2  8bf1                 mov esi, ecx
// 007969f4  e827aef5ff           call 0x6f1820
// 007969f9  b803000000           mov eax, 3
// 007969fe  898600020000         mov dword ptr [esi + 0x200], eax
// 00796a04  8bc8                 mov ecx, eax
// 00796a06  8bd0                 mov edx, eax
// 00796a08  8bf8                 mov edi, eax
// 00796a0a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00796a0e  898e04020000         mov dword ptr [esi + 0x204], ecx
// 00796a14  899608020000         mov dword ptr [esi + 0x208], edx
// 00796a1a  89be0c020000         mov dword ptr [esi + 0x20c], edi
// 00796a20  89865c020000         mov dword ptr [esi + 0x25c], eax
// 00796a26  5f                   pop edi
// 00796a27  c706b4c08600         mov dword ptr [esi], 0x86c0b4
// 00796a2d  c74654a4c08600       mov dword ptr [esi + 0x54], 0x86c0a4
// 00796a34  c7465c44c08600       mov dword ptr [esi + 0x5c], 0x86c044
// 00796a3b  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 00796a45  8bc6                 mov eax, esi
// 00796a47  5e                   pop esi
// 00796a48  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ??0CXTPRibbonBarMorePopupToolBar@@QAE@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
