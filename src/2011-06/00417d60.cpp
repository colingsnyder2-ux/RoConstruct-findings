// roc 2011-06 00417d60  unit: VCRbxObject::?$CComObjectNoLock  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00417d60
//
// 00417d60  51                   push ecx
// 00417d61  ff15d80aa400         call dword ptr [0xa40ad8]
// 00417d67  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
