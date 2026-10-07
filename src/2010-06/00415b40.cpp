// roc 2010-06 00415b40  unit: PasteVerb  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00415b40
//
// 00415b40  51                   push ecx
// 00415b41  ff1564aa9e00         call dword ptr [0x9eaa64]
// 00415b47  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
