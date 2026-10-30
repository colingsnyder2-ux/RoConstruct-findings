// roc 2012-06 009cee00  unit: CXTPRibbonBarMorePopupToolBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cee00
//
// 009cee00  56                   push esi
// 009cee01  8bf1                 mov esi, ecx
// 009cee03  e898feffff           call 0x9ceca0
// 009cee08  c7062c46c100         mov dword ptr [esi], 0xc1462c
// 009cee0e  c746541c46c100       mov dword ptr [esi + 0x54], 0xc1461c
// 009cee15  c7465cbc45c100       mov dword ptr [esi + 0x5c], 0xc145bc
// 009cee1c  c786f800000001000000 mov dword ptr [esi + 0xf8], 1
// 009cee26  8bc6                 mov eax, esi
// 009cee28  5e                   pop esi
// 009cee29  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ??0CXTPPopupToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
