// roc 2009-12 00980e60  unit: seg_00980000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00980e60
//
// 00980e60  8b0d5431b800         mov ecx, dword ptr [0xb83154]
// 00980e66  56                   push esi
// 00980e67  8bf1                 mov esi, ecx
// 00980e69  85c9                 test ecx, ecx
// 00980e6b  740e                 je 0x980e7b
// 00980e6d  e8ce73c6ff           call 0x5e8240
// 00980e72  56                   push esi
// 00980e73  e8e229e7ff           call 0x7f385a
// 00980e78  83c404               add esp, 4
// 00980e7b  5e                   pop esi
// 00980e7c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
