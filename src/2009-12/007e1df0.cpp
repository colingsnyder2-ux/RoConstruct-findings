// roc 2009-12 007e1df0  unit: RBX::CircleRadialNormal  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e1df0
//
// 007e1df0  68bc2c9d00           push 0x9d2cbc
// 007e1df5  e8a6ffffff           call 0x7e1da0
// 007e1dfa  59                   pop ecx
// 007e1dfb  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__EfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
