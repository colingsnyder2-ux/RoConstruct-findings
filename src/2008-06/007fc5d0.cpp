// roc 2008-06 007fc5d0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc5d0
//
// 007fc5d0  8b0de0289700         mov ecx, dword ptr [0x9728e0]
// 007fc5d6  85c9                 test ecx, ecx
// 007fc5d8  7412                 je 0x7fc5ec
// 007fc5da  56                   push esi
// 007fc5db  8bf1                 mov esi, ecx
// 007fc5dd  e8ae95d0ff           call 0x505b90
// 007fc5e2  56                   push esi
// 007fc5e3  e89240eaff           call 0x6a067a
// 007fc5e8  83c404               add esp, 4
// 007fc5eb  5e                   pop esi
// 007fc5ec  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
