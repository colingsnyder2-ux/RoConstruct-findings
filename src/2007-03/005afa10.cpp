// roc 2007-03 005afa10  unit: seg_005a0000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005afa10
//
// 005afa10  8bc1                 mov eax, ecx
// 005afa12  8b4808               mov ecx, dword ptr [eax + 8]
// 005afa15  85c9                 test ecx, ecx
// 005afa17  7405                 je 0x5afa1e
// 005afa19  e9f2ffffff           jmp 0x5afa10
// 005afa1e  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ?calcRoot@Body@RBX@@AAEPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
