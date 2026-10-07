// roc 2010-06 00409f40  unit: VAuthoringSettings::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00409f40
//
// 00409f40  8bc1                 mov eax, ecx
// 00409f42  c7002009a000         mov dword ptr [eax], 0xa00920
// 00409f48  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Hashable@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
