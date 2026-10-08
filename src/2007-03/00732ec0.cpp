// roc 2007-03 00732ec0  unit: seg_00730000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00732ec0
//
// 00732ec0  8a442404             mov al, byte ptr [esp + 4]
// 00732ec4  3a4114               cmp al, byte ptr [ecx + 0x14]
// 00732ec7  7403                 je 0x732ecc
// 00732ec9  884114               mov byte ptr [ecx + 0x14], al
// 00732ecc  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?setEnabled@ToneMap@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
