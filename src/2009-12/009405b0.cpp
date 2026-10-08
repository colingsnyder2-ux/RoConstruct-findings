// roc 2009-12 009405b0  unit: seg_00940000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009405b0
//
// 009405b0  b9b454b800           mov ecx, 0xb854b4
// 009405b5  e9e689acff           jmp 0x408fa0
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
