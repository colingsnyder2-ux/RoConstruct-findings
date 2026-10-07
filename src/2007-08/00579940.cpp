// roc 2007-08 00579940  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579940
//
// 00579940  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00579943  8b01                 mov eax, dword ptr [ecx]
// 00579945  8b10                 mov edx, dword ptr [eax]
// 00579947  ffe2                 jmp edx
// library rbxgs/script\Script.cpp (function ?isReadOnly@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
