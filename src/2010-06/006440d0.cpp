// roc 2010-06 006440d0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006440d0
//
// 006440d0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 006440d3  8b01                 mov eax, dword ptr [ecx]
// 006440d5  8b10                 mov edx, dword ptr [eax]
// 006440d7  ffe2                 jmp edx
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?isReadOnly@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
