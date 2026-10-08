// from server: 100% by auto
// roc 2009-06 00466a80  unit: CSecureHtmlView  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00466a80
//
// 00466a80  51                   push ecx
// 00466a81  ff1528ea8900         call dword ptr [0x89ea28]
// 00466a87  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
