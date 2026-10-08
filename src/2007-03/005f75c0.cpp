// roc 2007-03 005f75c0  unit: seg_005f0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f75c0
//
// 005f75c0  56                   push esi
// 005f75c1  8bf1                 mov esi, ecx
// 005f75c3  e818000000           call 0x5f75e0
// 005f75c8  8d4608               lea eax, [esi + 8]
// 005f75cb  5e                   pop esi
// 005f75cc  c3                   ret 
// library rbxgs/v8kernel\Cofm.cpp (function ?getCofmInBody@Cofm@RBX@@QBEABVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
