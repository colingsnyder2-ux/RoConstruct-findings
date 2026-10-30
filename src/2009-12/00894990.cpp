// roc 2009-12 00894990  unit: CXTPRibbonBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894990
//
// 00894990  56                   push esi
// 00894991  8bf1                 mov esi, ecx
// 00894993  e8c8b7ffff           call 0x890160
// 00894998  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089499c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008949a0  898674010000         mov dword ptr [esi + 0x174], eax
// 008949a6  c7064c47a000         mov dword ptr [esi], 0xa0474c
// 008949ac  c74620ec46a000       mov dword ptr [esi + 0x20], 0xa046ec
// 008949b3  898e7c010000         mov dword ptr [esi + 0x17c], ecx
// 008949b9  c7867801000000000000 mov dword ptr [esi + 0x178], 0
// 008949c3  8bc6                 mov eax, esi
// 008949c5  5e                   pop esi
// 008949c6  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ??0CControlQuickAccessCommand@CXTPRibbonBar@@QAE@PAVCXTPControls@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
