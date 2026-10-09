// roc 2009-06 0089a0f0  unit: seg_00890000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a0f0
//
// 0089a0f0  8b0d60d9a000         mov ecx, dword ptr [0xa0d960]
// 0089a0f6  56                   push esi
// 0089a0f7  8bf1                 mov esi, ecx
// 0089a0f9  85c9                 test ecx, ecx
// 0089a0fb  740e                 je 0x89a10b
// 0089a0fd  e85e73c3ff           call 0x4d1460
// 0089a102  56                   push esi
// 0089a103  e82ae9e7ff           call 0x718a32
// 0089a108  83c404               add esp, 4
// 0089a10b  5e                   pop esi
// 0089a10c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
