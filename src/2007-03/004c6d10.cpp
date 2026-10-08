// roc 2007-03 004c6d10  unit: seg_004c0000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c6d10
//
// 004c6d10  6aff                 push -1
// 004c6d12  68fbb57500           push 0x75b5fb
// 004c6d17  64a100000000         mov eax, dword ptr fs:[0]
// 004c6d1d  50                   push eax
// 004c6d1e  64892500000000       mov dword ptr fs:[0], esp
// 004c6d25  83ec18               sub esp, 0x18
// 004c6d28  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004c6d2c  53                   push ebx
// 004c6d2d  55                   push ebp
// 004c6d2e  56                   push esi
// 004c6d2f  33f6                 xor esi, esi
// 004c6d31  3bce                 cmp ecx, esi
// 004c6d33  8974240c             mov dword ptr [esp + 0xc], esi
// 004c6d37  743b                 je 0x4c6d74
// 004c6d39  8d44241c             lea eax, [esp + 0x1c]
// 004c6d3d  50                   push eax
// 004c6d3e  e84d09f7ff           call 0x437690
// 004c6d43  50                   push eax
// 004c6d44  8d4c2418             lea ecx, [esp + 0x18]
// 004c6d48  51                   push ecx
// 004c6d49  c744243401000000     mov dword ptr [esp + 0x34], 1
// 004c6d51  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004c6d59  e8f2f2ffff           call 0x4c6050
// 004c6d5e  83c408               add esp, 8
// 004c6d61  8b742410             mov esi, dword ptr [esp + 0x10]
// 004c6d65  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 004c6d6d  bb03000000           mov ebx, 3
// 004c6d72  eb11                 jmp 0x4c6d85
// 004c6d74  8974240c             mov dword ptr [esp + 0xc], esi
// 004c6d78  89742410             mov dword ptr [esp + 0x10], esi
// 004c6d7c  8d44240c             lea eax, [esp + 0xc]
// 004c6d80  bb04000000           mov ebx, 4
// 004c6d85  8b10                 mov edx, dword ptr [eax]
// 004c6d87  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 004c6d8b  895500               mov dword ptr [ebp], edx
// 004c6d8e  8b4004               mov eax, dword ptr [eax + 4]
// 004c6d91  85c0                 test eax, eax
// 004c6d93  894504               mov dword ptr [ebp + 4], eax
// 004c6d96  740c                 je 0x4c6da4
// 004c6d98  83c004               add eax, 4
// 004c6d9b  b901000000           mov ecx, 1
// 004c6da0  f00fc108             lock xadd dword ptr [eax], ecx
// 004c6da4  83cb08               or ebx, 8
// 004c6da7  f6c304               test bl, 4
// 004c6daa  7435                 je 0x4c6de1
// 004c6dac  83e3fb               and ebx, 0xfffffffb
// 004c6daf  85f6                 test esi, esi
// 004c6db1  895c240c             mov dword ptr [esp + 0xc], ebx
// 004c6db5  742a                 je 0x4c6de1
// 004c6db7  8d5604               lea edx, [esi + 4]
// 004c6dba  83c8ff               or eax, 0xffffffff
// 004c6dbd  f00fc102             lock xadd dword ptr [edx], eax
// 004c6dc1  751e                 jne 0x4c6de1
// 004c6dc3  8b16                 mov edx, dword ptr [esi]
// 004c6dc5  8b4204               mov eax, dword ptr [edx + 4]
// 004c6dc8  8bce                 mov ecx, esi
// 004c6dca  ffd0                 call eax
// 004c6dcc  8d4e08               lea ecx, [esi + 8]
// 004c6dcf  83caff               or edx, 0xffffffff
// 004c6dd2  f00fc111             lock xadd dword ptr [ecx], edx
// 004c6dd6  7509                 jne 0x4c6de1
// 004c6dd8  8b06                 mov eax, dword ptr [esi]
// 004c6dda  8b5008               mov edx, dword ptr [eax + 8]
// 004c6ddd  8bce                 mov ecx, esi
// 004c6ddf  ffd2                 call edx
// 004c6de1  f6c302               test bl, 2
// 004c6de4  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 004c6dec  7439                 je 0x4c6e27
// 004c6dee  8b742418             mov esi, dword ptr [esp + 0x18]
// 004c6df2  83e3fd               and ebx, 0xfffffffd
// 004c6df5  85f6                 test esi, esi
// 004c6df7  895c240c             mov dword ptr [esp + 0xc], ebx
// 004c6dfb  742a                 je 0x4c6e27
// 004c6dfd  8d4604               lea eax, [esi + 4]
// 004c6e00  83c9ff               or ecx, 0xffffffff
// 004c6e03  f00fc108             lock xadd dword ptr [eax], ecx
// 004c6e07  751e                 jne 0x4c6e27
// 004c6e09  8b16                 mov edx, dword ptr [esi]
// 004c6e0b  8b4204               mov eax, dword ptr [edx + 4]
// 004c6e0e  8bce                 mov ecx, esi
// 004c6e10  ffd0                 call eax
// 004c6e12  8d4e08               lea ecx, [esi + 8]
// 004c6e15  83caff               or edx, 0xffffffff
// 004c6e18  f00fc111             lock xadd dword ptr [ecx], edx
// 004c6e1c  7509                 jne 0x4c6e27
// 004c6e1e  8b06                 mov eax, dword ptr [esi]
// 004c6e20  8b5008               mov edx, dword ptr [eax + 8]
// 004c6e23  8bce                 mov ecx, esi
// 004c6e25  ffd2                 call edx
// 004c6e27  f6c301               test bl, 1
// 004c6e2a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004c6e32  7439                 je 0x4c6e6d
// 004c6e34  8b742420             mov esi, dword ptr [esp + 0x20]
// 004c6e38  83e3fe               and ebx, 0xfffffffe
// 004c6e3b  85f6                 test esi, esi
// 004c6e3d  895c240c             mov dword ptr [esp + 0xc], ebx
// 004c6e41  742a                 je 0x4c6e6d
// 004c6e43  8d4604               lea eax, [esi + 4]
// 004c6e46  83c9ff               or ecx, 0xffffffff
// 004c6e49  f00fc108             lock xadd dword ptr [eax], ecx
// 004c6e4d  751e                 jne 0x4c6e6d
// 004c6e4f  8b16                 mov edx, dword ptr [esi]
// 004c6e51  8b4204               mov eax, dword ptr [edx + 4]
// 004c6e54  8bce                 mov ecx, esi
// 004c6e56  ffd0                 call eax
// 004c6e58  8d4e08               lea ecx, [esi + 8]
// 004c6e5b  83caff               or edx, 0xffffffff
// 004c6e5e  f00fc111             lock xadd dword ptr [ecx], edx
// 004c6e62  7509                 jne 0x4c6e6d
// 004c6e64  8b06                 mov eax, dword ptr [esi]
// 004c6e66  8b5008               mov edx, dword ptr [eax + 8]
// 004c6e69  8bce                 mov ecx, esi
// 004c6e6b  ffd2                 call edx
// 004c6e6d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004c6e71  5e                   pop esi
// 004c6e72  8bc5                 mov eax, ebp
// 004c6e74  5d                   pop ebp
// 004c6e75  5b                   pop ebx
// 004c6e76  64890d00000000       mov dword ptr fs:[0], ecx
// 004c6e7d  83c424               add esp, 0x24
// 004c6e80  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$shared_from_dynamic_cast@VPartInstance@RBX@@VInstance@2@@RBX@@YA?AV?$shared_ptr@VPartInstance@RBX@@@boost@@PAV?$enable_shared_from_this@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
