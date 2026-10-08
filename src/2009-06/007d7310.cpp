// roc 2009-06 007d7310  unit: CXTPDockingPaneTabbedContainer  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d7310
//
// 007d7310  56                   push esi
// 007d7311  8bf1                 mov esi, ecx
// 007d7313  57                   push edi
// 007d7314  8d7e54               lea edi, [esi + 0x54]
// 007d7317  8bcf                 mov ecx, edi
// 007d7319  e8e2e9ffff           call 0x7d5d00
// 007d731e  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 007d7324  83ea00               sub edx, 0
// 007d7327  7440                 je 0x7d7369
// 007d7329  83ea02               sub edx, 2
// 007d732c  741b                 je 0x7d7349
// 007d732e  83ea01               sub edx, 1
// 007d7331  752e                 jne 0x7d7361
// 007d7333  8b467c               mov eax, dword ptr [esi + 0x7c]
// 007d7336  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 007d7339  2b4674               sub eax, dword ptr [esi + 0x74]
// 007d733c  2b4e70               sub ecx, dword ptr [esi + 0x70]
// 007d733f  5f                   pop edi
// 007d7340  3bc8                 cmp ecx, eax
// 007d7342  0f9fc2               setg dl
// 007d7345  5e                   pop esi
// 007d7346  8bc2                 mov eax, edx
// 007d7348  c3                   ret 
// 007d7349  f7de                 neg esi
// 007d734b  1bf6                 sbb esi, esi
// 007d734d  23f7                 and esi, edi
// 007d734f  56                   push esi
// 007d7350  8bc8                 mov ecx, eax
// 007d7352  e86966f8ff           call 0x75d9c0
// 007d7357  83f802               cmp eax, 2
// 007d735a  7405                 je 0x7d7361
// 007d735c  83f803               cmp eax, 3
// 007d735f  7508                 jne 0x7d7369
// 007d7361  5f                   pop edi
// 007d7362  b801000000           mov eax, 1
// 007d7367  5e                   pop esi
// 007d7368  c3                   ret 
// 007d7369  5f                   pop edi
// 007d736a  33c0                 xor eax, eax
// 007d736c  5e                   pop esi
// 007d736d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsCaptionVertical@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
