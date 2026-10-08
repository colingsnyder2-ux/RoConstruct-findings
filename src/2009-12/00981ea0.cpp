// roc 2009-12 00981ea0  unit: seg_00980000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00981ea0
//
// 00981ea0  c705185db80070fd9900 mov dword ptr [0xb85d18], 0x99fd70
// 00981eaa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??__Fs@?1???0ModelSorter@G3D@@QAE@ABV?$ReferenceCountedPointer@VPosedModel@G3D@@@1@ABVVector3@1@@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
