// roc 2008-06 008019b0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008019b0
//
// 008019b0  8b0dd0f39700         mov ecx, dword ptr [0x97f3d0]
// 008019b6  85c9                 test ecx, ecx
// 008019b8  7412                 je 0x8019cc
// 008019ba  56                   push esi
// 008019bb  8bf1                 mov esi, ecx
// 008019bd  e80e41d0ff           call 0x505ad0
// 008019c2  56                   push esi
// 008019c3  e8b2ece9ff           call 0x6a067a
// 008019c8  83c404               add esp, 4
// 008019cb  5e                   pop esi
// 008019cc  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
