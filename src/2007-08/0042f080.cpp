// from server: 100% by auto
// roc 2007-08 0042f080  unit: CWrapperView  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f080
//
// 0042f080  51                   push ecx
// 0042f081  e84a3f0300           call 0x462fd0
// 0042f086  59                   pop ecx
// 0042f087  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?_Register@facet@locale@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
