// roc 2011-06 00a30a20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30a20
//
// 00a30a20  8b0d4c24cb00         mov ecx, dword ptr [0xcb244c]
// 00a30a26  56                   push esi
// 00a30a27  8bf1                 mov esi, ecx
// 00a30a29  85c9                 test ecx, ecx
// 00a30a2b  740e                 je 0xa30a3b
// 00a30a2d  e85e969dff           call 0x40a090
// 00a30a32  56                   push esi
// 00a30a33  e82096ddff           call 0x80a058
// 00a30a38  83c404               add esp, 4
// 00a30a3b  5e                   pop esi
// 00a30a3c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
