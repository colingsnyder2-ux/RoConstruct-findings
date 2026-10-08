// roc 2008-06 0059d490  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059d490
//
// 0059d490  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0059d493  8b01                 mov eax, dword ptr [ecx]
// 0059d495  8b10                 mov edx, dword ptr [eax]
// 0059d497  ffe2                 jmp edx
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?isReadOnly@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
