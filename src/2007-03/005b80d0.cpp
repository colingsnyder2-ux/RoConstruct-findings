// roc 2007-03 005b80d0  unit: seg_005b0000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b80d0
//
// 005b80d0  6aff                 push -1
// 005b80d2  68926f7500           push 0x756f92
// 005b80d7  64a100000000         mov eax, dword ptr fs:[0]
// 005b80dd  50                   push eax
// 005b80de  64892500000000       mov dword ptr fs:[0], esp
// 005b80e5  83ec44               sub esp, 0x44
// 005b80e8  6810557800           push 0x785510
// 005b80ed  8d4c2404             lea ecx, [esp + 4]
// 005b80f1  ff1578e77700         call dword ptr [0x77e778]
// 005b80f7  8d4c241c             lea ecx, [esp + 0x1c]
// 005b80fb  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 005b8103  ff1560e97700         call dword ptr [0x77e960]
// 005b8109  8d0424               lea eax, [esp]
// 005b810c  50                   push eax
// 005b810d  8d4c242c             lea ecx, [esp + 0x2c]
// 005b8111  c644245001           mov byte ptr [esp + 0x50], 1
// 005b8116  c7442420383e7800     mov dword ptr [esp + 0x20], 0x783e38
// 005b811e  ff157ce77700         call dword ptr [0x77e77c]
// 005b8124  6870f78300           push 0x83f770
// 005b8129  8d4c2420             lea ecx, [esp + 0x20]
// 005b812d  51                   push ecx
// 005b812e  c644245400           mov byte ptr [esp + 0x54], 0
// 005b8133  c7442424443e7800     mov dword ptr [esp + 0x24], 0x783e44
// 005b813b  e8ee6e0600           call 0x61f02e
// library openrbx-client/App\reflection\reflection_function.cpp (function ?_Xlen@?$vector@PAVFunctionDescriptor@Reflection@RBX@@V?$allocator@PAVFunctionDescriptor@Reflection@RBX@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_function.cpp
