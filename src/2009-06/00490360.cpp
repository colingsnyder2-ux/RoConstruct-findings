// roc 2009-06 00490360  unit: RBX::MaterialBaseRefMaterialAdapter  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00490360
//
// 00490360  6aff                 push -1
// 00490362  68b2db8500           push 0x85dbb2
// 00490367  64a100000000         mov eax, dword ptr fs:[0]
// 0049036d  50                   push eax
// 0049036e  64892500000000       mov dword ptr fs:[0], esp
// 00490375  83ec44               sub esp, 0x44
// 00490378  68a0ec8a00           push 0x8aeca0
// 0049037d  8d4c2404             lea ecx, [esp + 4]
// 00490381  ff15b4e48900         call dword ptr [0x89e4b4]
// 00490387  8d4c241c             lea ecx, [esp + 0x1c]
// 0049038b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00490393  ff15b8e98900         call dword ptr [0x89e9b8]
// 00490399  8d0424               lea eax, [esp]
// 0049039c  50                   push eax
// 0049039d  8d4c242c             lea ecx, [esp + 0x2c]
// 004903a1  c644245001           mov byte ptr [esp + 0x50], 1
// 004903a6  c744242044c98a00     mov dword ptr [esp + 0x20], 0x8ac944
// 004903ae  ff15b8e48900         call dword ptr [0x89e4b8]
// 004903b4  6834929700           push 0x979234
// 004903b9  8d4c2420             lea ecx, [esp + 0x20]
// 004903bd  51                   push ecx
// 004903be  c644245400           mov byte ptr [esp + 0x54], 0
// 004903c3  c744242450c98a00     mov dword ptr [esp + 0x24], 0x8ac950
// 004903cb  e87a962800           call 0x719a4a
// library openrbx-client/App\reflection\reflection_function.cpp (function ?_Xlen@?$vector@PAVFunctionDescriptor@Reflection@RBX@@V?$allocator@PAVFunctionDescriptor@Reflection@RBX@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_function.cpp
