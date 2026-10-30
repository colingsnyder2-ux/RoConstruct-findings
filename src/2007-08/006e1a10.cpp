// roc 2007-08 006e1a10  unit: CXTPDockingPaneTabbedContainer  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e1a10
//
// 006e1a10  56                   push esi
// 006e1a11  8bf1                 mov esi, ecx
// 006e1a13  57                   push edi
// 006e1a14  8d7e54               lea edi, [esi + 0x54]
// 006e1a17  8bcf                 mov ecx, edi
// 006e1a19  e822ebffff           call 0x6e0540
// 006e1a1e  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 006e1a24  83ea00               sub edx, 0
// 006e1a27  7440                 je 0x6e1a69
// 006e1a29  83ea02               sub edx, 2
// 006e1a2c  741b                 je 0x6e1a49
// 006e1a2e  83ea01               sub edx, 1
// 006e1a31  752e                 jne 0x6e1a61
// 006e1a33  8b467c               mov eax, dword ptr [esi + 0x7c]
// 006e1a36  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 006e1a39  2b4674               sub eax, dword ptr [esi + 0x74]
// 006e1a3c  2b4e70               sub ecx, dword ptr [esi + 0x70]
// 006e1a3f  5f                   pop edi
// 006e1a40  3bc8                 cmp ecx, eax
// 006e1a42  0f9fc2               setg dl
// 006e1a45  5e                   pop esi
// 006e1a46  8bc2                 mov eax, edx
// 006e1a48  c3                   ret 
// 006e1a49  f7de                 neg esi
// 006e1a4b  1bf6                 sbb esi, esi
// 006e1a4d  23f7                 and esi, edi
// 006e1a4f  56                   push esi
// 006e1a50  8bc8                 mov ecx, eax
// 006e1a52  e8b9c7f8ff           call 0x66e210
// 006e1a57  83f802               cmp eax, 2
// 006e1a5a  7405                 je 0x6e1a61
// 006e1a5c  83f803               cmp eax, 3
// 006e1a5f  7508                 jne 0x6e1a69
// 006e1a61  5f                   pop edi
// 006e1a62  b801000000           mov eax, 1
// 006e1a67  5e                   pop esi
// 006e1a68  c3                   ret 
// 006e1a69  5f                   pop edi
// 006e1a6a  33c0                 xor eax, eax
// 006e1a6c  5e                   pop esi
// 006e1a6d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsCaptionVertical@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
