// from server: 100% by auto
// roc 2011-06 004159a0  unit: CBitmap  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004159a0
//
// 004159a0  51                   push ecx
// 004159a1  ff158003a400         call dword ptr [0xa40380]
// 004159a7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
