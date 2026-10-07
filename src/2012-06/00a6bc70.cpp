// roc 2012-06 00a6bc70  unit: CXTCaptionPopupWnd  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6bc70
//
// 00a6bc70  56                   push esi
// 00a6bc71  8bf1                 mov esi, ecx
// 00a6bc73  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a6bc76  85c0                 test eax, eax
// 00a6bc78  7403                 je 0xa6bc7d
// 00a6bc7a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a6bc7d  50                   push eax
// 00a6bc7e  ff15143bb200         call dword ptr [0xb23b14]
// 00a6bc84  85c0                 test eax, eax
// 00a6bc86  7416                 je 0xa6bc9e
// 00a6bc88  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a6bc8b  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a6bc8e  6a00                 push 0
// 00a6bc90  6a00                 push 0
// 00a6bc92  683e270000           push 0x273e
// 00a6bc97  51                   push ecx
// 00a6bc98  ff15043cb200         call dword ptr [0xb23c04]
// 00a6bc9e  5e                   pop esi
// 00a6bc9f  c3                   ret 
// library xtp-15.2.1/Source\Controls\Static\XTPCaptionPopupWnd.cpp (function ?OnCaptButton@CXTPCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Static/XTPCaptionPopupWnd.cpp
