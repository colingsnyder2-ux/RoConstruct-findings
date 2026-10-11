// roc 2010-06 00423df0  unit: LogManager  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00423df0
//
// 00423df0  6aff                 push -1
// 00423df2  68e22f9a00           push 0x9a2fe2
// 00423df7  64a100000000         mov eax, dword ptr fs:[0]
// 00423dfd  50                   push eax
// 00423dfe  64892500000000       mov dword ptr fs:[0], esp
// 00423e05  83ec44               sub esp, 0x44
// 00423e08  68f024a000           push 0xa024f0
// 00423e0d  8d4c2404             lea ecx, [esp + 4]
// 00423e11  ff1510a49e00         call dword ptr [0x9ea410]
// 00423e17  8d4c241c             lea ecx, [esp + 0x1c]
// 00423e1b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00423e23  ff1518a99e00         call dword ptr [0x9ea918]
// 00423e29  8d0424               lea eax, [esp]
// 00423e2c  50                   push eax
// 00423e2d  8d4c242c             lea ecx, [esp + 0x2c]
// 00423e31  c644245001           mov byte ptr [esp + 0x50], 1
// 00423e36  c74424202c00a000     mov dword ptr [esp + 0x20], 0xa0002c
// 00423e3e  ff150ca49e00         call dword ptr [0x9ea40c]
// 00423e44  68601bb000           push 0xb01b60
// 00423e49  8d4c2420             lea ecx, [esp + 0x20]
// 00423e4d  51                   push ecx
// 00423e4e  c644245400           mov byte ptr [esp + 0x54], 0
// 00423e53  c74424243800a000     mov dword ptr [esp + 0x24], 0xa00038
// 00423e5b  e8524b3800           call 0x7a89b2
// library openrbx-client/App\reflection\reflection_function.cpp (function ?_Xlen@?$vector@PAVFunctionDescriptor@Reflection@RBX@@V?$allocator@PAVFunctionDescriptor@Reflection@RBX@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_function.cpp
