// roc 2008-06 00613f20  unit: RBX::RevoluteLink  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00613f20
//
// 00613f20  a198a89500           mov eax, dword ptr [0x95a898]
// 00613f25  40                   inc eax
// 00613f26  a398a89500           mov dword ptr [0x95a898], eax
// 00613f2b  3dffffff7f           cmp eax, 0x7fffffff
// 00613f30  750a                 jne 0x613f3c
// 00613f32  b801000000           mov eax, 1
// 00613f37  a398a89500           mov dword ptr [0x95a898], eax
// 00613f3c  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ?getNextStateIndex@Body@RBX@@SAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
