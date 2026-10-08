// roc 2009-12 00940b90  unit: seg_00940000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00940b90
//
// 00940b90  b99058b800           mov ecx, 0xb85890
// 00940b95  e90684acff           jmp 0x408fa0
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
