// roc 2012-06 00a1e110  unit: CXTPRibbonBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e110
//
// 00a1e110  56                   push esi
// 00a1e111  8bf1                 mov esi, ecx
// 00a1e113  e868b8ffff           call 0xa19980
// 00a1e118  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a1e11c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a1e120  898674010000         mov dword ptr [esi + 0x174], eax
// 00a1e126  c706e4eac100         mov dword ptr [esi], 0xc1eae4
// 00a1e12c  c7462084eac100       mov dword ptr [esi + 0x20], 0xc1ea84
// 00a1e133  898e7c010000         mov dword ptr [esi + 0x17c], ecx
// 00a1e139  c7867801000000000000 mov dword ptr [esi + 0x178], 0
// 00a1e143  8bc6                 mov eax, esi
// 00a1e145  5e                   pop esi
// 00a1e146  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ??0CControlQuickAccessCommand@CXTPRibbonBar@@QAE@PAVCXTPControls@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
