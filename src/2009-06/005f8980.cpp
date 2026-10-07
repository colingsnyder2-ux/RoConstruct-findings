// roc 2009-06 005f8980  unit: RBX::Reflection::EnumDescriptor  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f8980
//
// 005f8980  33c0                 xor eax, eax
// 005f8982  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 005f8986  0f95c0               setne al
// 005f8989  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ??9ClassDescriptor@Reflection@RBX@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
