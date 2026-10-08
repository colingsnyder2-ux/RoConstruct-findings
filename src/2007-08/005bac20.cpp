// roc 2007-08 005bac20  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bac20
//
// 005bac20  64a100000000         mov eax, dword ptr fs:[0]
// 005bac26  6aff                 push -1
// 005bac28  6868937500           push 0x759368
// 005bac2d  50                   push eax
// 005bac2e  64892500000000       mov dword ptr fs:[0], esp
// 005bac35  83ec68               sub esp, 0x68
// 005bac38  53                   push ebx
// 005bac39  57                   push edi
// 005bac3a  8bbc2480000000       mov edi, dword ptr [esp + 0x80]
// 005bac41  8bcf                 mov ecx, edi
// 005bac43  33db                 xor ebx, ebx
// 005bac45  e87620e5ff           call 0x40ccc0
// 005bac4a  85c0                 test eax, eax
// 005bac4c  0f86cb000000         jbe 0x5bad1d
// 005bac52  56                   push esi
// 005bac53  8b4f04               mov ecx, dword ptr [edi + 4]
// 005bac56  85c9                 test ecx, ecx
// 005bac58  740c                 je 0x5bac66
// 005bac5a  8b4708               mov eax, dword ptr [edi + 8]
// 005bac5d  2bc1                 sub eax, ecx
// 005bac5f  c1f803               sar eax, 3
// 005bac62  3bd8                 cmp ebx, eax
// 005bac64  7206                 jb 0x5bac6c
// 005bac66  ff15d8e67700         call dword ptr [0x77e6d8]
// 005bac6c  8b4704               mov eax, dword ptr [edi + 4]
// 005bac6f  8d54240c             lea edx, [esp + 0xc]
// 005bac73  8d0cd8               lea ecx, [eax + ebx*8]
// 005bac76  52                   push edx
// 005bac77  e8741b0400           call 0x5fc7f0
// 005bac7c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bac80  85f6                 test esi, esi
// 005bac82  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 005bac8a  7444                 je 0x5bacd0
// 005bac8c  8bce                 mov ecx, esi
// 005bac8e  e8ed92fbff           call 0x573f80
// 005bac93  50                   push eax
// 005bac94  8d442418             lea eax, [esp + 0x18]
// 005bac98  50                   push eax
// 005bac99  8d8c2490000000       lea ecx, [esp + 0x90]
// 005baca0  e81bf6ffff           call 0x5ba2c0
// 005baca5  8d4c2414             lea ecx, [esp + 0x14]
// 005baca9  51                   push ecx
// 005bacaa  e84115ffff           call 0x5ac1f0
// 005bacaf  83c404               add esp, 4
// 005bacb2  8d542414             lea edx, [esp + 0x14]
// 005bacb6  52                   push edx
// 005bacb7  8d442448             lea eax, [esp + 0x48]
// 005bacbb  50                   push eax
// 005bacbc  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 005bacc3  e83885ebff           call 0x473200
// 005bacc8  50                   push eax
// 005bacc9  8bce                 mov ecx, esi
// 005baccb  e810d1fbff           call 0x577de0
// 005bacd0  8b742410             mov esi, dword ptr [esp + 0x10]
// 005bacd4  85f6                 test esi, esi
// 005bacd6  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 005bacde  742a                 je 0x5bad0a
// 005bace0  8d4e04               lea ecx, [esi + 4]
// 005bace3  83caff               or edx, 0xffffffff
// 005bace6  f00fc111             lock xadd dword ptr [ecx], edx
// 005bacea  751e                 jne 0x5bad0a
// 005bacec  8b06                 mov eax, dword ptr [esi]
// 005bacee  8b5004               mov edx, dword ptr [eax + 4]
// 005bacf1  8bce                 mov ecx, esi
// 005bacf3  ffd2                 call edx
// 005bacf5  8d4608               lea eax, [esi + 8]
// 005bacf8  83c9ff               or ecx, 0xffffffff
// 005bacfb  f00fc108             lock xadd dword ptr [eax], ecx
// 005bacff  7509                 jne 0x5bad0a
// 005bad01  8b16                 mov edx, dword ptr [esi]
// 005bad03  8b4208               mov eax, dword ptr [edx + 8]
// 005bad06  8bce                 mov ecx, esi
// 005bad08  ffd0                 call eax
// 005bad0a  8bcf                 mov ecx, edi
// 005bad0c  83c301               add ebx, 1
// 005bad0f  e8ac1fe5ff           call 0x40ccc0
// 005bad14  3bd8                 cmp ebx, eax
// 005bad16  0f8237ffffff         jb 0x5bac53
// 005bad1c  5e                   pop esi
// 005bad1d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005bad21  5f                   pop edi
// 005bad22  5b                   pop ebx
// 005bad23  64890d00000000       mov dword ptr fs:[0], ecx
// 005bad2a  83c474               add esp, 0x74
// 005bad2d  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?move@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@VCoordinateFrame@G3D@@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
