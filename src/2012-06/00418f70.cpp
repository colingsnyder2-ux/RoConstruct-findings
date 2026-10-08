// from server: 100% by auto
// roc 2012-06 00418f70  unit: CBitmap  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00418f70
//
// 00418f70  51                   push ecx
// 00418f71  ff15b421b200         call dword ptr [0xb221b4]
// 00418f77  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
