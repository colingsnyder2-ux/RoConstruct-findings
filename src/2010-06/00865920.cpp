// roc 2010-06 00865920  unit: CXTPDockingPaneTabbedContainer  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865920
//
// 00865920  83ec18               sub esp, 0x18
// 00865923  56                   push esi
// 00865924  8bf1                 mov esi, ecx
// 00865926  57                   push edi
// 00865927  8d7e54               lea edi, [esi + 0x54]
// 0086592a  8bcf                 mov ecx, edi
// 0086592c  e8dfefffff           call 0x864910
// 00865931  83b8bc00000000       cmp dword ptr [eax + 0xbc], 0
// 00865938  746d                 je 0x8659a7
// 0086593a  53                   push ebx
// 0086593b  8d44240c             lea eax, [esp + 0xc]
// 0086593f  50                   push eax
// 00865940  ff1574bc9e00         call dword ptr [0x9ebc74]
// 00865946  8b5620               mov edx, dword ptr [esi + 0x20]
// 00865949  8d4c240c             lea ecx, [esp + 0xc]
// 0086594d  51                   push ecx
// 0086594e  52                   push edx
// 0086594f  ff1578bc9e00         call dword ptr [0x9ebc78]
// 00865955  8bcf                 mov ecx, edi
// 00865957  e8c4efffff           call 0x864920
// 0086595c  8b10                 mov edx, dword ptr [eax]
// 0086595e  8b5274               mov edx, dword ptr [edx + 0x74]
// 00865961  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00865965  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00865969  56                   push esi
// 0086596a  8d4c2418             lea ecx, [esp + 0x18]
// 0086596e  51                   push ecx
// 0086596f  8bc8                 mov ecx, eax
// 00865971  ffd2                 call edx
// 00865973  53                   push ebx
// 00865974  57                   push edi
// 00865975  50                   push eax
// 00865976  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 0086597c  5b                   pop ebx
// 0086597d  85c0                 test eax, eax
// 0086597f  7426                 je 0x8659a7
// 00865981  e8d822f4ff           call 0x7a7c5e
// 00865986  68867f0000           push 0x7f86
// 0086598b  6a00                 push 0
// 0086598d  ff15ccbb9e00         call dword ptr [0x9ebbcc]
// 00865993  50                   push eax
// 00865994  ff15b4bb9e00         call dword ptr [0x9ebbb4]
// 0086599a  5f                   pop edi
// 0086599b  b801000000           mov eax, 1
// 008659a0  5e                   pop esi
// 008659a1  83c418               add esp, 0x18
// 008659a4  c20c00               ret 0xc
// 008659a7  8bce                 mov ecx, esi
// 008659a9  e8c225f4ff           call 0x7a7f70
// 008659ae  5f                   pop edi
// 008659af  5e                   pop esi
// 008659b0  83c418               add esp, 0x18
// 008659b3  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSetCursor@CXTPDockingPaneTabbedContainer@@IAEHPAVCWnd@@II@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp