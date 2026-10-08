// from server: 100% by auto
// roc 2012-06 0040e530  unit: VAuthoringSettings::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0040e530
//
// 0040e530  8bc1                 mov eax, ecx
// 0040e532  c700343cb400         mov dword ptr [eax], 0xb43c34
// 0040e538  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Hashable@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
