// roc 2007-08 00684ca0  unit: CXTPPropertyGrid  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684ca0
//
// 00684ca0  51                   push ecx
// 00684ca1  ff15d8e97700         call dword ptr [0x77e9d8]
// 00684ca7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
