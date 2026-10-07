// roc 2012-06 00a6bc10  unit: CXTCaptionPopupWnd  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6bc10
//
// 00a6bc10  56                   push esi
// 00a6bc11  8bf1                 mov esi, ecx
// 00a6bc13  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a6bc16  57                   push edi
// 00a6bc17  85c0                 test eax, eax
// 00a6bc19  7403                 je 0xa6bc1e
// 00a6bc1b  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a6bc1e  8b3d143bb200         mov edi, dword ptr [0xb23b14]
// 00a6bc24  50                   push eax
// 00a6bc25  ffd7                 call edi
// 00a6bc27  85c0                 test eax, eax
// 00a6bc29  7505                 jne 0xa6bc30
// 00a6bc2b  5f                   pop edi
// 00a6bc2c  33c0                 xor eax, eax
// 00a6bc2e  5e                   pop esi
// 00a6bc2f  c3                   ret 
// 00a6bc30  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00a6bc33  85c0                 test eax, eax
// 00a6bc35  7403                 je 0xa6bc3a
// 00a6bc37  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a6bc3a  50                   push eax
// 00a6bc3b  ffd7                 call edi
// 00a6bc3d  85c0                 test eax, eax
// 00a6bc3f  74ea                 je 0xa6bc2b
// 00a6bc41  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00a6bc44  8b7658               mov esi, dword ptr [esi + 0x58]
// 00a6bc47  85c0                 test eax, eax
// 00a6bc49  7403                 je 0xa6bc4e
// 00a6bc4b  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a6bc4e  50                   push eax
// 00a6bc4f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6bc52  50                   push eax
// 00a6bc53  ff15ac3cb200         call dword ptr [0xb23cac]
// 00a6bc59  50                   push eax
// 00a6bc5a  e8076af1ff           call 0x982666
// 00a6bc5f  5f                   pop edi
// 00a6bc60  b801000000           mov eax, 1
// 00a6bc65  5e                   pop esi
// 00a6bc66  c3                   ret 
// library xtp-15.2.1/Source\Controls\Static\XTPCaptionPopupWnd.cpp (function ?ResetParent@CXTPCaptionPopupWnd@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Static/XTPCaptionPopupWnd.cpp
