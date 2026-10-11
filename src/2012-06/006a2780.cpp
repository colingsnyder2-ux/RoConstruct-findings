// roc 2012-06 006a2780  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a2780
//
// 006a2780  6aff                 push -1
// 006a2782  684269aa00           push 0xaa6942
// 006a2787  64a100000000         mov eax, dword ptr fs:[0]
// 006a278d  50                   push eax
// 006a278e  64892500000000       mov dword ptr fs:[0], esp
// 006a2795  83ec44               sub esp, 0x44
// 006a2798  683061b400           push 0xb46130
// 006a279d  8d4c2404             lea ecx, [esp + 4]
// 006a27a1  ff154826b200         call dword ptr [0xb22648]
// 006a27a7  8d4c241c             lea ecx, [esp + 0x1c]
// 006a27ab  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 006a27b3  ff15dc29b200         call dword ptr [0xb229dc]
// 006a27b9  8d0424               lea eax, [esp]
// 006a27bc  50                   push eax
// 006a27bd  8d4c242c             lea ecx, [esp + 0x2c]
// 006a27c1  c644245001           mov byte ptr [esp + 0x50], 1
// 006a27c6  c7442420a02eb400     mov dword ptr [esp + 0x20], 0xb42ea0
// 006a27ce  ff154426b200         call dword ptr [0xb22644]
// 006a27d4  680462cd00           push 0xcd6204
// 006a27d9  8d4c2420             lea ecx, [esp + 0x20]
// 006a27dd  51                   push ecx
// 006a27de  c644245400           mov byte ptr [esp + 0x54], 0
// 006a27e3  c7442424ac2eb400     mov dword ptr [esp + 0x24], 0xb42eac
// 006a27eb  e854092e00           call 0x983144
// library openrbx-client/App\reflection\reflection_function.cpp (function ?_Xlen@?$vector@PAVFunctionDescriptor@Reflection@RBX@@V?$allocator@PAVFunctionDescriptor@Reflection@RBX@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_function.cpp
