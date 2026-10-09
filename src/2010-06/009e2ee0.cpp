// roc 2010-06 009e2ee0  unit: seg_009e0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2ee0
//
// 009e2ee0  8b0ddc08bb00         mov ecx, dword ptr [0xbb08dc]
// 009e2ee6  56                   push esi
// 009e2ee7  8bf1                 mov esi, ecx
// 009e2ee9  85c9                 test ecx, ecx
// 009e2eeb  740e                 je 0x9e2efb
// 009e2eed  e8eebfb0ff           call 0x4eeee0
// 009e2ef2  56                   push esi
// 009e2ef3  e8a24adcff           call 0x7a799a
// 009e2ef8  83c404               add esp, 4
// 009e2efb  5e                   pop esi
// 009e2efc  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
