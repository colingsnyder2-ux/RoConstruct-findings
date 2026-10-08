// roc 2009-12 009452c0  unit: seg_00940000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009452c0
//
// 009452c0  b9c003b900           mov ecx, 0xb903c0
// 009452c5  e9d63cacff           jmp 0x408fa0
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
