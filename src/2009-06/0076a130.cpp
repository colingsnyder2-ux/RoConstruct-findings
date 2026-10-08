// roc 2009-06 0076a130  unit: CXTPRibbonBarMorePopupToolBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076a130
//
// 0076a130  56                   push esi
// 0076a131  8bf1                 mov esi, ecx
// 0076a133  e898feffff           call 0x769fd0
// 0076a138  c706dc9e8f00         mov dword ptr [esi], 0x8f9edc
// 0076a13e  c74654cc9e8f00       mov dword ptr [esi + 0x54], 0x8f9ecc
// 0076a145  c7465c6c9e8f00       mov dword ptr [esi + 0x5c], 0x8f9e6c
// 0076a14c  c786f800000001000000 mov dword ptr [esi + 0xf8], 1
// 0076a156  8bc6                 mov eax, esi
// 0076a158  5e                   pop esi
// 0076a159  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ??0CXTPPopupToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
