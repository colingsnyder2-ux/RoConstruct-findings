// from server: 100% by auto
// roc 2009-06 00760ba0  unit: CXTPToolBar::CControlButtonExpand  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00760ba0
//
// 00760ba0  51                   push ecx
// 00760ba1  ff1544e38900         call dword ptr [0x89e344]
// 00760ba7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
