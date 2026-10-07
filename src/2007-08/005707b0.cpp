// roc 2007-08 005707b0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005707b0
//
// 005707b0  33c0                 xor eax, eax
// 005707b2  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 005707b6  0f95c0               setne al
// 005707b9  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ??9ClassDescriptor@Reflection@RBX@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
