// roc 2012-06 004ddc80  unit: Ogre::VertexStreamer  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004ddc80
//
// 004ddc80  6aff                 push -1
// 004ddc82  684269aa00           push 0xaa6942
// 004ddc87  64a100000000         mov eax, dword ptr fs:[0]
// 004ddc8d  50                   push eax
// 004ddc8e  64892500000000       mov dword ptr fs:[0], esp
// 004ddc95  83ec44               sub esp, 0x44
// 004ddc98  6848c3b400           push 0xb4c348
// 004ddc9d  8d4c2404             lea ecx, [esp + 4]
// 004ddca1  ff154826b200         call dword ptr [0xb22648]
// 004ddca7  8d4c241c             lea ecx, [esp + 0x1c]
// 004ddcab  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004ddcb3  ff15dc29b200         call dword ptr [0xb229dc]
// 004ddcb9  8d0424               lea eax, [esp]
// 004ddcbc  50                   push eax
// 004ddcbd  8d4c242c             lea ecx, [esp + 0x2c]
// 004ddcc1  c644245001           mov byte ptr [esp + 0x50], 1
// 004ddcc6  c7442420a02eb400     mov dword ptr [esp + 0x20], 0xb42ea0
// 004ddcce  ff154426b200         call dword ptr [0xb22644]
// 004ddcd4  680462cd00           push 0xcd6204
// 004ddcd9  8d4c2420             lea ecx, [esp + 0x20]
// 004ddcdd  51                   push ecx
// 004ddcde  c644245400           mov byte ptr [esp + 0x54], 0
// 004ddce3  c7442424ac2eb400     mov dword ptr [esp + 0x24], 0xb42eac
// 004ddceb  e854544a00           call 0x983144
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?_Xlen@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
