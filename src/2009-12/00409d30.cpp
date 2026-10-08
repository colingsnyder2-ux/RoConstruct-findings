// roc 2009-12 00409d30  unit: VAuthoringSettings::?$FactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00409d30
//
// 00409d30  8bc1                 mov eax, ecx
// 00409d32  c70090fd9900         mov dword ptr [eax], 0x99fd90
// 00409d38  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Hashable@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
