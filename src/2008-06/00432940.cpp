// from server: 100% by auto
// roc 2008-06 00432940  unit: RBX::VHat::?$FactoryProduct::Creator  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432940
//
// 00432940  51                   push ecx
// 00432941  ff15dc228000         call dword ptr [0x8022dc]
// 00432947  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
