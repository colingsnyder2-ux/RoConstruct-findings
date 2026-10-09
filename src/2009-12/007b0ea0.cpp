// roc 2009-12 007b0ea0  unit: RBX::Ball  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b0ea0
//
// 007b0ea0  a1ec33b600           mov eax, dword ptr [0xb633ec]
// 007b0ea5  40                   inc eax
// 007b0ea6  a3ec33b600           mov dword ptr [0xb633ec], eax
// 007b0eab  3dffffff7f           cmp eax, 0x7fffffff
// 007b0eb0  750a                 jne 0x7b0ebc
// 007b0eb2  b801000000           mov eax, 1
// 007b0eb7  a3ec33b600           mov dword ptr [0xb633ec], eax
// 007b0ebc  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ?getNextStateIndex@Body@RBX@@SAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
