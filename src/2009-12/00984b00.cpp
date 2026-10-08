// roc 2009-12 00984b00  unit: seg_00980000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00984b00
//
// 00984b00  b9b006b900           mov ecx, 0xb906b0
// 00984b05  e936bbdbff           jmp 0x740640
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
