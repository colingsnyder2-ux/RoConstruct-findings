// roc 2007-03 00779290  unit: seg_00770000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779290
//
// 00779290  8b0d44a18b00         mov ecx, dword ptr [0x8ba144]
// 00779296  85c9                 test ecx, ecx
// 00779298  56                   push esi
// 00779299  8bf1                 mov esi, ecx
// 0077929b  740e                 je 0x7792ab
// 0077929d  e8ce7fd7ff           call 0x4f1270
// 007792a2  56                   push esi
// 007792a3  e8484eeaff           call 0x61e0f0
// 007792a8  83c404               add esp, 4
// 007792ab  5e                   pop esi
// 007792ac  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
