// roc 2009-12 0079a290  unit: lua_exception  size: 743 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079a290
//
// 0079a290  83ec28               sub esp, 0x28
// 0079a293  53                   push ebx
// 0079a294  56                   push esi
// 0079a295  8b742434             mov esi, dword ptr [esp + 0x34]
// 0079a299  57                   push edi
// 0079a29a  8b7e08               mov edi, dword ptr [esi + 8]
// 0079a29d  6a00                 push 0
// 0079a29f  6856fd9900           push 0x99fd56
// 0079a2a4  bb01000000           mov ebx, 1
// 0079a2a9  56                   push esi
// 0079a2aa  895c2424             mov dword ptr [esp + 0x24], ebx
// 0079a2ae  e8dd680300           call 0x7d0b90
// 0079a2b3  8907                 mov dword ptr [edi], eax
// 0079a2b5  c7470804000000       mov dword ptr [edi + 8], 4
// 0079a2bc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0079a2bf  2b4608               sub eax, dword ptr [esi + 8]
// 0079a2c2  83c40c               add esp, 0xc
// 0079a2c5  83f810               cmp eax, 0x10
// 0079a2c8  7f0a                 jg 0x79a2d4
// 0079a2ca  53                   push ebx
// 0079a2cb  56                   push esi
// 0079a2cc  e85fd0ffff           call 0x797330
// 0079a2d1  83c408               add esp, 8
// 0079a2d4  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0079a2d8  83460810             add dword ptr [esi + 8], 0x10
// 0079a2dc  55                   push ebp
// 0079a2dd  6a25                 push 0x25
// 0079a2df  57                   push edi
// 0079a2e0  ff1530b89800         call dword ptr [0x98b830]
// 0079a2e6  83c408               add esp, 8
// 0079a2e9  89442418             mov dword ptr [esp + 0x18], eax
// 0079a2ed  85c0                 test eax, eax
// 0079a2ef  0f84a2010000         je 0x79a497
// 0079a2f5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0079a2f9  8d69fc               lea ebp, [ecx - 4]
// 0079a2fc  83c1f8               add ecx, -8
// 0079a2ff  894c2414             mov dword ptr [esp + 0x14], ecx
// 0079a303  eb04                 jmp 0x79a309
// 0079a305  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079a309  8b5e08               mov ebx, dword ptr [esi + 8]
// 0079a30c  2bc7                 sub eax, edi
// 0079a30e  50                   push eax
// 0079a30f  57                   push edi
// 0079a310  56                   push esi
// 0079a311  e87a680300           call 0x7d0b90
// 0079a316  8903                 mov dword ptr [ebx], eax
// 0079a318  c7430804000000       mov dword ptr [ebx + 8], 4
// 0079a31f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0079a322  2b4e08               sub ecx, dword ptr [esi + 8]
// 0079a325  bb10000000           mov ebx, 0x10
// 0079a32a  83c40c               add esp, 0xc
// 0079a32d  3bcb                 cmp ecx, ebx
// 0079a32f  7f0b                 jg 0x79a33c
// 0079a331  6a01                 push 1
// 0079a333  56                   push esi
// 0079a334  e8f7cfffff           call 0x797330
// 0079a339  83c408               add esp, 8
// 0079a33c  015e08               add dword ptr [esi + 8], ebx
// 0079a33f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0079a343  8a4201               mov al, byte ptr [edx + 1]
// 0079a346  8b7e08               mov edi, dword ptr [esi + 8]
// 0079a349  0fbec8               movsx ecx, al
// 0079a34c  83c1db               add ecx, -0x25
// 0079a34f  83f94e               cmp ecx, 0x4e
// 0079a352  0f87c9000000         ja 0x79a421
// 0079a358  0fb68928a57900       movzx ecx, byte ptr [ecx + 0x79a528]
// 0079a35f  ff248d0ca57900       jmp dword ptr [ecx*4 + 0x79a50c]
// 0079a366  8b5504               mov edx, dword ptr [ebp + 4]
// 0079a369  8344241404           add dword ptr [esp + 0x14], 4
// 0079a36e  83c504               add ebp, 4
// 0079a371  85d2                 test edx, edx
// 0079a373  7505                 jne 0x79a37a
// 0079a375  ba3cab9e00           mov edx, 0x9eab3c
// 0079a37a  e8c1feffff           call 0x79a240
// 0079a37f  e9eb000000           jmp 0x79a46f
// 0079a384  8a5504               mov dl, byte ptr [ebp + 4]
// 0079a387  8344241404           add dword ptr [esp + 0x14], 4
// 0079a38c  83c504               add ebp, 4
// 0079a38f  8854243c             mov byte ptr [esp + 0x3c], dl
// 0079a393  8d54243c             lea edx, [esp + 0x3c]
// 0079a397  c644243d00           mov byte ptr [esp + 0x3d], 0
// 0079a39c  e89ffeffff           call 0x79a240
// 0079a3a1  e9c9000000           jmp 0x79a46f
// 0079a3a6  db4504               fild dword ptr [ebp + 4]
// 0079a3a9  8344241404           add dword ptr [esp + 0x14], 4
// 0079a3ae  83c504               add ebp, 4
// 0079a3b1  c7470803000000       mov dword ptr [edi + 8], 3
// 0079a3b8  dd1f                 fstp qword ptr [edi]
// 0079a3ba  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0079a3bd  2b4608               sub eax, dword ptr [esi + 8]
// 0079a3c0  3bc3                 cmp eax, ebx
// 0079a3c2  e998000000           jmp 0x79a45f
// 0079a3c7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079a3cb  dd4008               fld qword ptr [eax + 8]
// 0079a3ce  83c008               add eax, 8
// 0079a3d1  dd1f                 fstp qword ptr [edi]
// 0079a3d3  c7470803000000       mov dword ptr [edi + 8], 3
// 0079a3da  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0079a3dd  2b4e08               sub ecx, dword ptr [esi + 8]
// 0079a3e0  83c508               add ebp, 8
// 0079a3e3  89442414             mov dword ptr [esp + 0x14], eax
// 0079a3e7  3bcb                 cmp ecx, ebx
// 0079a3e9  eb74                 jmp 0x79a45f
// 0079a3eb  8b5504               mov edx, dword ptr [ebp + 4]
// 0079a3ee  8344241404           add dword ptr [esp + 0x14], 4
// 0079a3f3  83c504               add ebp, 4
// 0079a3f6  52                   push edx
// 0079a3f7  8d442424             lea eax, [esp + 0x24]
// 0079a3fb  6838ab9e00           push 0x9eab38
// 0079a400  50                   push eax
// 0079a401  ff15dcb79800         call dword ptr [0x98b7dc]
// 0079a407  83c40c               add esp, 0xc
// 0079a40a  8d542420             lea edx, [esp + 0x20]
// 0079a40e  e82dfeffff           call 0x79a240
// 0079a413  eb5a                 jmp 0x79a46f
// 0079a415  ba582d9d00           mov edx, 0x9d2d58
// 0079a41a  e821feffff           call 0x79a240
// 0079a41f  eb4e                 jmp 0x79a46f
// 0079a421  88442411             mov byte ptr [esp + 0x11], al
// 0079a425  8d442410             lea eax, [esp + 0x10]
// 0079a429  c644241025           mov byte ptr [esp + 0x10], 0x25
// 0079a42e  c644241200           mov byte ptr [esp + 0x12], 0
// 0079a433  8d5001               lea edx, [eax + 1]
// 0079a436  8a08                 mov cl, byte ptr [eax]
// 0079a438  40                   inc eax
// 0079a439  84c9                 test cl, cl
// 0079a43b  75f9                 jne 0x79a436
// 0079a43d  2bc2                 sub eax, edx
// 0079a43f  50                   push eax
// 0079a440  8d4c2414             lea ecx, [esp + 0x14]
// 0079a444  51                   push ecx
// 0079a445  56                   push esi
// 0079a446  e845670300           call 0x7d0b90
// 0079a44b  8907                 mov dword ptr [edi], eax
// 0079a44d  c7470804000000       mov dword ptr [edi + 8], 4
// 0079a454  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0079a457  2b5608               sub edx, dword ptr [esi + 8]
// 0079a45a  83c40c               add esp, 0xc
// 0079a45d  3bd3                 cmp edx, ebx
// 0079a45f  7f0b                 jg 0x79a46c
// 0079a461  6a01                 push 1
// 0079a463  56                   push esi
// 0079a464  e8c7ceffff           call 0x797330
// 0079a469  83c408               add esp, 8
// 0079a46c  015e08               add dword ptr [esi + 8], ebx
// 0079a46f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0079a473  8344241c02           add dword ptr [esp + 0x1c], 2
// 0079a478  83c702               add edi, 2
// 0079a47b  6a25                 push 0x25
// 0079a47d  57                   push edi
// 0079a47e  ff1530b89800         call dword ptr [0x98b830]
// 0079a484  83c408               add esp, 8
// 0079a487  89442418             mov dword ptr [esp + 0x18], eax
// 0079a48b  85c0                 test eax, eax
// 0079a48d  0f8572feffff         jne 0x79a305
// 0079a493  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0079a497  8b6e08               mov ebp, dword ptr [esi + 8]
// 0079a49a  8bc7                 mov eax, edi
// 0079a49c  8d5001               lea edx, [eax + 1]
// 0079a49f  90                   nop 
// 0079a4a0  8a08                 mov cl, byte ptr [eax]
// 0079a4a2  40                   inc eax
// 0079a4a3  84c9                 test cl, cl
// 0079a4a5  75f9                 jne 0x79a4a0
// 0079a4a7  2bc2                 sub eax, edx
// 0079a4a9  50                   push eax
// 0079a4aa  57                   push edi
// 0079a4ab  56                   push esi
// 0079a4ac  e8df660300           call 0x7d0b90
// 0079a4b1  894500               mov dword ptr [ebp], eax
// 0079a4b4  c7450804000000       mov dword ptr [ebp + 8], 4
// 0079a4bb  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0079a4be  2b4608               sub eax, dword ptr [esi + 8]
// 0079a4c1  83c40c               add esp, 0xc
// 0079a4c4  83f810               cmp eax, 0x10
// 0079a4c7  5d                   pop ebp
// 0079a4c8  7f0b                 jg 0x79a4d5
// 0079a4ca  6a01                 push 1
// 0079a4cc  56                   push esi
// 0079a4cd  e85eceffff           call 0x797330
// 0079a4d2  83c408               add esp, 8
// 0079a4d5  83460810             add dword ptr [esi + 8], 0x10
// 0079a4d9  8b4608               mov eax, dword ptr [esi + 8]
// 0079a4dc  2b460c               sub eax, dword ptr [esi + 0xc]
// 0079a4df  8d4b01               lea ecx, [ebx + 1]
// 0079a4e2  c1f804               sar eax, 4
// 0079a4e5  48                   dec eax
// 0079a4e6  50                   push eax
// 0079a4e7  51                   push ecx
// 0079a4e8  56                   push esi
// 0079a4e9  e822420300           call 0x7ce710
// 0079a4ee  f7db                 neg ebx
// 0079a4f0  c1e304               shl ebx, 4
// 0079a4f3  015e08               add dword ptr [esi + 8], ebx
// 0079a4f6  8b7608               mov esi, dword ptr [esi + 8]
// 0079a4f9  8b46f0               mov eax, dword ptr [esi - 0x10]
// 0079a4fc  83c40c               add esp, 0xc
// 0079a4ff  5f                   pop edi
// 0079a500  5e                   pop esi
// 0079a501  83c010               add eax, 0x10
// 0079a504  5b                   pop ebx
// 0079a505  83c428               add esp, 0x28
// 0079a508  c3                   ret 
// 0079a509  8d4900               lea ecx, [ecx]
// 0079a50c  15a4790084           adc eax, 0x840079a4
// 0079a511  a37900a6a3           mov dword ptr [0xa3a60079], eax
// 0079a516  7900                 jns 0x79a518
// copied from an identical function in another client (function _luaO_pushvfstring)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lobject.c