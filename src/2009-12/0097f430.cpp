// roc 2009-12 0097f430  unit: seg_00970000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097f430
//
// 0097f430  b9a8e5b700           mov ecx, 0xb7e5a8
// 0097f435  e90612dcff           jmp 0x740640
// library rbxgs-appdraw/Fonts.cpp (function ??__Fsing@?1??singleton@ContentProvider@RBX@@SAAAV12@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
