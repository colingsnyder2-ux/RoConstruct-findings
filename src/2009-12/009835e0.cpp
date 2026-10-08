// roc 2009-12 009835e0  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009835e0
//
// 009835e0  b9a079b800           mov ecx, 0xb879a0
// 009835e5  e9366ca8ff           jmp 0x40a220
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
