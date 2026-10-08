// roc 2009-06 00444bd0  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00444bd0
//
// 00444bd0  8b0de404a500         mov ecx, dword ptr [0xa504e4]
// 00444bd6  85c9                 test ecx, ecx
// 00444bd8  7406                 je 0x444be0
// 00444bda  8b01                 mov eax, dword ptr [ecx]
// 00444bdc  8b10                 mov edx, dword ptr [eax]
// 00444bde  ffe2                 jmp edx
// 00444be0  33c0                 xor eax, eax
// 00444be2  c3                   ret 
// library rbxgs/util\standardout.cpp (function ?current@Log@RBX@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
