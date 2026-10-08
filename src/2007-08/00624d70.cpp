// roc 2007-08 00624d70  unit: RBX::ArrowButton  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00624d70
//
// 00624d70  56                   push esi
// 00624d71  8bf1                 mov esi, ecx
// 00624d73  e818000000           call 0x624d90
// 00624d78  8d4608               lea eax, [esi + 8]
// 00624d7b  5e                   pop esi
// 00624d7c  c3                   ret 
// library rbxgs/v8kernel\Cofm.cpp (function ?getCofmInBody@Cofm@RBX@@QBEABVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
