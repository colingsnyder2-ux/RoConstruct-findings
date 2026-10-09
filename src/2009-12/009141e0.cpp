// roc 2009-12 009141e0  unit: Ogre::RbxMeshLoader  size: 680 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009141e0
//
// 009141e0  6aff                 push -1
// 009141e2  6859729600           push 0x967259
// 009141e7  64a100000000         mov eax, dword ptr fs:[0]
// 009141ed  50                   push eax
// 009141ee  64892500000000       mov dword ptr fs:[0], esp
// 009141f5  83ec7c               sub esp, 0x7c
// 009141f8  53                   push ebx
// 009141f9  55                   push ebp
// 009141fa  33ed                 xor ebp, ebp
// 009141fc  56                   push esi
// 009141fd  8bf1                 mov esi, ecx
// 009141ff  896c2410             mov dword ptr [esp + 0x10], ebp
// 00914203  89742414             mov dword ptr [esp + 0x14], esi
// 00914207  892e                 mov dword ptr [esi], ebp
// 00914209  6820cc5c00           push 0x5ccc20
// 0091420e  6800bf4c00           push 0x4cbf00
// 00914213  6a02                 push 2
// 00914215  6a04                 push 4
// 00914217  8d4608               lea eax, [esi + 8]
// 0091421a  50                   push eax
// 0091421b  89ac24a4000000       mov dword ptr [esp + 0xa4], ebp
// 00914222  e88908eeff           call 0x7f4ab0
// 00914227  896e10               mov dword ptr [esi + 0x10], ebp
// 0091422a  bb01000000           mov ebx, 1
// 0091422f  c6461401             mov byte ptr [esi + 0x14], 1
// 00914233  c684249000000002     mov byte ptr [esp + 0x90], 2
// 0091423b  391d9091b700         cmp dword ptr [0xb79190], ebx
// 00914241  0f85ff010000         jne 0x914446
// 00914247  803db8d0b70000       cmp byte ptr [0xb7d0b8], 0
// 0091424e  892d9091b700         mov dword ptr [0xb79190], ebp
// 00914254  0f8414020000         je 0x91446e
// 0091425a  e8017cbcff           call 0x4dbe60
// 0091425f  84c0                 test al, al
// 00914261  740f                 je 0x914272
// 00914263  c7059091b70004000000 mov dword ptr [0xb79190], 4
// 0091426d  e9dc010000           jmp 0x91444e
// 00914272  688048a200           push 0xa24880
// 00914277  8d4c2470             lea ecx, [esp + 0x70]
// 0091427b  ff15f4b69800         call dword ptr [0x98b6f4]
// 00914281  8d4c246c             lea ecx, [esp + 0x6c]
// 00914285  51                   push ecx
// 00914286  c684249400000003     mov byte ptr [esp + 0x94], 3
// 0091428e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00914292  e889fcbbff           call 0x4d3f20
// 00914297  83c404               add esp, 4
// 0091429a  84c0                 test al, al
// 0091429c  0f84aa000000         je 0x91434c
// 009142a2  6854589b00           push 0x9b5854
// 009142a7  8d4c2454             lea ecx, [esp + 0x54]
// 009142ab  ff15f4b69800         call dword ptr [0x98b6f4]
// 009142b1  8d542450             lea edx, [esp + 0x50]
// 009142b5  bb03000000           mov ebx, 3
// 009142ba  52                   push edx
// 009142bb  c784249400000004000000 mov dword ptr [esp + 0x94], 4
// 009142c6  895c2414             mov dword ptr [esp + 0x14], ebx
// 009142ca  e851fcbbff           call 0x4d3f20
// 009142cf  83c404               add esp, 4
// 009142d2  84c0                 test al, al
// 009142d4  7476                 je 0x91434c
// 009142d6  6870589b00           push 0x9b5870
// 009142db  8d4c2438             lea ecx, [esp + 0x38]
// 009142df  ff15f4b69800         call dword ptr [0x98b6f4]
// 009142e5  8d442434             lea eax, [esp + 0x34]
// 009142e9  bb07000000           mov ebx, 7
// 009142ee  50                   push eax
// 009142ef  c784249400000005000000 mov dword ptr [esp + 0x94], 5
// 009142fa  895c2414             mov dword ptr [esp + 0x14], ebx
// 009142fe  e81dfcbbff           call 0x4d3f20
// 00914303  83c404               add esp, 4
// 00914306  84c0                 test al, al
// 00914308  7442                 je 0x91434c
// 0091430a  686848a200           push 0xa24868
// 0091430f  8d4c241c             lea ecx, [esp + 0x1c]
// 00914313  ff15f4b69800         call dword ptr [0x98b6f4]
// 00914319  8d4c2418             lea ecx, [esp + 0x18]
// 0091431d  bb0f000000           mov ebx, 0xf
// 00914322  51                   push ecx
// 00914323  c784249400000006000000 mov dword ptr [esp + 0x94], 6
// 0091432e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00914332  e8e9fbbbff           call 0x4d3f20
// 00914337  83c404               add esp, 4
// 0091433a  84c0                 test al, al
// 0091433c  740e                 je 0x91434c
// 0091433e  833db0d0b70004       cmp dword ptr [0xb7d0b0], 4
// 00914345  c644240f01           mov byte ptr [esp + 0xf], 1
// 0091434a  7d05                 jge 0x914351
// 0091434c  c644240f00           mov byte ptr [esp + 0xf], 0
// 00914351  c784249000000005000000 mov dword ptr [esp + 0x90], 5
// 0091435c  f6c308               test bl, 8
// 0091435f  7411                 je 0x914372
// 00914361  83e3f7               and ebx, 0xfffffff7
// 00914364  8d4c2418             lea ecx, [esp + 0x18]
// 00914368  895c2410             mov dword ptr [esp + 0x10], ebx
// 0091436c  ff15e4b69800         call dword ptr [0x98b6e4]
// 00914372  c784249000000004000000 mov dword ptr [esp + 0x90], 4
// 0091437d  f6c304               test bl, 4
// 00914380  7411                 je 0x914393
// 00914382  83e3fb               and ebx, 0xfffffffb
// 00914385  8d4c2434             lea ecx, [esp + 0x34]
// 00914389  895c2410             mov dword ptr [esp + 0x10], ebx
// 0091438d  ff15e4b69800         call dword ptr [0x98b6e4]
// 00914393  c784249000000003000000 mov dword ptr [esp + 0x90], 3
// 0091439e  f6c302               test bl, 2
// 009143a1  7411                 je 0x9143b4
// 009143a3  83e3fd               and ebx, 0xfffffffd
// 009143a6  8d4c2450             lea ecx, [esp + 0x50]
// 009143aa  895c2410             mov dword ptr [esp + 0x10], ebx
// 009143ae  ff15e4b69800         call dword ptr [0x98b6e4]
// 009143b4  c784249000000002000000 mov dword ptr [esp + 0x90], 2
// 009143bf  f6c301               test bl, 1
// 009143c2  740d                 je 0x9143d1
// 009143c4  8d4c246c             lea ecx, [esp + 0x6c]
// 009143c8  83e3fe               and ebx, 0xfffffffe
// 009143cb  ff15e4b69800         call dword ptr [0x98b6e4]
// 009143d1  807c240f00           cmp byte ptr [esp + 0xf], 0
// 009143d6  740b                 je 0x9143e3
// 009143d8  892d9091b700         mov dword ptr [0xb79190], ebp
// 009143de  e98b000000           jmp 0x91446e
// 009143e3  6824149c00           push 0x9c1424
// 009143e8  8d4c2470             lea ecx, [esp + 0x70]
// 009143ec  ff15f4b69800         call dword ptr [0x98b6f4]
// 009143f2  8d54246c             lea edx, [esp + 0x6c]
// 009143f6  83cb10               or ebx, 0x10
// 009143f9  52                   push edx
// 009143fa  c684249400000007     mov byte ptr [esp + 0x94], 7
// 00914402  895c2414             mov dword ptr [esp + 0x14], ebx
// 00914406  e815fbbbff           call 0x4d3f20
// 0091440b  83c404               add esp, 4
// 0091440e  84c0                 test al, al
// 00914410  740e                 je 0x914420
// 00914412  833db0d0b70004       cmp dword ptr [0xb7d0b0], 4
// 00914419  c644240f01           mov byte ptr [esp + 0xf], 1
// 0091441e  7d05                 jge 0x914425
// 00914420  c644240f00           mov byte ptr [esp + 0xf], 0
// 00914425  c784249000000002000000 mov dword ptr [esp + 0x90], 2
// 00914430  f6c310               test bl, 0x10
// 00914433  740a                 je 0x91443f
// 00914435  8d4c246c             lea ecx, [esp + 0x6c]
// 00914439  ff15e4b69800         call dword ptr [0x98b6e4]
// 0091443f  807c240f00           cmp byte ptr [esp + 0xf], 0
// 00914444  7592                 jne 0x9143d8
// 00914446  392d9091b700         cmp dword ptr [0xb79190], ebp
// 0091444c  7420                 je 0x91446e
// 0091444e  e80de8ffff           call 0x912c60
// 00914453  a19091b700           mov eax, dword ptr [0xb79190]
// 00914458  83f804               cmp eax, 4
// 0091445b  7507                 jne 0x914464
// 0091445d  e84efaffff           call 0x913eb0
// 00914462  eb0a                 jmp 0x91446e
// 00914464  83f802               cmp eax, 2
// 00914467  7505                 jne 0x91446e
// 00914469  e8b2e5ffff           call 0x912a20
// 0091446e  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00914475  8bc6                 mov eax, esi
// 00914477  5e                   pop esi
// 00914478  5d                   pop ebp
// 00914479  5b                   pop ebx
// 0091447a  64890d00000000       mov dword ptr fs:[0], ecx
// 00914481  81c488000000         add esp, 0x88
// 00914487  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??0ToneMap@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
