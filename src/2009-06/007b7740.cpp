// roc 2009-06 007b7740  unit: CXTPRibbonBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7740
//
// 007b7740  56                   push esi
// 007b7741  8bf1                 mov esi, ecx
// 007b7743  e858720000           call 0x7be9a0
// 007b7748  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007b774c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007b7750  898674010000         mov dword ptr [esi + 0x174], eax
// 007b7756  c70694409000         mov dword ptr [esi], 0x904094
// 007b775c  c7462034409000       mov dword ptr [esi + 0x20], 0x904034
// 007b7763  898e7c010000         mov dword ptr [esi + 0x17c], ecx
// 007b7769  c7867801000000000000 mov dword ptr [esi + 0x178], 0
// 007b7773  8bc6                 mov eax, esi
// 007b7775  5e                   pop esi
// 007b7776  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ??0CControlQuickAccessCommand@CXTPRibbonBar@@QAE@PAVCXTPControls@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
