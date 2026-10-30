// roc 2010-06 007f8fc0  unit: CXTPRibbonBarMorePopupToolBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f8fc0
//
// 007f8fc0  56                   push esi
// 007f8fc1  8bf1                 mov esi, ecx
// 007f8fc3  e898feffff           call 0x7f8e60
// 007f8fc8  c70644e6a500         mov dword ptr [esi], 0xa5e644
// 007f8fce  c7465434e6a500       mov dword ptr [esi + 0x54], 0xa5e634
// 007f8fd5  c7465cd4e5a500       mov dword ptr [esi + 0x5c], 0xa5e5d4
// 007f8fdc  c786f800000001000000 mov dword ptr [esi + 0xf8], 1
// 007f8fe6  8bc6                 mov eax, esi
// 007f8fe8  5e                   pop esi
// 007f8fe9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ??0CXTPPopupToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
