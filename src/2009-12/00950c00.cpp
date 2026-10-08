// roc 2009-12 00950c00  unit: seg_00950000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00950c00
//
// 00950c00  b9f871b900           mov ecx, 0xb971f8
// 00950c05  e99683abff           jmp 0x408fa0
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
