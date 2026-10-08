// roc 2011-06 004587e0  unit: RBX::Stats::H::?$TypedStatsItem  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004587e0
//
// 004587e0  8b0d8061cd00         mov ecx, dword ptr [0xcd6180]
// 004587e6  85c9                 test ecx, ecx
// 004587e8  7406                 je 0x4587f0
// 004587ea  8b01                 mov eax, dword ptr [ecx]
// 004587ec  8b10                 mov edx, dword ptr [eax]
// 004587ee  ffe2                 jmp edx
// 004587f0  33c0                 xor eax, eax
// 004587f2  c3                   ret 
// library rbxgs/util\standardout.cpp (function ?current@Log@RBX@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
