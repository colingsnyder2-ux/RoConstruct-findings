// roc 2009-12 00844f30  unit: CXTPRibbonBarMorePopupToolBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00844f30
//
// 00844f30  56                   push esi
// 00844f31  8bf1                 mov esi, ecx
// 00844f33  e898feffff           call 0x844dd0
// 00844f38  c70684a39f00         mov dword ptr [esi], 0x9fa384
// 00844f3e  c7465474a39f00       mov dword ptr [esi + 0x54], 0x9fa374
// 00844f45  c7465c14a39f00       mov dword ptr [esi + 0x5c], 0x9fa314
// 00844f4c  c786f800000001000000 mov dword ptr [esi + 0xf8], 1
// 00844f56  8bc6                 mov eax, esi
// 00844f58  5e                   pop esi
// 00844f59  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ??0CXTPPopupToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
