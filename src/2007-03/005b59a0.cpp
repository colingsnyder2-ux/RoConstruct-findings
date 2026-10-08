// roc 2007-03 005b59a0  unit: seg_005b0000  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b59a0
//
// 005b59a0  64a100000000         mov eax, dword ptr fs:[0]
// 005b59a6  6aff                 push -1
// 005b59a8  6838a07500           push 0x75a038
// 005b59ad  50                   push eax
// 005b59ae  64892500000000       mov dword ptr fs:[0], esp
// 005b59b5  83ec68               sub esp, 0x68
// 005b59b8  53                   push ebx
// 005b59b9  57                   push edi
// 005b59ba  8bbc2480000000       mov edi, dword ptr [esp + 0x80]
// 005b59c1  8bcf                 mov ecx, edi
// 005b59c3  33db                 xor ebx, ebx
// 005b59c5  e856c8fbff           call 0x572220
// 005b59ca  85c0                 test eax, eax
// 005b59cc  0f86cb000000         jbe 0x5b5a9d
// 005b59d2  56                   push esi
// 005b59d3  8b4f04               mov ecx, dword ptr [edi + 4]
// 005b59d6  85c9                 test ecx, ecx
// 005b59d8  740c                 je 0x5b59e6
// 005b59da  8b4708               mov eax, dword ptr [edi + 8]
// 005b59dd  2bc1                 sub eax, ecx
// 005b59df  c1f803               sar eax, 3
// 005b59e2  3bd8                 cmp ebx, eax
// 005b59e4  7206                 jb 0x5b59ec
// 005b59e6  ff1544e97700         call dword ptr [0x77e944]
// 005b59ec  8b4704               mov eax, dword ptr [edi + 4]
// 005b59ef  8d54240c             lea edx, [esp + 0xc]
// 005b59f3  8d0cd8               lea ecx, [eax + ebx*8]
// 005b59f6  52                   push edx
// 005b59f7  e8b4590100           call 0x5cb3b0
// 005b59fc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b5a00  85f6                 test esi, esi
// 005b5a02  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 005b5a0a  7444                 je 0x5b5a50
// 005b5a0c  8bce                 mov ecx, esi
// 005b5a0e  e87dcffbff           call 0x572990
// 005b5a13  50                   push eax
// 005b5a14  8d442418             lea eax, [esp + 0x18]
// 005b5a18  50                   push eax
// 005b5a19  8d8c2490000000       lea ecx, [esp + 0x90]
// 005b5a20  e89ba2ffff           call 0x5afcc0
// 005b5a25  8d4c2414             lea ecx, [esp + 0x14]
// 005b5a29  51                   push ecx
// 005b5a2a  e8f122ffff           call 0x5a7d20
// 005b5a2f  83c404               add esp, 4
// 005b5a32  8d542414             lea edx, [esp + 0x14]
// 005b5a36  52                   push edx
// 005b5a37  8d442448             lea eax, [esp + 0x48]
// 005b5a3b  50                   push eax
// 005b5a3c  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 005b5a43  e8a8d8ebff           call 0x4732f0
// 005b5a48  50                   push eax
// 005b5a49  8bce                 mov ecx, esi
// 005b5a4b  e8800bfcff           call 0x5765d0
// 005b5a50  8b742410             mov esi, dword ptr [esp + 0x10]
// 005b5a54  85f6                 test esi, esi
// 005b5a56  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 005b5a5e  742a                 je 0x5b5a8a
// 005b5a60  8d4e04               lea ecx, [esi + 4]
// 005b5a63  83caff               or edx, 0xffffffff
// 005b5a66  f00fc111             lock xadd dword ptr [ecx], edx
// 005b5a6a  751e                 jne 0x5b5a8a
// 005b5a6c  8b06                 mov eax, dword ptr [esi]
// 005b5a6e  8b5004               mov edx, dword ptr [eax + 4]
// 005b5a71  8bce                 mov ecx, esi
// 005b5a73  ffd2                 call edx
// 005b5a75  8d4608               lea eax, [esi + 8]
// 005b5a78  83c9ff               or ecx, 0xffffffff
// 005b5a7b  f00fc108             lock xadd dword ptr [eax], ecx
// 005b5a7f  7509                 jne 0x5b5a8a
// 005b5a81  8b16                 mov edx, dword ptr [esi]
// 005b5a83  8b4208               mov eax, dword ptr [edx + 8]
// 005b5a86  8bce                 mov ecx, esi
// 005b5a88  ffd0                 call eax
// 005b5a8a  8bcf                 mov ecx, edi
// 005b5a8c  83c301               add ebx, 1
// 005b5a8f  e88cc7fbff           call 0x572220
// 005b5a94  3bd8                 cmp ebx, eax
// 005b5a96  0f8237ffffff         jb 0x5b59d3
// 005b5a9c  5e                   pop esi
// 005b5a9d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005b5aa1  5f                   pop edi
// 005b5aa2  5b                   pop ebx
// 005b5aa3  64890d00000000       mov dword ptr fs:[0], ecx
// 005b5aaa  83c474               add esp, 0x74
// 005b5aad  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?move@DragUtilities@RBX@@SAXABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@VCoordinateFrame@G3D@@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
