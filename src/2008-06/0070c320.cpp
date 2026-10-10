// roc 2008-06 0070c320  unit: RBX::VInstance::?$NonFactoryProduct  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070c320
//
// 0070c320  8b442404             mov eax, dword ptr [esp + 4]
// 0070c324  57                   push edi
// 0070c325  8bf9                 mov edi, ecx
// 0070c327  3b8718010000         cmp eax, dword ptr [edi + 0x118]
// 0070c32d  0f8586000000         jne 0x70c3b9
// 0070c333  53                   push ebx
// 0070c334  33db                 xor ebx, ebx
// 0070c336  56                   push esi
// 0070c337  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 0070c33d  7431                 je 0x70c370
// 0070c33f  e89cfdffff           call 0x70c0e0
// 0070c344  3bc3                 cmp eax, ebx
// 0070c346  7418                 je 0x70c360
// 0070c348  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0070c34e  3b4820               cmp ecx, dword ptr [eax + 0x20]
// 0070c351  751d                 jne 0x70c370
// 0070c353  8b9704010000         mov edx, dword ptr [edi + 0x104]
// 0070c359  3b5024               cmp edx, dword ptr [eax + 0x24]
// 0070c35c  740a                 je 0x70c368
// 0070c35e  eb10                 jmp 0x70c370
// 0070c360  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 0070c366  7508                 jne 0x70c370
// 0070c368  50                   push eax
// 0070c369  8bcf                 mov ecx, edi
// 0070c36b  e810e3ffff           call 0x70a680
// 0070c370  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 0070c376  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0070c379  50                   push eax
// 0070c37a  51                   push ecx
// 0070c37b  ff151c2e8000         call dword ptr [0x802e1c]
// 0070c381  8db7e0000000         lea esi, [edi + 0xe0]
// 0070c387  8bce                 mov ecx, esi
// 0070c389  899f18010000         mov dword ptr [edi + 0x118], ebx
// 0070c38f  ff15843e8000         call dword ptr [0x803e84]
// 0070c395  8d560c               lea edx, [esi + 0xc]
// 0070c398  895e08               mov dword ptr [esi + 8], ebx
// 0070c39b  895e20               mov dword ptr [esi + 0x20], ebx
// 0070c39e  895e1c               mov dword ptr [esi + 0x1c], ebx
// 0070c3a1  8b1d7c2c8000         mov ebx, dword ptr [0x802c7c]
// 0070c3a7  52                   push edx
// 0070c3a8  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 0070c3af  ffd3                 call ebx
// 0070c3b1  83c628               add esi, 0x28
// 0070c3b4  56                   push esi
// 0070c3b5  ffd3                 call ebx
// 0070c3b7  5e                   pop esi
// 0070c3b8  5b                   pop ebx
// 0070c3b9  8bcf                 mov ecx, edi
// 0070c3bb  e8a848f9ff           call 0x6a0c68
// 0070c3c0  5f                   pop edi
// 0070c3c1  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?OnTimer@CXTPToolTipContextToolTip@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
