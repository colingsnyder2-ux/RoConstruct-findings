// roc 2008-06 0059a4a0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a4a0
//
// 0059a4a0  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0059a4a3  8b01                 mov eax, dword ptr [ecx]
// 0059a4a5  8b10                 mov edx, dword ptr [eax]
// 0059a4a7  ffe2                 jmp edx
// library rbxgs/script\Script.cpp (function ?isReadOnly@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
