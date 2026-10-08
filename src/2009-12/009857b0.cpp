// roc 2009-12 009857b0  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009857b0
//
// 009857b0  b9a81cb900           mov ecx, 0xb91ca8
// 009857b5  e9664aa8ff           jmp 0x40a220
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
