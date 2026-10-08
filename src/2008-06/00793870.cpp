// from server: 100% by auto
// roc 2008-06 00793870  unit: CXTCaptionPopupWnd  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793870
//
// 00793870  56                   push esi
// 00793871  8bf1                 mov esi, ecx
// 00793873  8b4658               mov eax, dword ptr [esi + 0x58]
// 00793876  57                   push edi
// 00793877  85c0                 test eax, eax
// 00793879  7403                 je 0x79387e
// 0079387b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0079387e  8b3d502d8000         mov edi, dword ptr [0x802d50]
// 00793884  50                   push eax
// 00793885  ffd7                 call edi
// 00793887  85c0                 test eax, eax
// 00793889  7505                 jne 0x793890
// 0079388b  5f                   pop edi
// 0079388c  33c0                 xor eax, eax
// 0079388e  5e                   pop esi
// 0079388f  c3                   ret 
// 00793890  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00793893  85c0                 test eax, eax
// 00793895  7403                 je 0x79389a
// 00793897  8b4020               mov eax, dword ptr [eax + 0x20]
// 0079389a  50                   push eax
// 0079389b  ffd7                 call edi
// 0079389d  85c0                 test eax, eax
// 0079389f  74ea                 je 0x79388b
// 007938a1  8b465c               mov eax, dword ptr [esi + 0x5c]
// 007938a4  8b7658               mov esi, dword ptr [esi + 0x58]
// 007938a7  85c0                 test eax, eax
// 007938a9  7403                 je 0x7938ae
// 007938ab  8b4020               mov eax, dword ptr [eax + 0x20]
// 007938ae  50                   push eax
// 007938af  8b4620               mov eax, dword ptr [esi + 0x20]
// 007938b2  50                   push eax
// 007938b3  ff15b82b8000         call dword ptr [0x802bb8]
// 007938b9  50                   push eax
// 007938ba  e81fd3f0ff           call 0x6a0bde
// 007938bf  5f                   pop edi
// 007938c0  b801000000           mov eax, 1
// 007938c5  5e                   pop esi
// 007938c6  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionPopupWnd.cpp (function ?ResetParent@CXTCaptionPopupWnd@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionPopupWnd.cpp
