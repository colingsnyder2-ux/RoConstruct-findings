// from server: 100% by auto
// roc 2011-06 00430950  unit: CWrapperView  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430950
//
// 00430950  51                   push ecx
// 00430951  e88a250600           call 0x492ee0
// 00430956  59                   pop ecx
// 00430957  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?_Register@facet@locale@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
