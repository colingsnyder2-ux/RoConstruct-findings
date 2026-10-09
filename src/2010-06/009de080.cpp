// roc 2010-06 009de080  unit: seg_009d0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de080
//
// 009de080  8b0d2492c000         mov ecx, dword ptr [0xc09224]
// 009de086  56                   push esi
// 009de087  8bf1                 mov esi, ecx
// 009de089  85c9                 test ecx, ecx
// 009de08b  740e                 je 0x9de09b
// 009de08d  e83ed8b6ff           call 0x54b8d0
// 009de092  56                   push esi
// 009de093  e80299dcff           call 0x7a799a
// 009de098  83c404               add esp, 4
// 009de09b  5e                   pop esi
// 009de09c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
