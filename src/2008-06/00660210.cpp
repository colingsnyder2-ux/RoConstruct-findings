// roc 2008-06 00660210  unit: seg_00660000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660210
//
// 00660210  8bc1                 mov eax, ecx
// 00660212  c7005cc48400         mov dword ptr [eax], 0x84c45c
// 00660218  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0Hashable@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
