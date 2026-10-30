// roc 2009-12 00811190  unit: CXTPToolBar::CControlButtonHide  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00811190
//
// 00811190  56                   push esi
// 00811191  8bf1                 mov esi, ecx
// 00811193  e8c8ef0700           call 0x890160
// 00811198  33c0                 xor eax, eax
// 0081119a  898674010000         mov dword ptr [esi + 0x174], eax
// 008111a0  898678010000         mov dword ptr [esi + 0x178], eax
// 008111a6  c706fc349f00         mov dword ptr [esi], 0x9f34fc
// 008111ac  c746209c349f00       mov dword ptr [esi + 0x20], 0x9f349c
// 008111b3  8bc6                 mov eax, esi
// 008111b5  5e                   pop esi
// 008111b6  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ??0CControlButtonCustomize@CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
