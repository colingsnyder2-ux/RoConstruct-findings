// roc 2011-06 007a1d30  unit: RBX::Assembly  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a1d30
//
// 007a1d30  a16422c900           mov eax, dword ptr [0xc92264]
// 007a1d35  40                   inc eax
// 007a1d36  a36422c900           mov dword ptr [0xc92264], eax
// 007a1d3b  3dffffff7f           cmp eax, 0x7fffffff
// 007a1d40  750a                 jne 0x7a1d4c
// 007a1d42  b801000000           mov eax, 1
// 007a1d47  a36422c900           mov dword ptr [0xc92264], eax
// 007a1d4c  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ?getNextStateIndex@Body@RBX@@SAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
