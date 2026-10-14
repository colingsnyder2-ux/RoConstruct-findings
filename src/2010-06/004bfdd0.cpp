// roc 2010-06 004bfdd0  unit: RBX::Network::VPlayer::?$EventDesc  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004bfdd0
//
// 004bfdd0  6aff                 push -1
// 004bfdd2  68e22f9a00           push 0x9a2fe2
// 004bfdd7  64a100000000         mov eax, dword ptr fs:[0]
// 004bfddd  50                   push eax
// 004bfdde  64892500000000       mov dword ptr fs:[0], esp
// 004bfde5  83ec44               sub esp, 0x44
// 004bfde8  68b431a000           push 0xa031b4
// 004bfded  8d4c2404             lea ecx, [esp + 4]
// 004bfdf1  ff1510a49e00         call dword ptr [0x9ea410]
// 004bfdf7  8d4c241c             lea ecx, [esp + 0x1c]
// 004bfdfb  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004bfe03  ff1518a99e00         call dword ptr [0x9ea918]
// 004bfe09  8d0424               lea eax, [esp]
// 004bfe0c  50                   push eax
// 004bfe0d  8d4c242c             lea ecx, [esp + 0x2c]
// 004bfe11  c644245001           mov byte ptr [esp + 0x50], 1
// 004bfe16  c74424202c00a000     mov dword ptr [esp + 0x20], 0xa0002c
// 004bfe1e  ff150ca49e00         call dword ptr [0x9ea40c]
// 004bfe24  68601bb000           push 0xb01b60
// 004bfe29  8d4c2420             lea ecx, [esp + 0x20]
// 004bfe2d  51                   push ecx
// 004bfe2e  c644245400           mov byte ptr [esp + 0x54], 0
// 004bfe33  c74424243800a000     mov dword ptr [esp + 0x24], 0xa00038
// 004bfe3b  e8728b2e00           call 0x7a89b2
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?_Xlen@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
