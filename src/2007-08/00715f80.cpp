// roc 2007-08 00715f80  unit: CXTCaptionPopupWnd  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715f80
//
// 00715f80  56                   push esi
// 00715f81  8bf1                 mov esi, ecx
// 00715f83  8b4654               mov eax, dword ptr [esi + 0x54]
// 00715f86  85c0                 test eax, eax
// 00715f88  7403                 je 0x715f8d
// 00715f8a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00715f8d  50                   push eax
// 00715f8e  ff15bced7700         call dword ptr [0x77edbc]
// 00715f94  85c0                 test eax, eax
// 00715f96  7416                 je 0x715fae
// 00715f98  8b4654               mov eax, dword ptr [esi + 0x54]
// 00715f9b  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00715f9e  6a00                 push 0
// 00715fa0  6a00                 push 0
// 00715fa2  683e270000           push 0x273e
// 00715fa7  51                   push ecx
// 00715fa8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00715fae  5e                   pop esi
// 00715faf  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionPopupWnd.cpp (function ?OnCaptButton@CXTCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionPopupWnd.cpp
