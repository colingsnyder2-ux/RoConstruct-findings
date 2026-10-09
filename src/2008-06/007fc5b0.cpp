// roc 2008-06 007fc5b0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc5b0
//
// 007fc5b0  8b0dd8289700         mov ecx, dword ptr [0x9728d8]
// 007fc5b6  85c9                 test ecx, ecx
// 007fc5b8  7412                 je 0x7fc5cc
// 007fc5ba  56                   push esi
// 007fc5bb  8bf1                 mov esi, ecx
// 007fc5bd  e80e95d0ff           call 0x505ad0
// 007fc5c2  56                   push esi
// 007fc5c3  e8b240eaff           call 0x6a067a
// 007fc5c8  83c404               add esp, 4
// 007fc5cb  5e                   pop esi
// 007fc5cc  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
