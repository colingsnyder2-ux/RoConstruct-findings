// roc 2009-06 006d4210  unit: RBX::Ball  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d4210
//
// 006d4210  a16433a200           mov eax, dword ptr [0xa23364]
// 006d4215  40                   inc eax
// 006d4216  a36433a200           mov dword ptr [0xa23364], eax
// 006d421b  3dffffff7f           cmp eax, 0x7fffffff
// 006d4220  750a                 jne 0x6d422c
// 006d4222  b801000000           mov eax, 1
// 006d4227  a36433a200           mov dword ptr [0xa23364], eax
// 006d422c  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ?getNextStateIndex@Body@RBX@@SAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
