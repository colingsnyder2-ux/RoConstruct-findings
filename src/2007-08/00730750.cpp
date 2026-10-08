// roc 2007-08 00730750  unit: seg_00730000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00730750
//
// 00730750  8a442404             mov al, byte ptr [esp + 4]
// 00730754  3a4114               cmp al, byte ptr [ecx + 0x14]
// 00730757  7403                 je 0x73075c
// 00730759  884114               mov byte ptr [ecx + 0x14], al
// 0073075c  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?setEnabled@ToneMap@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
