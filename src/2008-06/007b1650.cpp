// roc 2008-06 007b1650  unit: RBX::RenderNew::TextureProxy  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b1650
//
// 007b1650  8a442404             mov al, byte ptr [esp + 4]
// 007b1654  3a4114               cmp al, byte ptr [ecx + 0x14]
// 007b1657  7403                 je 0x7b165c
// 007b1659  884114               mov byte ptr [ecx + 0x14], al
// 007b165c  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?setEnabled@ToneMap@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
