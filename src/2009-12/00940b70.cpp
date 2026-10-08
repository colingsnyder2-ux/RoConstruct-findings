// roc 2009-12 00940b70  unit: seg_00940000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00940b70
//
// 00940b70  b99059b800           mov ecx, 0xb85990
// 00940b75  e92684acff           jmp 0x408fa0
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
