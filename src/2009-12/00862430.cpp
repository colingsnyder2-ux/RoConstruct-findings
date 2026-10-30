// roc 2009-12 00862430  unit: CXTPPropertyGridToolTip  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00862430
//
// 00862430  8b442404             mov eax, dword ptr [esp + 4]
// 00862434  57                   push edi
// 00862435  8bf9                 mov edi, ecx
// 00862437  3b8718010000         cmp eax, dword ptr [edi + 0x118]
// 0086243d  0f8586000000         jne 0x8624c9
// 00862443  53                   push ebx
// 00862444  33db                 xor ebx, ebx
// 00862446  56                   push esi
// 00862447  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 0086244d  7431                 je 0x862480
// 0086244f  e89cfdffff           call 0x8621f0
// 00862454  3bc3                 cmp eax, ebx
// 00862456  7418                 je 0x862470
// 00862458  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0086245e  3b4820               cmp ecx, dword ptr [eax + 0x20]
// 00862461  751d                 jne 0x862480
// 00862463  8b9704010000         mov edx, dword ptr [edi + 0x104]
// 00862469  3b5024               cmp edx, dword ptr [eax + 0x24]
// 0086246c  740a                 je 0x862478
// 0086246e  eb10                 jmp 0x862480
// 00862470  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 00862476  7508                 jne 0x862480
// 00862478  50                   push eax
// 00862479  8bcf                 mov ecx, edi
// 0086247b  e810e3ffff           call 0x860790
// 00862480  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 00862486  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00862489  50                   push eax
// 0086248a  51                   push ecx
// 0086248b  ff15d0cb9800         call dword ptr [0x98cbd0]
// 00862491  8db7e0000000         lea esi, [edi + 0xe0]
// 00862497  8bce                 mov ecx, esi
// 00862499  899f18010000         mov dword ptr [edi + 0x118], ebx
// 0086249f  ff1590d69800         call dword ptr [0x98d690]
// 008624a5  8d560c               lea edx, [esi + 0xc]
// 008624a8  895e08               mov dword ptr [esi + 8], ebx
// 008624ab  895e20               mov dword ptr [esi + 0x20], ebx
// 008624ae  895e1c               mov dword ptr [esi + 0x1c], ebx
// 008624b1  8b1d9cca9800         mov ebx, dword ptr [0x98ca9c]
// 008624b7  52                   push edx
// 008624b8  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 008624bf  ffd3                 call ebx
// 008624c1  83c628               add esi, 0x28
// 008624c4  56                   push esi
// 008624c5  ffd3                 call ebx
// 008624c7  5e                   pop esi
// 008624c8  5b                   pop ebx
// 008624c9  8bcf                 mov ecx, edi
// 008624cb  e86019f9ff           call 0x7f3e30
// 008624d0  5f                   pop edi
// 008624d1  c20400               ret 4
// copied from an identical function in another client (function ?OnTimer@CXTPToolTipContextToolTip@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp