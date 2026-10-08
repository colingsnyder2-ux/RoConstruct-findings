// from server: 100% by auto
// roc 2011-06 0052d8d0  unit: RBX::Network::ProfiledRakPeer  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052d8d0
//
// 0052d8d0  51                   push ecx
// 0052d8d1  ff158403a400         call dword ptr [0xa40384]
// 0052d8d7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
