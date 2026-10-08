// roc 2009-12 00980c50  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00980c50
//
// 00980c50  b98027b800           mov ecx, 0xb82780
// 00980c55  e9c695a8ff           jmp 0x40a220
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
