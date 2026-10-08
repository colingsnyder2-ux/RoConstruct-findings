// roc 2008-06 005dd7b0  unit: RBX::Message  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd7b0
//
// 005dd7b0  8b442404             mov eax, dword ptr [esp + 4]
// 005dd7b4  a90000807f           test eax, 0x7f800000
// 005dd7b9  750d                 jne 0x5dd7c8
// 005dd7bb  a9ffff7f00           test eax, 0x7fffff
// 005dd7c0  7406                 je 0x5dd7c8
// 005dd7c2  b801000000           mov eax, 1
// 005dd7c7  c3                   ret 
// 005dd7c8  33c0                 xor eax, eax
// 005dd7ca  c3                   ret 
// library rbxgs/util\Math.cpp (function ?isDenormal@Math@RBX@@SA_NM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
