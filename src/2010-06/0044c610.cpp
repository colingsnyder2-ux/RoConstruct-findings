// roc 2010-06 0044c610  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044c610
//
// 0044c610  8b0dc437c200         mov ecx, dword ptr [0xc237c4]
// 0044c616  85c9                 test ecx, ecx
// 0044c618  7406                 je 0x44c620
// 0044c61a  8b01                 mov eax, dword ptr [ecx]
// 0044c61c  8b10                 mov edx, dword ptr [eax]
// 0044c61e  ffe2                 jmp edx
// 0044c620  33c0                 xor eax, eax
// 0044c622  c3                   ret 
// library rbxgs/util\standardout.cpp (function ?current@Log@RBX@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
