// from server: 100% by auto
// roc 2009-06 00444d40  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00444d40
//
// 00444d40  51                   push ecx
// 00444d41  ff15a4e18900         call dword ptr [0x89e1a4]
// 00444d47  f7d8                 neg eax
// 00444d49  1bc0                 sbb eax, eax
// 00444d4b  f7d8                 neg eax
// 00444d4d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?decrement@AtomicInt32@G3D@@QAEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
