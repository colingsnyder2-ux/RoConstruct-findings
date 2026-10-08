// from server: 100% by auto
// roc 2011-06 0052d8c0  unit: RBX::Network::ProfiledRakPeer  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052d8c0
//
// 0052d8c0  51                   push ecx
// 0052d8c1  ff159c03a400         call dword ptr [0xa4039c]
// 0052d8c7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
