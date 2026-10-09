// roc 2009-12 0097ee30  unit: seg_00970000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097ee30
//
// 0097ee30  8b0d04cdb700         mov ecx, dword ptr [0xb7cd04]
// 0097ee36  56                   push esi
// 0097ee37  8bf1                 mov esi, ecx
// 0097ee39  85c9                 test ecx, ecx
// 0097ee3b  740e                 je 0x97ee4b
// 0097ee3d  e86e0bb1ff           call 0x48f9b0
// 0097ee42  56                   push esi
// 0097ee43  e8124ae7ff           call 0x7f385a
// 0097ee48  83c404               add esp, 4
// 0097ee4b  5e                   pop esi
// 0097ee4c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
