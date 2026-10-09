// roc 2009-06 008978d0  unit: seg_00890000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008978d0
//
// 008978d0  8b0da846a400         mov ecx, dword ptr [0xa446a8]
// 008978d6  56                   push esi
// 008978d7  8bf1                 mov esi, ecx
// 008978d9  85c9                 test ecx, ecx
// 008978db  740e                 je 0x8978eb
// 008978dd  e8eec5d4ff           call 0x5e3ed0
// 008978e2  56                   push esi
// 008978e3  e84a11e8ff           call 0x718a32
// 008978e8  83c404               add esp, 4
// 008978eb  5e                   pop esi
// 008978ec  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
