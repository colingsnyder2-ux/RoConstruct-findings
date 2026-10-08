// roc 2011-06 0040b8a0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040b8a0
//
// 0040b8a0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0040b8a3  8b01                 mov eax, dword ptr [ecx]
// 0040b8a5  8b10                 mov edx, dword ptr [eax]
// 0040b8a7  ffe2                 jmp edx
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?isReadOnly@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
