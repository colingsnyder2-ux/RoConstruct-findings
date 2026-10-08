// from server: 100% by auto
// roc 2009-06 00409e20  unit: VAuthoringSettings::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00409e20
//
// 00409e20  8bc1                 mov eax, ecx
// 00409e22  c7004cd28a00         mov dword ptr [eax], 0x8ad24c
// 00409e28  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Hashable@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
