// roc 2007-03 00442910  unit: seg_00440000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00442910
//
// 00442910  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00442913  8b01                 mov eax, dword ptr [ecx]
// 00442915  8b10                 mov edx, dword ptr [eax]
// 00442917  ffe2                 jmp edx
// library rbxgs/script\Script.cpp (function ?isReadOnly@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
