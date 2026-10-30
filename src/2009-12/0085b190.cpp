// roc 2009-12 0085b190  unit: CXTPStatusBarPane  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b190
//
// 0085b190  6aff                 push -1
// 0085b192  685ae39500           push 0x95e35a
// 0085b197  64a100000000         mov eax, dword ptr fs:[0]
// 0085b19d  50                   push eax
// 0085b19e  81ec60010000         sub esp, 0x160
// 0085b1a4  a10052b600           mov eax, dword ptr [0xb65200]
// 0085b1a9  33c4                 xor eax, esp
// 0085b1ab  8984245c010000       mov dword ptr [esp + 0x15c], eax
// 0085b1b2  53                   push ebx
// 0085b1b3  55                   push ebp
// 0085b1b4  56                   push esi
// 0085b1b5  57                   push edi
// 0085b1b6  a10052b600           mov eax, dword ptr [0xb65200]
// 0085b1bb  33c4                 xor eax, esp
// 0085b1bd  50                   push eax
// 0085b1be  8d842474010000       lea eax, [esp + 0x174]
// 0085b1c5  64a300000000         mov dword ptr fs:[0], eax
// 0085b1cb  8bf1                 mov esi, ecx
// 0085b1cd  89742418             mov dword ptr [esp + 0x18], esi
// 0085b1d1  e84ab90c00           call 0x926b20
// 0085b1d6  33ed                 xor ebp, ebp
// 0085b1d8  8d8e98000000         lea ecx, [esi + 0x98]
// 0085b1de  89ac247c010000       mov dword ptr [esp + 0x17c], ebp
// 0085b1e5  c70614d39f00         mov dword ptr [esi], 0x9fd314
// 0085b1eb  e8c0feffff           call 0x85b0b0
// 0085b1f0  8dbeb0000000         lea edi, [esi + 0xb0]
// 0085b1f6  896f04               mov dword ptr [edi + 4], ebp
// 0085b1f9  c70798019b00         mov dword ptr [edi], 0x9b0198
// 0085b1ff  bb02000000           mov ebx, 2
// 0085b204  8bce                 mov ecx, esi
// 0085b206  889c247c010000       mov byte ptr [esp + 0x17c], bl
// 0085b20d  895e64               mov dword ptr [esi + 0x64], ebx
// 0085b210  e85b27feff           call 0x83d970
// 0085b215  85c0                 test eax, eax
// 0085b217  8d4501               lea eax, [ebp + 1]
// 0085b21a  740b                 je 0x85b227
// 0085b21c  896e5c               mov dword ptr [esi + 0x5c], ebp
// 0085b21f  896e60               mov dword ptr [esi + 0x60], ebp
// 0085b222  896e68               mov dword ptr [esi + 0x68], ebp
// 0085b225  eb09                 jmp 0x85b230
// 0085b227  895e5c               mov dword ptr [esi + 0x5c], ebx
// 0085b22a  895e60               mov dword ptr [esi + 0x60], ebx
// 0085b22d  894668               mov dword ptr [esi + 0x68], eax
// 0085b230  68a8000000           push 0xa8
// 0085b235  89aeac000000         mov dword ptr [esi + 0xac], ebp
// 0085b23b  89aec8000000         mov dword ptr [esi + 0xc8], ebp
// 0085b241  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0085b247  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 0085b24d  e80e86f9ff           call 0x7f3860
// 0085b252  83c404               add esp, 4
// 0085b255  89442414             mov dword ptr [esp + 0x14], eax
// 0085b259  c684247c01000003     mov byte ptr [esp + 0x17c], 3
// 0085b261  3bc5                 cmp eax, ebp
// 0085b263  7409                 je 0x85b26e
// 0085b265  8bc8                 mov ecx, eax
// 0085b267  e884670000           call 0x8619f0
// 0085b26c  eb02                 jmp 0x85b270
// 0085b26e  33c0                 xor eax, eax
// 0085b270  8d4c241c             lea ecx, [esp + 0x1c]
// 0085b274  889c247c010000       mov byte ptr [esp + 0x17c], bl
// 0085b27b  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0085b281  e84a23faff           call 0x7fd5d0
// 0085b286  8d8424f8000000       lea eax, [esp + 0xf8]
// 0085b28d  50                   push eax
// 0085b28e  ff1528b19800         call dword ptr [0x98b128]
// 0085b294  50                   push eax
// 0085b295  8bcf                 mov ecx, edi
// 0085b297  e88e8bf9ff           call 0x7f3e2a
// 0085b29c  89aebc000000         mov dword ptr [esi + 0xbc], ebp
// 0085b2a2  c786c400000001000000 mov dword ptr [esi + 0xc4], 1
// 0085b2ac  89aec0000000         mov dword ptr [esi + 0xc0], ebp
// 0085b2b2  8bc6                 mov eax, esi
// 0085b2b4  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 0085b2bb  64890d00000000       mov dword ptr fs:[0], ecx
// 0085b2c2  59                   pop ecx
// 0085b2c3  5f                   pop edi
// 0085b2c4  5e                   pop esi
// 0085b2c5  5d                   pop ebp
// 0085b2c6  5b                   pop ebx
// 0085b2c7  8b8c245c010000       mov ecx, dword ptr [esp + 0x15c]
// 0085b2ce  33cc                 xor ecx, esp
// 0085b2d0  e8c5a0f9ff           call 0x7f539a
// 0085b2d5  81c46c010000         add esp, 0x16c
// 0085b2db  c3                   ret 
// copied from an identical function in another client (function ??0CXTPStatusBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp