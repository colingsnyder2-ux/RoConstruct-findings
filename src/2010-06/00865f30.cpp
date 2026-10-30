// roc 2010-06 00865f30  unit: CXTPDockingPaneTabbedContainer  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865f30
//
// 00865f30  56                   push esi
// 00865f31  8bf1                 mov esi, ecx
// 00865f33  57                   push edi
// 00865f34  8d7e54               lea edi, [esi + 0x54]
// 00865f37  8bcf                 mov ecx, edi
// 00865f39  e8d2e9ffff           call 0x864910
// 00865f3e  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 00865f44  83ea00               sub edx, 0
// 00865f47  7440                 je 0x865f89
// 00865f49  83ea02               sub edx, 2
// 00865f4c  741b                 je 0x865f69
// 00865f4e  83ea01               sub edx, 1
// 00865f51  752e                 jne 0x865f81
// 00865f53  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00865f56  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00865f59  2b4674               sub eax, dword ptr [esi + 0x74]
// 00865f5c  2b4e70               sub ecx, dword ptr [esi + 0x70]
// 00865f5f  5f                   pop edi
// 00865f60  3bc8                 cmp ecx, eax
// 00865f62  0f9fc2               setg dl
// 00865f65  5e                   pop esi
// 00865f66  8bc2                 mov eax, edx
// 00865f68  c3                   ret 
// 00865f69  f7de                 neg esi
// 00865f6b  1bf6                 sbb esi, esi
// 00865f6d  23f7                 and esi, edi
// 00865f6f  56                   push esi
// 00865f70  8bc8                 mov ecx, eax
// 00865f72  e8d969f8ff           call 0x7ec950
// 00865f77  83f802               cmp eax, 2
// 00865f7a  7405                 je 0x865f81
// 00865f7c  83f803               cmp eax, 3
// 00865f7f  7508                 jne 0x865f89
// 00865f81  5f                   pop edi
// 00865f82  b801000000           mov eax, 1
// 00865f87  5e                   pop esi
// 00865f88  c3                   ret 
// 00865f89  5f                   pop edi
// 00865f8a  33c0                 xor eax, eax
// 00865f8c  5e                   pop esi
// 00865f8d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsCaptionVertical@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
