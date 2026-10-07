// roc 2008-06 007ee330  unit: seg_007e0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ee330
//
// 007ee330  a168248000           mov eax, dword ptr [0x802468]
// 007ee335  50                   push eax
// 007ee336  6a06                 push 6
// 007ee338  6a1c                 push 0x1c
// 007ee33a  8d8d4cffffff         lea ecx, [ebp - 0xb4]
// 007ee340  51                   push ecx
// 007ee341  e81533ebff           call 0x6a165b
// 007ee346  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z$0)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
