// roc 2007-08 00715f20  unit: CXTCaptionPopupWnd  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715f20
//
// 00715f20  56                   push esi
// 00715f21  8bf1                 mov esi, ecx
// 00715f23  8b4658               mov eax, dword ptr [esi + 0x58]
// 00715f26  85c0                 test eax, eax
// 00715f28  57                   push edi
// 00715f29  7403                 je 0x715f2e
// 00715f2b  8b4020               mov eax, dword ptr [eax + 0x20]
// 00715f2e  8b3dbced7700         mov edi, dword ptr [0x77edbc]
// 00715f34  50                   push eax
// 00715f35  ffd7                 call edi
// 00715f37  85c0                 test eax, eax
// 00715f39  7505                 jne 0x715f40
// 00715f3b  5f                   pop edi
// 00715f3c  33c0                 xor eax, eax
// 00715f3e  5e                   pop esi
// 00715f3f  c3                   ret 
// 00715f40  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00715f43  85c0                 test eax, eax
// 00715f45  7403                 je 0x715f4a
// 00715f47  8b4020               mov eax, dword ptr [eax + 0x20]
// 00715f4a  50                   push eax
// 00715f4b  ffd7                 call edi
// 00715f4d  85c0                 test eax, eax
// 00715f4f  74ea                 je 0x715f3b
// 00715f51  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00715f54  85c0                 test eax, eax
// 00715f56  8b7658               mov esi, dword ptr [esi + 0x58]
// 00715f59  7403                 je 0x715f5e
// 00715f5b  8b4020               mov eax, dword ptr [eax + 0x20]
// 00715f5e  50                   push eax
// 00715f5f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715f62  50                   push eax
// 00715f63  ff15acee7700         call dword ptr [0x77eeac]
// 00715f69  50                   push eax
// 00715f6a  e851a2f1ff           call 0x6301c0
// 00715f6f  5f                   pop edi
// 00715f70  b801000000           mov eax, 1
// 00715f75  5e                   pop esi
// 00715f76  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionPopupWnd.cpp (function ?ResetParent@CXTCaptionPopupWnd@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionPopupWnd.cpp
