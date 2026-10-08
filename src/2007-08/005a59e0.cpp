// roc 2007-08 005a59e0  unit: RBX::VHumanoid::?$FactoryProduct  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a59e0
//
// 005a59e0  6aff                 push -1
// 005a59e2  681ba47500           push 0x75a41b
// 005a59e7  64a100000000         mov eax, dword ptr fs:[0]
// 005a59ed  50                   push eax
// 005a59ee  64892500000000       mov dword ptr fs:[0], esp
// 005a59f5  83ec18               sub esp, 0x18
// 005a59f8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a59fc  53                   push ebx
// 005a59fd  55                   push ebp
// 005a59fe  56                   push esi
// 005a59ff  33f6                 xor esi, esi
// 005a5a01  3bce                 cmp ecx, esi
// 005a5a03  8974240c             mov dword ptr [esp + 0xc], esi
// 005a5a07  743b                 je 0x5a5a44
// 005a5a09  8d44241c             lea eax, [esp + 0x1c]
// 005a5a0d  50                   push eax
// 005a5a0e  e8dd86e7ff           call 0x41e0f0
// 005a5a13  50                   push eax
// 005a5a14  8d4c2418             lea ecx, [esp + 0x18]
// 005a5a18  51                   push ecx
// 005a5a19  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005a5a21  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005a5a29  e8a2fbffff           call 0x5a55d0
// 005a5a2e  83c408               add esp, 8
// 005a5a31  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a5a35  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 005a5a3d  bb03000000           mov ebx, 3
// 005a5a42  eb11                 jmp 0x5a5a55
// 005a5a44  8974240c             mov dword ptr [esp + 0xc], esi
// 005a5a48  89742410             mov dword ptr [esp + 0x10], esi
// 005a5a4c  8d44240c             lea eax, [esp + 0xc]
// 005a5a50  bb04000000           mov ebx, 4
// 005a5a55  8b10                 mov edx, dword ptr [eax]
// 005a5a57  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 005a5a5b  895500               mov dword ptr [ebp], edx
// 005a5a5e  8b4004               mov eax, dword ptr [eax + 4]
// 005a5a61  85c0                 test eax, eax
// 005a5a63  894504               mov dword ptr [ebp + 4], eax
// 005a5a66  740c                 je 0x5a5a74
// 005a5a68  83c004               add eax, 4
// 005a5a6b  b901000000           mov ecx, 1
// 005a5a70  f00fc108             lock xadd dword ptr [eax], ecx
// 005a5a74  83cb08               or ebx, 8
// 005a5a77  f6c304               test bl, 4
// 005a5a7a  7435                 je 0x5a5ab1
// 005a5a7c  83e3fb               and ebx, 0xfffffffb
// 005a5a7f  85f6                 test esi, esi
// 005a5a81  895c240c             mov dword ptr [esp + 0xc], ebx
// 005a5a85  742a                 je 0x5a5ab1
// 005a5a87  8d5604               lea edx, [esi + 4]
// 005a5a8a  83c8ff               or eax, 0xffffffff
// 005a5a8d  f00fc102             lock xadd dword ptr [edx], eax
// 005a5a91  751e                 jne 0x5a5ab1
// 005a5a93  8b16                 mov edx, dword ptr [esi]
// 005a5a95  8b4204               mov eax, dword ptr [edx + 4]
// 005a5a98  8bce                 mov ecx, esi
// 005a5a9a  ffd0                 call eax
// 005a5a9c  8d4e08               lea ecx, [esi + 8]
// 005a5a9f  83caff               or edx, 0xffffffff
// 005a5aa2  f00fc111             lock xadd dword ptr [ecx], edx
// 005a5aa6  7509                 jne 0x5a5ab1
// 005a5aa8  8b06                 mov eax, dword ptr [esi]
// 005a5aaa  8b5008               mov edx, dword ptr [eax + 8]
// 005a5aad  8bce                 mov ecx, esi
// 005a5aaf  ffd2                 call edx
// 005a5ab1  f6c302               test bl, 2
// 005a5ab4  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 005a5abc  7439                 je 0x5a5af7
// 005a5abe  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a5ac2  83e3fd               and ebx, 0xfffffffd
// 005a5ac5  85f6                 test esi, esi
// 005a5ac7  895c240c             mov dword ptr [esp + 0xc], ebx
// 005a5acb  742a                 je 0x5a5af7
// 005a5acd  8d4604               lea eax, [esi + 4]
// 005a5ad0  83c9ff               or ecx, 0xffffffff
// 005a5ad3  f00fc108             lock xadd dword ptr [eax], ecx
// 005a5ad7  751e                 jne 0x5a5af7
// 005a5ad9  8b16                 mov edx, dword ptr [esi]
// 005a5adb  8b4204               mov eax, dword ptr [edx + 4]
// 005a5ade  8bce                 mov ecx, esi
// 005a5ae0  ffd0                 call eax
// 005a5ae2  8d4e08               lea ecx, [esi + 8]
// 005a5ae5  83caff               or edx, 0xffffffff
// 005a5ae8  f00fc111             lock xadd dword ptr [ecx], edx
// 005a5aec  7509                 jne 0x5a5af7
// 005a5aee  8b06                 mov eax, dword ptr [esi]
// 005a5af0  8b5008               mov edx, dword ptr [eax + 8]
// 005a5af3  8bce                 mov ecx, esi
// 005a5af5  ffd2                 call edx
// 005a5af7  f6c301               test bl, 1
// 005a5afa  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005a5b02  7439                 je 0x5a5b3d
// 005a5b04  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a5b08  83e3fe               and ebx, 0xfffffffe
// 005a5b0b  85f6                 test esi, esi
// 005a5b0d  895c240c             mov dword ptr [esp + 0xc], ebx
// 005a5b11  742a                 je 0x5a5b3d
// 005a5b13  8d4604               lea eax, [esi + 4]
// 005a5b16  83c9ff               or ecx, 0xffffffff
// 005a5b19  f00fc108             lock xadd dword ptr [eax], ecx
// 005a5b1d  751e                 jne 0x5a5b3d
// 005a5b1f  8b16                 mov edx, dword ptr [esi]
// 005a5b21  8b4204               mov eax, dword ptr [edx + 4]
// 005a5b24  8bce                 mov ecx, esi
// 005a5b26  ffd0                 call eax
// 005a5b28  8d4e08               lea ecx, [esi + 8]
// 005a5b2b  83caff               or edx, 0xffffffff
// 005a5b2e  f00fc111             lock xadd dword ptr [ecx], edx
// 005a5b32  7509                 jne 0x5a5b3d
// 005a5b34  8b06                 mov eax, dword ptr [esi]
// 005a5b36  8b5008               mov edx, dword ptr [eax + 8]
// 005a5b39  8bce                 mov ecx, esi
// 005a5b3b  ffd2                 call edx
// 005a5b3d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a5b41  5e                   pop esi
// 005a5b42  8bc5                 mov eax, ebp
// 005a5b44  5d                   pop ebp
// 005a5b45  5b                   pop ebx
// 005a5b46  64890d00000000       mov dword ptr fs:[0], ecx
// 005a5b4d  83c424               add esp, 0x24
// 005a5b50  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$shared_from_dynamic_cast@VPartInstance@RBX@@VInstance@2@@RBX@@YA?AV?$shared_ptr@VPartInstance@RBX@@@boost@@PAV?$enable_shared_from_this@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
