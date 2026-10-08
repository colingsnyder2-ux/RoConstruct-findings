// roc 2009-12 007bd740  unit: RBX::GuiLayerCollector  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007bd740
//
// 007bd740  8bc1                 mov eax, ecx
// 007bd742  c70004e49e00         mov dword ptr [eax], 0x9ee404
// 007bd748  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Hashable@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
