// roc 2008-06 00660160  unit: seg_00660000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660160
//
// 00660160  56                   push esi
// 00660161  8bf1                 mov esi, ecx
// 00660163  e8b8fdffff           call 0x65ff20
// 00660168  8d4608               lea eax, [esi + 8]
// 0066016b  5e                   pop esi
// 0066016c  c3                   ret 
// library rbxgs/v8kernel\Cofm.cpp (function ?getCofmInBody@Cofm@RBX@@QBEABVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
