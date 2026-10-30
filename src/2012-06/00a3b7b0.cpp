// roc 2012-06 00a3b7b0  unit: CXTPDockingPaneTabbedContainer  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3b7b0
//
// 00a3b7b0  56                   push esi
// 00a3b7b1  8bf1                 mov esi, ecx
// 00a3b7b3  57                   push edi
// 00a3b7b4  8d7e54               lea edi, [esi + 0x54]
// 00a3b7b7  8bcf                 mov ecx, edi
// 00a3b7b9  e8b2e9ffff           call 0xa3a170
// 00a3b7be  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 00a3b7c4  83ea00               sub edx, 0
// 00a3b7c7  7440                 je 0xa3b809
// 00a3b7c9  83ea02               sub edx, 2
// 00a3b7cc  741b                 je 0xa3b7e9
// 00a3b7ce  83ea01               sub edx, 1
// 00a3b7d1  752e                 jne 0xa3b801
// 00a3b7d3  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00a3b7d6  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00a3b7d9  2b4674               sub eax, dword ptr [esi + 0x74]
// 00a3b7dc  2b4e70               sub ecx, dword ptr [esi + 0x70]
// 00a3b7df  5f                   pop edi
// 00a3b7e0  3bc8                 cmp ecx, eax
// 00a3b7e2  0f9fc2               setg dl
// 00a3b7e5  5e                   pop esi
// 00a3b7e6  8bc2                 mov eax, edx
// 00a3b7e8  c3                   ret 
// 00a3b7e9  f7de                 neg esi
// 00a3b7eb  1bf6                 sbb esi, esi
// 00a3b7ed  23f7                 and esi, edi
// 00a3b7ef  56                   push esi
// 00a3b7f0  8bc8                 mov ecx, eax
// 00a3b7f2  e829aef8ff           call 0x9c6620
// 00a3b7f7  83f802               cmp eax, 2
// 00a3b7fa  7405                 je 0xa3b801
// 00a3b7fc  83f803               cmp eax, 3
// 00a3b7ff  7508                 jne 0xa3b809
// 00a3b801  5f                   pop edi
// 00a3b802  b801000000           mov eax, 1
// 00a3b807  5e                   pop esi
// 00a3b808  c3                   ret 
// 00a3b809  5f                   pop edi
// 00a3b80a  33c0                 xor eax, eax
// 00a3b80c  5e                   pop esi
// 00a3b80d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsCaptionVertical@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
