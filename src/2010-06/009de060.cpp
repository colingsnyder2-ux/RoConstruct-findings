// roc 2010-06 009de060  unit: seg_009d0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de060
//
// 009de060  8b0d1c92c000         mov ecx, dword ptr [0xc0921c]
// 009de066  56                   push esi
// 009de067  8bf1                 mov esi, ecx
// 009de069  85c9                 test ecx, ecx
// 009de06b  740e                 je 0x9de07b
// 009de06d  e89ed7b6ff           call 0x54b810
// 009de072  56                   push esi
// 009de073  e82299dcff           call 0x7a799a
// 009de078  83c404               add esp, 4
// 009de07b  5e                   pop esi
// 009de07c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
