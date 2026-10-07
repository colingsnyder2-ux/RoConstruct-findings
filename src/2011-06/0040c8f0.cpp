// roc 2011-06 0040c8f0  unit: VAuthoringSettings::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040c8f0
//
// 0040c8f0  8bc1                 mov eax, ecx
// 0040c8f2  c700e8bea500         mov dword ptr [eax], 0xa5bee8
// 0040c8f8  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Hashable@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
