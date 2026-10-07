// roc 2010-06 00413750  unit: CClassImages  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00413750
//
// 00413750  51                   push ecx
// 00413751  ff1570a39e00         call dword ptr [0x9ea370]
// 00413757  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
