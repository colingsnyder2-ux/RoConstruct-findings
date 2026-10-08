// roc 2012-06 0046c530  unit: RBX::Stats::H::?$TypedStatsItem  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046c530
//
// 0046c530  8b0da480e500         mov ecx, dword ptr [0xe580a4]
// 0046c536  85c9                 test ecx, ecx
// 0046c538  7406                 je 0x46c540
// 0046c53a  8b01                 mov eax, dword ptr [ecx]
// 0046c53c  8b10                 mov edx, dword ptr [eax]
// 0046c53e  ffe2                 jmp edx
// 0046c540  33c0                 xor eax, eax
// 0046c542  c3                   ret 
// library rbxgs/util\standardout.cpp (function ?current@Log@RBX@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
