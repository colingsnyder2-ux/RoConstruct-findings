// roc 2009-06 00444d30  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00444d30
//
// 00444d30  51                   push ecx
// 00444d31  ff15d0e18900         call dword ptr [0x89e1d0]
// 00444d37  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
