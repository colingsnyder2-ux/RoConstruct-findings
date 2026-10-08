// from server: 100% by auto
// roc 2012-06 00418f60  unit: CBitmap  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00418f60
//
// 00418f60  51                   push ecx
// 00418f61  ff15b821b200         call dword ptr [0xb221b8]
// 00418f67  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
