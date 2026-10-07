// roc 2012-06 004356e0  unit: CWrapperView  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004356e0
//
// 004356e0  51                   push ecx
// 004356e1  e8ea070700           call 0x4a5ed0
// 004356e6  59                   pop ecx
// 004356e7  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?_Register@facet@locale@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
