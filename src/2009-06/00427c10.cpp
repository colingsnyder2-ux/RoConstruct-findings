// roc 2009-06 00427c10  unit: CWrapperView  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427c10
//
// 00427c10  51                   push ecx
// 00427c11  e85a000400           call 0x467c70
// 00427c16  59                   pop ecx
// 00427c17  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?_Register@facet@locale@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
