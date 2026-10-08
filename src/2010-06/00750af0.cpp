// roc 2010-06 00750af0  unit: RBX::Assembly  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00750af0
//
// 00750af0  a1e437be00           mov eax, dword ptr [0xbe37e4]
// 00750af5  40                   inc eax
// 00750af6  a3e437be00           mov dword ptr [0xbe37e4], eax
// 00750afb  3dffffff7f           cmp eax, 0x7fffffff
// 00750b00  750a                 jne 0x750b0c
// 00750b02  b801000000           mov eax, 1
// 00750b07  a3e437be00           mov dword ptr [0xbe37e4], eax
// 00750b0c  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ?getNextStateIndex@Body@RBX@@SAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
