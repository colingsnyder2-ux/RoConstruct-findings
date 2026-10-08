// roc 2008-06 00660170  unit: seg_00660000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660170
//
// 00660170  56                   push esi
// 00660171  8bf1                 mov esi, ecx
// 00660173  e8a8fdffff           call 0x65ff20
// 00660178  8d4618               lea eax, [esi + 0x18]
// 0066017b  5e                   pop esi
// 0066017c  c3                   ret 
// library rbxgs/v8kernel\Cofm.cpp (function ?getMoment@Cofm@RBX@@QBEABVMatrix3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
