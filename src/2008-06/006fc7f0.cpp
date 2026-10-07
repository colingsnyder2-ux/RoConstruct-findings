// roc 2008-06 006fc7f0  unit: CXTPPropertyGrid  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fc7f0
//
// 006fc7f0  51                   push ecx
// 006fc7f1  ff151c298000         call dword ptr [0x80291c]
// 006fc7f7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
