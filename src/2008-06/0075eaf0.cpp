// from server: 100% by auto
// roc 2008-06 0075eaf0  unit: CXTPDockingPaneTabbedContainer  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075eaf0
//
// 0075eaf0  56                   push esi
// 0075eaf1  8bf1                 mov esi, ecx
// 0075eaf3  57                   push edi
// 0075eaf4  8d7e54               lea edi, [esi + 0x54]
// 0075eaf7  8bcf                 mov ecx, edi
// 0075eaf9  e8a2e9ffff           call 0x75d4a0
// 0075eafe  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 0075eb04  83ea00               sub edx, 0
// 0075eb07  7440                 je 0x75eb49
// 0075eb09  83ea02               sub edx, 2
// 0075eb0c  741b                 je 0x75eb29
// 0075eb0e  83ea01               sub edx, 1
// 0075eb11  752e                 jne 0x75eb41
// 0075eb13  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0075eb16  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0075eb19  2b4674               sub eax, dword ptr [esi + 0x74]
// 0075eb1c  2b4e70               sub ecx, dword ptr [esi + 0x70]
// 0075eb1f  5f                   pop edi
// 0075eb20  3bc8                 cmp ecx, eax
// 0075eb22  0f9fc2               setg dl
// 0075eb25  5e                   pop esi
// 0075eb26  8bc2                 mov eax, edx
// 0075eb28  c3                   ret 
// 0075eb29  f7de                 neg esi
// 0075eb2b  1bf6                 sbb esi, esi
// 0075eb2d  23f7                 and esi, edi
// 0075eb2f  56                   push esi
// 0075eb30  8bc8                 mov ecx, eax
// 0075eb32  e8a965f8ff           call 0x6e50e0
// 0075eb37  83f802               cmp eax, 2
// 0075eb3a  7405                 je 0x75eb41
// 0075eb3c  83f803               cmp eax, 3
// 0075eb3f  7508                 jne 0x75eb49
// 0075eb41  5f                   pop edi
// 0075eb42  b801000000           mov eax, 1
// 0075eb47  5e                   pop esi
// 0075eb48  c3                   ret 
// 0075eb49  5f                   pop edi
// 0075eb4a  33c0                 xor eax, eax
// 0075eb4c  5e                   pop esi
// 0075eb4d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsCaptionVertical@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
