// roc 2009-06 0073a0a0  unit: CXTPToolBar::CControlButtonHide  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073a0a0
//
// 0073a0a0  56                   push esi
// 0073a0a1  8bf1                 mov esi, ecx
// 0073a0a3  e8f8480800           call 0x7be9a0
// 0073a0a8  33c0                 xor eax, eax
// 0073a0aa  898674010000         mov dword ptr [esi + 0x174], eax
// 0073a0b0  898678010000         mov dword ptr [esi + 0x178], eax
// 0073a0b6  c70634358f00         mov dword ptr [esi], 0x8f3534
// 0073a0bc  c74620d4348f00       mov dword ptr [esi + 0x20], 0x8f34d4
// 0073a0c3  8bc6                 mov eax, esi
// 0073a0c5  5e                   pop esi
// 0073a0c6  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ??0CControlButtonCustomize@CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
