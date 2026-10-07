// roc 2008-06 0042ee80  unit: CWrapperView  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ee80
//
// 0042ee80  51                   push ecx
// 0042ee81  e82a800300           call 0x466eb0
// 0042ee86  59                   pop ecx
// 0042ee87  c3                   ret 
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?_Register@facet@locale@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
