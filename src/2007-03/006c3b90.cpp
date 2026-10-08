// roc 2007-03 006c3b90  unit: seg_006c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c3b90
//
// 006c3b90  8b442404             mov eax, dword ptr [esp + 4]
// 006c3b94  894114               mov dword ptr [ecx + 0x14], eax
// 006c3b97  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\TextureManager.cpp (function ?setMemorySizeHint@TextureManager@G3D@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureManager.cpp
