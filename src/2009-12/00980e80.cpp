// roc 2009-12 00980e80  unit: seg_00980000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00980e80
//
// 00980e80  8b0d5c31b800         mov ecx, dword ptr [0xb8315c]
// 00980e86  56                   push esi
// 00980e87  8bf1                 mov esi, ecx
// 00980e89  85c9                 test ecx, ecx
// 00980e8b  740e                 je 0x980e9b
// 00980e8d  e86e74c6ff           call 0x5e8300
// 00980e92  56                   push esi
// 00980e93  e8c229e7ff           call 0x7f385a
// 00980e98  83c404               add esp, 4
// 00980e9b  5e                   pop esi
// 00980e9c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
