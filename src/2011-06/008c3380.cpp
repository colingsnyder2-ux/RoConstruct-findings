// roc 2011-06 008c3380  unit: CXTPDockingPaneTabbedContainer  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c3380
//
// 008c3380  56                   push esi
// 008c3381  8bf1                 mov esi, ecx
// 008c3383  57                   push edi
// 008c3384  8d7e54               lea edi, [esi + 0x54]
// 008c3387  8bcf                 mov ecx, edi
// 008c3389  e8d2e9ffff           call 0x8c1d60
// 008c338e  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 008c3394  83ea00               sub edx, 0
// 008c3397  7440                 je 0x8c33d9
// 008c3399  83ea02               sub edx, 2
// 008c339c  741b                 je 0x8c33b9
// 008c339e  83ea01               sub edx, 1
// 008c33a1  752e                 jne 0x8c33d1
// 008c33a3  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008c33a6  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008c33a9  2b4674               sub eax, dword ptr [esi + 0x74]
// 008c33ac  2b4e70               sub ecx, dword ptr [esi + 0x70]
// 008c33af  5f                   pop edi
// 008c33b0  3bc8                 cmp ecx, eax
// 008c33b2  0f9fc2               setg dl
// 008c33b5  5e                   pop esi
// 008c33b6  8bc2                 mov eax, edx
// 008c33b8  c3                   ret 
// 008c33b9  f7de                 neg esi
// 008c33bb  1bf6                 sbb esi, esi
// 008c33bd  23f7                 and esi, edi
// 008c33bf  56                   push esi
// 008c33c0  8bc8                 mov ecx, eax
// 008c33c2  e8a9adf8ff           call 0x84e170
// 008c33c7  83f802               cmp eax, 2
// 008c33ca  7405                 je 0x8c33d1
// 008c33cc  83f803               cmp eax, 3
// 008c33cf  7508                 jne 0x8c33d9
// 008c33d1  5f                   pop edi
// 008c33d2  b801000000           mov eax, 1
// 008c33d7  5e                   pop esi
// 008c33d8  c3                   ret 
// 008c33d9  5f                   pop edi
// 008c33da  33c0                 xor eax, eax
// 008c33dc  5e                   pop esi
// 008c33dd  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsCaptionVertical@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
