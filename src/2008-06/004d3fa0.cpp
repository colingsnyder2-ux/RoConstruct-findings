// roc 2008-06 004d3fa0  unit: seg_004d0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3fa0
//
// 004d3fa0  51                   push ecx
// 004d3fa1  ff15f4218000         call dword ptr [0x8021f4]
// 004d3fa7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
