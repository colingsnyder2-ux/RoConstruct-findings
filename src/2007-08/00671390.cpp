// from server: 100% by auto
// roc 2007-08 00671390  unit: CXTPToolBar::CControlButtonExpand  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671390
//
// 00671390  51                   push ecx
// 00671391  ff15fcd27700         call dword ptr [0x77d2fc]
// 00671397  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
