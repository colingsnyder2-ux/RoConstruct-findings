// roc 2007-03 005d6e10  unit: seg_005d0000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d6e10
//
// 005d6e10  6aff                 push -1
// 005d6e12  68fbb57500           push 0x75b5fb
// 005d6e17  64a100000000         mov eax, dword ptr fs:[0]
// 005d6e1d  50                   push eax
// 005d6e1e  64892500000000       mov dword ptr fs:[0], esp
// 005d6e25  83ec18               sub esp, 0x18
// 005d6e28  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d6e2c  53                   push ebx
// 005d6e2d  55                   push ebp
// 005d6e2e  56                   push esi
// 005d6e2f  33f6                 xor esi, esi
// 005d6e31  3bce                 cmp ecx, esi
// 005d6e33  8974240c             mov dword ptr [esp + 0xc], esi
// 005d6e37  743b                 je 0x5d6e74
// 005d6e39  8d44241c             lea eax, [esp + 0x1c]
// 005d6e3d  50                   push eax
// 005d6e3e  e84d08e6ff           call 0x437690
// 005d6e43  50                   push eax
// 005d6e44  8d4c2418             lea ecx, [esp + 0x18]
// 005d6e48  51                   push ecx
// 005d6e49  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005d6e51  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005d6e59  e8c2dbffff           call 0x5d4a20
// 005d6e5e  83c408               add esp, 8
// 005d6e61  8b742410             mov esi, dword ptr [esp + 0x10]
// 005d6e65  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 005d6e6d  bb03000000           mov ebx, 3
// 005d6e72  eb11                 jmp 0x5d6e85
// 005d6e74  8974240c             mov dword ptr [esp + 0xc], esi
// 005d6e78  89742410             mov dword ptr [esp + 0x10], esi
// 005d6e7c  8d44240c             lea eax, [esp + 0xc]
// 005d6e80  bb04000000           mov ebx, 4
// 005d6e85  8b10                 mov edx, dword ptr [eax]
// 005d6e87  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 005d6e8b  895500               mov dword ptr [ebp], edx
// 005d6e8e  8b4004               mov eax, dword ptr [eax + 4]
// 005d6e91  85c0                 test eax, eax
// 005d6e93  894504               mov dword ptr [ebp + 4], eax
// 005d6e96  740c                 je 0x5d6ea4
// 005d6e98  83c004               add eax, 4
// 005d6e9b  b901000000           mov ecx, 1
// 005d6ea0  f00fc108             lock xadd dword ptr [eax], ecx
// 005d6ea4  83cb08               or ebx, 8
// 005d6ea7  f6c304               test bl, 4
// 005d6eaa  7435                 je 0x5d6ee1
// 005d6eac  83e3fb               and ebx, 0xfffffffb
// 005d6eaf  85f6                 test esi, esi
// 005d6eb1  895c240c             mov dword ptr [esp + 0xc], ebx
// 005d6eb5  742a                 je 0x5d6ee1
// 005d6eb7  8d5604               lea edx, [esi + 4]
// 005d6eba  83c8ff               or eax, 0xffffffff
// 005d6ebd  f00fc102             lock xadd dword ptr [edx], eax
// 005d6ec1  751e                 jne 0x5d6ee1
// 005d6ec3  8b16                 mov edx, dword ptr [esi]
// 005d6ec5  8b4204               mov eax, dword ptr [edx + 4]
// 005d6ec8  8bce                 mov ecx, esi
// 005d6eca  ffd0                 call eax
// 005d6ecc  8d4e08               lea ecx, [esi + 8]
// 005d6ecf  83caff               or edx, 0xffffffff
// 005d6ed2  f00fc111             lock xadd dword ptr [ecx], edx
// 005d6ed6  7509                 jne 0x5d6ee1
// 005d6ed8  8b06                 mov eax, dword ptr [esi]
// 005d6eda  8b5008               mov edx, dword ptr [eax + 8]
// 005d6edd  8bce                 mov ecx, esi
// 005d6edf  ffd2                 call edx
// 005d6ee1  f6c302               test bl, 2
// 005d6ee4  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 005d6eec  7439                 je 0x5d6f27
// 005d6eee  8b742418             mov esi, dword ptr [esp + 0x18]
// 005d6ef2  83e3fd               and ebx, 0xfffffffd
// 005d6ef5  85f6                 test esi, esi
// 005d6ef7  895c240c             mov dword ptr [esp + 0xc], ebx
// 005d6efb  742a                 je 0x5d6f27
// 005d6efd  8d4604               lea eax, [esi + 4]
// 005d6f00  83c9ff               or ecx, 0xffffffff
// 005d6f03  f00fc108             lock xadd dword ptr [eax], ecx
// 005d6f07  751e                 jne 0x5d6f27
// 005d6f09  8b16                 mov edx, dword ptr [esi]
// 005d6f0b  8b4204               mov eax, dword ptr [edx + 4]
// 005d6f0e  8bce                 mov ecx, esi
// 005d6f10  ffd0                 call eax
// 005d6f12  8d4e08               lea ecx, [esi + 8]
// 005d6f15  83caff               or edx, 0xffffffff
// 005d6f18  f00fc111             lock xadd dword ptr [ecx], edx
// 005d6f1c  7509                 jne 0x5d6f27
// 005d6f1e  8b06                 mov eax, dword ptr [esi]
// 005d6f20  8b5008               mov edx, dword ptr [eax + 8]
// 005d6f23  8bce                 mov ecx, esi
// 005d6f25  ffd2                 call edx
// 005d6f27  f6c301               test bl, 1
// 005d6f2a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005d6f32  7439                 je 0x5d6f6d
// 005d6f34  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d6f38  83e3fe               and ebx, 0xfffffffe
// 005d6f3b  85f6                 test esi, esi
// 005d6f3d  895c240c             mov dword ptr [esp + 0xc], ebx
// 005d6f41  742a                 je 0x5d6f6d
// 005d6f43  8d4604               lea eax, [esi + 4]
// 005d6f46  83c9ff               or ecx, 0xffffffff
// 005d6f49  f00fc108             lock xadd dword ptr [eax], ecx
// 005d6f4d  751e                 jne 0x5d6f6d
// 005d6f4f  8b16                 mov edx, dword ptr [esi]
// 005d6f51  8b4204               mov eax, dword ptr [edx + 4]
// 005d6f54  8bce                 mov ecx, esi
// 005d6f56  ffd0                 call eax
// 005d6f58  8d4e08               lea ecx, [esi + 8]
// 005d6f5b  83caff               or edx, 0xffffffff
// 005d6f5e  f00fc111             lock xadd dword ptr [ecx], edx
// 005d6f62  7509                 jne 0x5d6f6d
// 005d6f64  8b06                 mov eax, dword ptr [esi]
// 005d6f66  8b5008               mov edx, dword ptr [eax + 8]
// 005d6f69  8bce                 mov ecx, esi
// 005d6f6b  ffd2                 call edx
// 005d6f6d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d6f71  5e                   pop esi
// 005d6f72  8bc5                 mov eax, ebp
// 005d6f74  5d                   pop ebp
// 005d6f75  5b                   pop ebx
// 005d6f76  64890d00000000       mov dword ptr fs:[0], ecx
// 005d6f7d  83c424               add esp, 0x24
// 005d6f80  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??$shared_from_dynamic_cast@VPartInstance@RBX@@VInstance@2@@RBX@@YA?AV?$shared_ptr@VPartInstance@RBX@@@boost@@PAV?$enable_shared_from_this@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
