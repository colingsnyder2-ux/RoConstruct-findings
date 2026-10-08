// roc 2009-12 0097fac0  unit: seg_00970000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097fac0
//
// 0097fac0  c70538e9b70070fd9900 mov dword ptr [0xb7e938], 0x99fd70
// 0097faca  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??__Fs@?1???0ModelSorter@G3D@@QAE@ABV?$ReferenceCountedPointer@VPosedModel@G3D@@@1@ABVVector3@1@@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
