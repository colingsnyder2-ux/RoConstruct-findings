// roc 2009-12 0097fbd0  unit: seg_00970000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097fbd0
//
// 0097fbd0  b9e0efb700           mov ecx, 0xb7efe0
// 0097fbd5  e9660adcff           jmp 0x740640
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
