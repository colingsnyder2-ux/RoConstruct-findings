// from server: 100% by auto
// roc 2010-06 00428b40  unit: CWrapperView  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00428b40
//
// 00428b40  51                   push ecx
// 00428b41  e82ad90400           call 0x476470
// 00428b46  59                   pop ecx
// 00428b47  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?_Register@facet@locale@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
