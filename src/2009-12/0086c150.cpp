// roc 2009-12 0086c150  unit: CXTPWinThemeWrapper  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c150
//
// 0086c150  56                   push esi
// 0086c151  8bf1                 mov esi, ecx
// 0086c153  e8e8ffffff           call 0x86c140
// 0086c158  50                   push eax
// 0086c159  8bce                 mov ecx, esi
// 0086c15b  e810970700           call 0x8e5870
// 0086c160  c7063c00a000         mov dword ptr [esi], 0xa0003c
// 0086c166  c746542800a000       mov dword ptr [esi + 0x54], 0xa00028
// 0086c16d  c786ac00000000000000 mov dword ptr [esi + 0xac], 0
// 0086c177  8bc6                 mov eax, esi
// 0086c179  5e                   pop esi
// 0086c17a  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionButton@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp