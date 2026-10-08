// from server: 100% by auto
// roc 2008-06 007938d0  unit: CXTCaptionPopupWnd  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007938d0
//
// 007938d0  56                   push esi
// 007938d1  8bf1                 mov esi, ecx
// 007938d3  8b4654               mov eax, dword ptr [esi + 0x54]
// 007938d6  85c0                 test eax, eax
// 007938d8  7403                 je 0x7938dd
// 007938da  8b4020               mov eax, dword ptr [eax + 0x20]
// 007938dd  50                   push eax
// 007938de  ff15502d8000         call dword ptr [0x802d50]
// 007938e4  85c0                 test eax, eax
// 007938e6  7416                 je 0x7938fe
// 007938e8  8b4654               mov eax, dword ptr [esi + 0x54]
// 007938eb  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007938ee  6a00                 push 0
// 007938f0  6a00                 push 0
// 007938f2  683e270000           push 0x273e
// 007938f7  51                   push ecx
// 007938f8  ff15142e8000         call dword ptr [0x802e14]
// 007938fe  5e                   pop esi
// 007938ff  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionPopupWnd.cpp (function ?OnCaptButton@CXTCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionPopupWnd.cpp
