// from server: 100% by auto
// roc 2009-06 006df030  unit: RBX::SpatialFilter  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006df030
//
// 006df030  8bc1                 mov eax, ecx
// 006df032  c70004d48e00         mov dword ptr [eax], 0x8ed404
// 006df038  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Hashable@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
