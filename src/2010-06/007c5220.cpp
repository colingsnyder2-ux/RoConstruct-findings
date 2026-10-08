// roc 2010-06 007c5220  unit: CXTPToolBar::CControlButtonHide  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c5220
//
// 007c5220  56                   push esi
// 007c5221  8bf1                 mov esi, ecx
// 007c5223  e838f10700           call 0x844360
// 007c5228  33c0                 xor eax, eax
// 007c522a  898674010000         mov dword ptr [esi + 0x174], eax
// 007c5230  898678010000         mov dword ptr [esi + 0x178], eax
// 007c5236  c706ec77a500         mov dword ptr [esi], 0xa577ec
// 007c523c  c746208c77a500       mov dword ptr [esi + 0x20], 0xa5778c
// 007c5243  8bc6                 mov eax, esi
// 007c5245  5e                   pop esi
// 007c5246  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ??0CControlButtonCustomize@CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
