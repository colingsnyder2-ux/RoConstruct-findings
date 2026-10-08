// roc 2007-08 00779260  unit: seg_00770000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779260
//
// 00779260  8b0d74fc8b00         mov ecx, dword ptr [0x8bfc74]
// 00779266  85c9                 test ecx, ecx
// 00779268  56                   push esi
// 00779269  8bf1                 mov esi, ecx
// 0077926b  740e                 je 0x77927b
// 0077926d  e88e44d8ff           call 0x4fd700
// 00779272  56                   push esi
// 00779273  e8ea69ebff           call 0x62fc62
// 00779278  83c404               add esp, 4
// 0077927b  5e                   pop esi
// 0077927c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
