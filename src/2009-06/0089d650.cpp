// roc 2009-06 0089d650  unit: seg_00890000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d650
//
// 0089d650  8b0d9088a500         mov ecx, dword ptr [0xa58890]
// 0089d656  56                   push esi
// 0089d657  8bf1                 mov esi, ecx
// 0089d659  85c9                 test ecx, ecx
// 0089d65b  740e                 je 0x89d66b
// 0089d65d  e8aeb5f9ff           call 0x838c10
// 0089d662  56                   push esi
// 0089d663  e8cab3e7ff           call 0x718a32
// 0089d668  83c404               add esp, 4
// 0089d66b  5e                   pop esi
// 0089d66c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
