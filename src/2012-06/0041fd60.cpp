// from server: 100% by auto
// roc 2012-06 0041fd60  unit: RBX::VTool::?$FactoryProduct::Creator  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041fd60
//
// 0041fd60  51                   push ecx
// 0041fd61  ff15d821b200         call dword ptr [0xb221d8]
// 0041fd67  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
