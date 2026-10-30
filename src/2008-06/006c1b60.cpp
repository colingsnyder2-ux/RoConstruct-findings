// from server: 100% by auto
// roc 2008-06 006c1b60  unit: CXTPToolBar::CControlButtonHide  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c1b60
//
// 006c1b60  56                   push esi
// 006c1b61  8bf1                 mov esi, ecx
// 006c1b63  e8d83a0800           call 0x745640
// 006c1b68  33c0                 xor eax, eax
// 006c1b6a  898674010000         mov dword ptr [esi + 0x174], eax
// 006c1b70  898678010000         mov dword ptr [esi + 0x178], eax
// 006c1b76  c706e4248500         mov dword ptr [esi], 0x8524e4
// 006c1b7c  c7462084248500       mov dword ptr [esi + 0x20], 0x852484
// 006c1b83  8bc6                 mov eax, esi
// 006c1b85  5e                   pop esi
// 006c1b86  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ??0CControlButtonCustomize@CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
