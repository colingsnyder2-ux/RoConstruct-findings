// roc 2007-03 007070e0  unit: seg_00700000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007070e0
//
// 007070e0  56                   push esi
// 007070e1  8bf1                 mov esi, ecx
// 007070e3  8b4658               mov eax, dword ptr [esi + 0x58]
// 007070e6  85c0                 test eax, eax
// 007070e8  57                   push edi
// 007070e9  7403                 je 0x7070ee
// 007070eb  8b4020               mov eax, dword ptr [eax + 0x20]
// 007070ee  8b3d74ed7700         mov edi, dword ptr [0x77ed74]
// 007070f4  50                   push eax
// 007070f5  ffd7                 call edi
// 007070f7  85c0                 test eax, eax
// 007070f9  7505                 jne 0x707100
// 007070fb  5f                   pop edi
// 007070fc  33c0                 xor eax, eax
// 007070fe  5e                   pop esi
// 007070ff  c3                   ret 
// 00707100  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00707103  85c0                 test eax, eax
// 00707105  7403                 je 0x70710a
// 00707107  8b4020               mov eax, dword ptr [eax + 0x20]
// 0070710a  50                   push eax
// 0070710b  ffd7                 call edi
// 0070710d  85c0                 test eax, eax
// 0070710f  74ea                 je 0x7070fb
// 00707111  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00707114  85c0                 test eax, eax
// 00707116  8b7658               mov esi, dword ptr [esi + 0x58]
// 00707119  7403                 je 0x70711e
// 0070711b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0070711e  50                   push eax
// 0070711f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00707122  50                   push eax
// 00707123  ff1574ef7700         call dword ptr [0x77ef74]
// 00707129  50                   push eax
// 0070712a  e81f75f1ff           call 0x61e64e
// 0070712f  5f                   pop edi
// 00707130  b801000000           mov eax, 1
// 00707135  5e                   pop esi
// 00707136  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionPopupWnd.cpp (function ?ResetParent@CXTCaptionPopupWnd@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionPopupWnd.cpp
