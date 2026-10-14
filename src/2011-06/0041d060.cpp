// roc 2011-06 0041d060  unit: RBX::DSVideoCaptureEngine  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0041d060
//
// 0041d060  6aff                 push -1
// 0041d062  68221b9d00           push 0x9d1b22
// 0041d067  64a100000000         mov eax, dword ptr fs:[0]
// 0041d06d  50                   push eax
// 0041d06e  64892500000000       mov dword ptr fs:[0], esp
// 0041d075  83ec44               sub esp, 0x44
// 0041d078  68003ba600           push 0xa63b00
// 0041d07d  8d4c2404             lea ecx, [esp + 4]
// 0041d081  ff15c404a400         call dword ptr [0xa404c4]
// 0041d087  8d4c241c             lea ecx, [esp + 0x1c]
// 0041d08b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0041d093  ff15600aa400         call dword ptr [0xa40a60]
// 0041d099  8d0424               lea eax, [esp]
// 0041d09c  50                   push eax
// 0041d09d  8d4c242c             lea ecx, [esp + 0x2c]
// 0041d0a1  c644245001           mov byte ptr [esp + 0x50], 1
// 0041d0a6  c7442420c0b5a500     mov dword ptr [esp + 0x20], 0xa5b5c0
// 0041d0ae  ff15c804a400         call dword ptr [0xa404c8]
// 0041d0b4  687073b800           push 0xb87370
// 0041d0b9  8d4c2420             lea ecx, [esp + 0x20]
// 0041d0bd  51                   push ecx
// 0041d0be  c644245400           mov byte ptr [esp + 0x54], 0
// 0041d0c3  c7442424ccb5a500     mov dword ptr [esp + 0x24], 0xa5b5cc
// 0041d0cb  e8dcdf3e00           call 0x80b0ac
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?_Xlen@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
