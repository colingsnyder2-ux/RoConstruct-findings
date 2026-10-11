// roc 2007-08 005ccd30  unit: RBX::IPipelined  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ccd30
//
// 005ccd30  6aff                 push -1
// 005ccd32  68b2417500           push 0x7541b2
// 005ccd37  64a100000000         mov eax, dword ptr fs:[0]
// 005ccd3d  50                   push eax
// 005ccd3e  64892500000000       mov dword ptr fs:[0], esp
// 005ccd45  83ec44               sub esp, 0x44
// 005ccd48  6808657800           push 0x786508
// 005ccd4d  8d4c2404             lea ecx, [esp + 4]
// 005ccd51  ff1598e67700         call dword ptr [0x77e698]
// 005ccd57  8d4c241c             lea ecx, [esp + 0x1c]
// 005ccd5b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 005ccd63  ff15f8e67700         call dword ptr [0x77e6f8]
// 005ccd69  8d0424               lea eax, [esp]
// 005ccd6c  50                   push eax
// 005ccd6d  8d4c242c             lea ecx, [esp + 0x2c]
// 005ccd71  c644245001           mov byte ptr [esp + 0x50], 1
// 005ccd76  c7442420604e7800     mov dword ptr [esp + 0x20], 0x784e60
// 005ccd7e  ff159ce67700         call dword ptr [0x77e69c]
// 005ccd84  6878f78300           push 0x83f778
// 005ccd89  8d4c2420             lea ecx, [esp + 0x20]
// 005ccd8d  51                   push ecx
// 005ccd8e  c644245400           mov byte ptr [esp + 0x54], 0
// 005ccd93  c74424246c4e7800     mov dword ptr [esp + 0x24], 0x784e6c
// 005ccd9b  e8fe3d0600           call 0x630b9e
// library openrbx-client/App\reflection\reflection_function.cpp (function ?_Xlen@?$vector@PAVFunctionDescriptor@Reflection@RBX@@V?$allocator@PAVFunctionDescriptor@Reflection@RBX@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_function.cpp
