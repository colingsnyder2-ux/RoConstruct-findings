// from server: 100% by auto
// roc 2012-06 004a51f0  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a51f0
//
// 004a51f0  51                   push ecx
// 004a51f1  ff152c2bb200         call dword ptr [0xb22b2c]
// 004a51f7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
