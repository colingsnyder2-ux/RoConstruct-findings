// roc 2011-06 008f3910  unit: CXTCaptionPopupWnd  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3910
//
// 008f3910  56                   push esi
// 008f3911  8bf1                 mov esi, ecx
// 008f3913  8b4654               mov eax, dword ptr [esi + 0x54]
// 008f3916  85c0                 test eax, eax
// 008f3918  7403                 je 0x8f391d
// 008f391a  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f391d  50                   push eax
// 008f391e  ff15ec1ba400         call dword ptr [0xa41bec]
// 008f3924  85c0                 test eax, eax
// 008f3926  7416                 je 0x8f393e
// 008f3928  8b4654               mov eax, dword ptr [esi + 0x54]
// 008f392b  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008f392e  6a00                 push 0
// 008f3930  6a00                 push 0
// 008f3932  683e270000           push 0x273e
// 008f3937  51                   push ecx
// 008f3938  ff15c019a400         call dword ptr [0xa419c0]
// 008f393e  5e                   pop esi
// 008f393f  c3                   ret 
// library xtp-15.2.1/Source\Controls\Static\XTPCaptionPopupWnd.cpp (function ?OnCaptButton@CXTPCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Static/XTPCaptionPopupWnd.cpp
