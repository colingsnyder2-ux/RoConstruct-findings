// from server: 100% by auto
// roc 2012-06 005c9420  unit: RBX::AdornRbxGfx  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c9420
//
// 005c9420  51                   push ecx
// 005c9421  ff159421b200         call dword ptr [0xb22194]
// 005c9427  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
