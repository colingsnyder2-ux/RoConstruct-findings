// roc 2009-12 008b1e50  unit: CXTPDockingPaneTabbedContainer  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1e50
//
// 008b1e50  56                   push esi
// 008b1e51  8bf1                 mov esi, ecx
// 008b1e53  57                   push edi
// 008b1e54  8d7e54               lea edi, [esi + 0x54]
// 008b1e57  8bcf                 mov ecx, edi
// 008b1e59  e8e2e9ffff           call 0x8b0840
// 008b1e5e  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 008b1e64  83ea00               sub edx, 0
// 008b1e67  7440                 je 0x8b1ea9
// 008b1e69  83ea02               sub edx, 2
// 008b1e6c  741b                 je 0x8b1e89
// 008b1e6e  83ea01               sub edx, 1
// 008b1e71  752e                 jne 0x8b1ea1
// 008b1e73  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008b1e76  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008b1e79  2b4674               sub eax, dword ptr [esi + 0x74]
// 008b1e7c  2b4e70               sub ecx, dword ptr [esi + 0x70]
// 008b1e7f  5f                   pop edi
// 008b1e80  3bc8                 cmp ecx, eax
// 008b1e82  0f9fc2               setg dl
// 008b1e85  5e                   pop esi
// 008b1e86  8bc2                 mov eax, edx
// 008b1e88  c3                   ret 
// 008b1e89  f7de                 neg esi
// 008b1e8b  1bf6                 sbb esi, esi
// 008b1e8d  23f7                 and esi, edi
// 008b1e8f  56                   push esi
// 008b1e90  8bc8                 mov ecx, eax
// 008b1e92  e89968f8ff           call 0x838730
// 008b1e97  83f802               cmp eax, 2
// 008b1e9a  7405                 je 0x8b1ea1
// 008b1e9c  83f803               cmp eax, 3
// 008b1e9f  7508                 jne 0x8b1ea9
// 008b1ea1  5f                   pop edi
// 008b1ea2  b801000000           mov eax, 1
// 008b1ea7  5e                   pop esi
// 008b1ea8  c3                   ret 
// 008b1ea9  5f                   pop edi
// 008b1eaa  33c0                 xor eax, eax
// 008b1eac  5e                   pop esi
// 008b1ead  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsCaptionVertical@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
