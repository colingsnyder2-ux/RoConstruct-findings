// roc 2009-12 00950c40  unit: seg_00950000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00950c40
//
// 00950c40  b9f070b900           mov ecx, 0xb970f0
// 00950c45  e95683abff           jmp 0x408fa0
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
