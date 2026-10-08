// from server: 100% by auto
// roc 2007-08 004ca1d0  unit: seg_004c0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca1d0
//
// 004ca1d0  51                   push ecx
// 004ca1d1  ff15f8d27700         call dword ptr [0x77d2f8]
// 004ca1d7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
