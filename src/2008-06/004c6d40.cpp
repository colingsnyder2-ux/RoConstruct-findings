// roc 2008-06 004c6d40  unit: ProfiledRakPeer  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c6d40
//
// 004c6d40  6aff                 push -1
// 004c6d42  6842e87d00           push 0x7de842
// 004c6d47  64a100000000         mov eax, dword ptr fs:[0]
// 004c6d4d  50                   push eax
// 004c6d4e  64892500000000       mov dword ptr fs:[0], esp
// 004c6d55  83ec44               sub esp, 0x44
// 004c6d58  6890e18000           push 0x80e190
// 004c6d5d  8d4c2404             lea ecx, [esp + 4]
// 004c6d61  ff1558248000         call dword ptr [0x802458]
// 004c6d67  8d4c241c             lea ecx, [esp + 0x1c]
// 004c6d6b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004c6d73  ff1598288000         call dword ptr [0x802898]
// 004c6d79  8d0424               lea eax, [esp]
// 004c6d7c  50                   push eax
// 004c6d7d  8d4c242c             lea ecx, [esp + 0x2c]
// 004c6d81  c644245001           mov byte ptr [esp + 0x50], 1
// 004c6d86  c744242010b18000     mov dword ptr [esp + 0x20], 0x80b110
// 004c6d8e  ff155c248000         call dword ptr [0x80245c]
// 004c6d94  68c00c8d00           push 0x8d0cc0
// 004c6d99  8d4c2420             lea ecx, [esp + 0x20]
// 004c6d9d  51                   push ecx
// 004c6d9e  c644245400           mov byte ptr [esp + 0x54], 0
// 004c6da3  c74424241cb18000     mov dword ptr [esp + 0x24], 0x80b11c
// 004c6dab  e8dca71d00           call 0x6a158c
// library openrbx-client/App\reflection\reflection_function.cpp (function ?_Xlen@?$vector@PAVFunctionDescriptor@Reflection@RBX@@V?$allocator@PAVFunctionDescriptor@Reflection@RBX@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_function.cpp
