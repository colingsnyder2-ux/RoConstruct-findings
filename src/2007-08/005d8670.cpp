// roc 2007-08 005d8670  unit: RBX::UnifiedImageWidget  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d8670
//
// 005d8670  6aff                 push -1
// 005d8672  681ba47500           push 0x75a41b
// 005d8677  64a100000000         mov eax, dword ptr fs:[0]
// 005d867d  50                   push eax
// 005d867e  64892500000000       mov dword ptr fs:[0], esp
// 005d8685  83ec18               sub esp, 0x18
// 005d8688  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d868c  53                   push ebx
// 005d868d  55                   push ebp
// 005d868e  56                   push esi
// 005d868f  33f6                 xor esi, esi
// 005d8691  3bce                 cmp ecx, esi
// 005d8693  8974240c             mov dword ptr [esp + 0xc], esi
// 005d8697  743b                 je 0x5d86d4
// 005d8699  8d44241c             lea eax, [esp + 0x1c]
// 005d869d  50                   push eax
// 005d869e  e84d5ae4ff           call 0x41e0f0
// 005d86a3  50                   push eax
// 005d86a4  8d4c2418             lea ecx, [esp + 0x18]
// 005d86a8  51                   push ecx
// 005d86a9  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005d86b1  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005d86b9  e8f2dbffff           call 0x5d62b0
// 005d86be  83c408               add esp, 8
// 005d86c1  8b742410             mov esi, dword ptr [esp + 0x10]
// 005d86c5  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 005d86cd  bb03000000           mov ebx, 3
// 005d86d2  eb11                 jmp 0x5d86e5
// 005d86d4  8974240c             mov dword ptr [esp + 0xc], esi
// 005d86d8  89742410             mov dword ptr [esp + 0x10], esi
// 005d86dc  8d44240c             lea eax, [esp + 0xc]
// 005d86e0  bb04000000           mov ebx, 4
// 005d86e5  8b10                 mov edx, dword ptr [eax]
// 005d86e7  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 005d86eb  895500               mov dword ptr [ebp], edx
// 005d86ee  8b4004               mov eax, dword ptr [eax + 4]
// 005d86f1  85c0                 test eax, eax
// 005d86f3  894504               mov dword ptr [ebp + 4], eax
// 005d86f6  740c                 je 0x5d8704
// 005d86f8  83c004               add eax, 4
// 005d86fb  b901000000           mov ecx, 1
// 005d8700  f00fc108             lock xadd dword ptr [eax], ecx
// 005d8704  83cb08               or ebx, 8
// 005d8707  f6c304               test bl, 4
// 005d870a  7435                 je 0x5d8741
// 005d870c  83e3fb               and ebx, 0xfffffffb
// 005d870f  85f6                 test esi, esi
// 005d8711  895c240c             mov dword ptr [esp + 0xc], ebx
// 005d8715  742a                 je 0x5d8741
// 005d8717  8d5604               lea edx, [esi + 4]
// 005d871a  83c8ff               or eax, 0xffffffff
// 005d871d  f00fc102             lock xadd dword ptr [edx], eax
// 005d8721  751e                 jne 0x5d8741
// 005d8723  8b16                 mov edx, dword ptr [esi]
// 005d8725  8b4204               mov eax, dword ptr [edx + 4]
// 005d8728  8bce                 mov ecx, esi
// 005d872a  ffd0                 call eax
// 005d872c  8d4e08               lea ecx, [esi + 8]
// 005d872f  83caff               or edx, 0xffffffff
// 005d8732  f00fc111             lock xadd dword ptr [ecx], edx
// 005d8736  7509                 jne 0x5d8741
// 005d8738  8b06                 mov eax, dword ptr [esi]
// 005d873a  8b5008               mov edx, dword ptr [eax + 8]
// 005d873d  8bce                 mov ecx, esi
// 005d873f  ffd2                 call edx
// 005d8741  f6c302               test bl, 2
// 005d8744  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 005d874c  7439                 je 0x5d8787
// 005d874e  8b742418             mov esi, dword ptr [esp + 0x18]
// 005d8752  83e3fd               and ebx, 0xfffffffd
// 005d8755  85f6                 test esi, esi
// 005d8757  895c240c             mov dword ptr [esp + 0xc], ebx
// 005d875b  742a                 je 0x5d8787
// 005d875d  8d4604               lea eax, [esi + 4]
// 005d8760  83c9ff               or ecx, 0xffffffff
// 005d8763  f00fc108             lock xadd dword ptr [eax], ecx
// 005d8767  751e                 jne 0x5d8787
// 005d8769  8b16                 mov edx, dword ptr [esi]
// 005d876b  8b4204               mov eax, dword ptr [edx + 4]
// 005d876e  8bce                 mov ecx, esi
// 005d8770  ffd0                 call eax
// 005d8772  8d4e08               lea ecx, [esi + 8]
// 005d8775  83caff               or edx, 0xffffffff
// 005d8778  f00fc111             lock xadd dword ptr [ecx], edx
// 005d877c  7509                 jne 0x5d8787
// 005d877e  8b06                 mov eax, dword ptr [esi]
// 005d8780  8b5008               mov edx, dword ptr [eax + 8]
// 005d8783  8bce                 mov ecx, esi
// 005d8785  ffd2                 call edx
// 005d8787  f6c301               test bl, 1
// 005d878a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005d8792  7439                 je 0x5d87cd
// 005d8794  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d8798  83e3fe               and ebx, 0xfffffffe
// 005d879b  85f6                 test esi, esi
// 005d879d  895c240c             mov dword ptr [esp + 0xc], ebx
// 005d87a1  742a                 je 0x5d87cd
// 005d87a3  8d4604               lea eax, [esi + 4]
// 005d87a6  83c9ff               or ecx, 0xffffffff
// 005d87a9  f00fc108             lock xadd dword ptr [eax], ecx
// 005d87ad  751e                 jne 0x5d87cd
// 005d87af  8b16                 mov edx, dword ptr [esi]
// 005d87b1  8b4204               mov eax, dword ptr [edx + 4]
// 005d87b4  8bce                 mov ecx, esi
// 005d87b6  ffd0                 call eax
// 005d87b8  8d4e08               lea ecx, [esi + 8]
// 005d87bb  83caff               or edx, 0xffffffff
// 005d87be  f00fc111             lock xadd dword ptr [ecx], edx
// 005d87c2  7509                 jne 0x5d87cd
// 005d87c4  8b06                 mov eax, dword ptr [esi]
// 005d87c6  8b5008               mov edx, dword ptr [eax + 8]
// 005d87c9  8bce                 mov ecx, esi
// 005d87cb  ffd2                 call edx
// 005d87cd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d87d1  5e                   pop esi
// 005d87d2  8bc5                 mov eax, ebp
// 005d87d4  5d                   pop ebp
// 005d87d5  5b                   pop ebx
// 005d87d6  64890d00000000       mov dword ptr fs:[0], ecx
// 005d87dd  83c424               add esp, 0x24
// 005d87e0  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$shared_from_dynamic_cast@VPartInstance@RBX@@VInstance@2@@RBX@@YA?AV?$shared_ptr@VPartInstance@RBX@@@boost@@PAV?$enable_shared_from_this@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
