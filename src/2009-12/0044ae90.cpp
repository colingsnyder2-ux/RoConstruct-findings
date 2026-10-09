// roc 2009-12 0044ae90  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044ae90
//
// 0044ae90  8b0dec90b900         mov ecx, dword ptr [0xb990ec]
// 0044ae96  85c9                 test ecx, ecx
// 0044ae98  7406                 je 0x44aea0
// 0044ae9a  8b01                 mov eax, dword ptr [ecx]
// 0044ae9c  8b10                 mov edx, dword ptr [eax]
// 0044ae9e  ffe2                 jmp edx
// 0044aea0  33c0                 xor eax, eax
// 0044aea2  c3                   ret 
// library rbxgs/util\standardout.cpp (function ?current@Log@RBX@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
