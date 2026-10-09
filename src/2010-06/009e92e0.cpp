// roc 2010-06 009e92e0  unit: seg_009e0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e92e0
//
// 009e92e0  8b0d38cac200         mov ecx, dword ptr [0xc2ca38]
// 009e92e6  56                   push esi
// 009e92e7  8bf1                 mov esi, ecx
// 009e92e9  85c9                 test ecx, ecx
// 009e92eb  740e                 je 0x9e92fb
// 009e92ed  e8bea8efff           call 0x8e3bb0
// 009e92f2  56                   push esi
// 009e92f3  e8a2e6dbff           call 0x7a799a
// 009e92f8  83c404               add esp, 4
// 009e92fb  5e                   pop esi
// 009e92fc  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
