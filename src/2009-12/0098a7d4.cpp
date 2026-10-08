// roc 2009-12 0098a7d4  unit: seg_00980000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0098a7d4
//
// 0098a7d4  c70504c0b900ecfca000 mov dword ptr [0xb9c004], 0xa0fcec
// 0098a7de  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??__Fs@?1???0ModelSorter@G3D@@QAE@ABV?$ReferenceCountedPointer@VPosedModel@G3D@@@1@ABVVector3@1@@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
