// roc 2009-12 00428850  unit: CWrapperView  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00428850
//
// 00428850  51                   push ecx
// 00428851  e83a820400           call 0x470a90
// 00428856  59                   pop ecx
// 00428857  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?_Register@facet@locale@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
