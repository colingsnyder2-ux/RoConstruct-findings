// roc 2012-06 009e7880  unit: CXTPStatusBarPane  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e7880
//
// 009e7880  6aff                 push -1
// 009e7882  689a11ae00           push 0xae119a
// 009e7887  64a100000000         mov eax, dword ptr fs:[0]
// 009e788d  50                   push eax
// 009e788e  81ec60010000         sub esp, 0x160
// 009e7894  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009e7899  33c4                 xor eax, esp
// 009e789b  8984245c010000       mov dword ptr [esp + 0x15c], eax
// 009e78a2  53                   push ebx
// 009e78a3  55                   push ebp
// 009e78a4  56                   push esi
// 009e78a5  57                   push edi
// 009e78a6  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009e78ab  33c4                 xor eax, esp
// 009e78ad  50                   push eax
// 009e78ae  8d842474010000       lea eax, [esp + 0x174]
// 009e78b5  64a300000000         mov dword ptr fs:[0], eax
// 009e78bb  8bf1                 mov esi, ecx
// 009e78bd  89742418             mov dword ptr [esp + 0x18], esi
// 009e78c1  e8e2220b00           call 0xa99ba8
// 009e78c6  33ed                 xor ebp, ebp
// 009e78c8  8d8e98000000         lea ecx, [esi + 0x98]
// 009e78ce  89ac247c010000       mov dword ptr [esp + 0x17c], ebp
// 009e78d5  c706bc79c100         mov dword ptr [esi], 0xc179bc
// 009e78db  e8c0feffff           call 0x9e77a0
// 009e78e0  8dbeb0000000         lea edi, [esi + 0xb0]
// 009e78e6  896f04               mov dword ptr [edi + 4], ebp
// 009e78e9  c7075007b600         mov dword ptr [edi], 0xb60750
// 009e78ef  bb02000000           mov ebx, 2
// 009e78f4  8bce                 mov ecx, esi
// 009e78f6  889c247c010000       mov byte ptr [esp + 0x17c], bl
// 009e78fd  895e64               mov dword ptr [esi + 0x64], ebx
// 009e7900  e8abc30200           call 0xa13cb0
// 009e7905  85c0                 test eax, eax
// 009e7907  8d4501               lea eax, [ebp + 1]
// 009e790a  740b                 je 0x9e7917
// 009e790c  896e5c               mov dword ptr [esi + 0x5c], ebp
// 009e790f  896e60               mov dword ptr [esi + 0x60], ebp
// 009e7912  896e68               mov dword ptr [esi + 0x68], ebp
// 009e7915  eb09                 jmp 0x9e7920
// 009e7917  895e5c               mov dword ptr [esi + 0x5c], ebx
// 009e791a  895e60               mov dword ptr [esi + 0x60], ebx
// 009e791d  894668               mov dword ptr [esi + 0x68], eax
// 009e7920  68a8000000           push 0xa8
// 009e7925  89aeac000000         mov dword ptr [esi + 0xac], ebp
// 009e792b  89aec8000000         mov dword ptr [esi + 0xc8], ebp
// 009e7931  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 009e7937  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 009e793d  e8d8a7f9ff           call 0x98211a
// 009e7942  83c404               add esp, 4
// 009e7945  89442414             mov dword ptr [esp + 0x14], eax
// 009e7949  c684247c01000003     mov byte ptr [esp + 0x17c], 3
// 009e7951  3bc5                 cmp eax, ebp
// 009e7953  7409                 je 0x9e795e
// 009e7955  8bc8                 mov ecx, eax
// 009e7957  e8043e0000           call 0x9eb760
// 009e795c  eb02                 jmp 0x9e7960
// 009e795e  33c0                 xor eax, eax
// 009e7960  8d4c241c             lea ecx, [esp + 0x1c]
// 009e7964  889c247c010000       mov byte ptr [esp + 0x17c], bl
// 009e796b  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 009e7971  e80a5b0000           call 0x9ed480
// 009e7976  8d8424f8000000       lea eax, [esp + 0xf8]
// 009e797d  50                   push eax
// 009e797e  ff15a820b200         call dword ptr [0xb220a8]
// 009e7984  50                   push eax
// 009e7985  8bcf                 mov ecx, edi
// 009e7987  e84cadf9ff           call 0x9826d8
// 009e798c  89aebc000000         mov dword ptr [esi + 0xbc], ebp
// 009e7992  c786c400000001000000 mov dword ptr [esi + 0xc4], 1
// 009e799c  89aec0000000         mov dword ptr [esi + 0xc0], ebp
// 009e79a2  8bc6                 mov eax, esi
// 009e79a4  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 009e79ab  64890d00000000       mov dword ptr fs:[0], ecx
// 009e79b2  59                   pop ecx
// 009e79b3  5f                   pop edi
// 009e79b4  5e                   pop esi
// 009e79b5  5d                   pop ebp
// 009e79b6  5b                   pop ebx
// 009e79b7  8b8c245c010000       mov ecx, dword ptr [esp + 0x15c]
// 009e79be  33cc                 xor ecx, esp
// 009e79c0  e872c0f9ff           call 0x983a37
// 009e79c5  81c46c010000         add esp, 0x16c
// 009e79cb  c3                   ret 
// copied from an identical function in another client (function ??0CXTPStatusBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp