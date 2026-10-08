// roc 2009-12 0092b5e0  unit: seg_00920000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0092b5e0
//
// 0092b5e0  b9a4b7b700           mov ecx, 0xb7b7a4
// 0092b5e5  e9c6c4d3ff           jmp 0x667ab0
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
