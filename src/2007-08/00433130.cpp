// roc 2007-08 00433130  unit: RBX::VHat::?$FactoryProduct::Creator  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433130
//
// 00433130  51                   push ecx
// 00433131  ff1504d37700         call dword ptr [0x77d304]
// 00433137  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
