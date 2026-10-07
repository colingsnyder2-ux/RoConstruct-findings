// roc 2011-06 005e4200  unit: RBX::Reflection::EnumDescriptor  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e4200
//
// 005e4200  33c0                 xor eax, eax
// 005e4202  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 005e4206  0f95c0               setne al
// 005e4209  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ??9ClassDescriptor@Reflection@RBX@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
