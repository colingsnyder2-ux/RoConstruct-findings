// roc 2012-06 006c80f0  unit: RBX::GlobalAdvancedSettings  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006c80f0
//
// 006c80f0  33c0                 xor eax, eax
// 006c80f2  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 006c80f6  0f95c0               setne al
// 006c80f9  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ??9ClassDescriptor@Reflection@RBX@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
