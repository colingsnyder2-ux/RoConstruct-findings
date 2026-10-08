// roc 2007-08 00779240  unit: seg_00770000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779240
//
// 00779240  8b0d6cfc8b00         mov ecx, dword ptr [0x8bfc6c]
// 00779246  85c9                 test ecx, ecx
// 00779248  56                   push esi
// 00779249  8bf1                 mov esi, ecx
// 0077924b  740e                 je 0x77925b
// 0077924d  e8de43d8ff           call 0x4fd630
// 00779252  56                   push esi
// 00779253  e80a6aebff           call 0x62fc62
// 00779258  83c404               add esp, 4
// 0077925b  5e                   pop esi
// 0077925c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
