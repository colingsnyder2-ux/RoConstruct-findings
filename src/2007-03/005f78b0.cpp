// roc 2007-03 005f78b0  unit: seg_005f0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f78b0
//
// 005f78b0  56                   push esi
// 005f78b1  8bf1                 mov esi, ecx
// 005f78b3  e828fdffff           call 0x5f75e0
// 005f78b8  8d4618               lea eax, [esi + 0x18]
// 005f78bb  5e                   pop esi
// 005f78bc  c3                   ret 
// library rbxgs/v8kernel\Cofm.cpp (function ?getMoment@Cofm@RBX@@QBEABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
