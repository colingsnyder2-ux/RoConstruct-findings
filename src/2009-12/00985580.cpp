// roc 2009-12 00985580  unit: seg_00980000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00985580
//
// 00985580  8b0d14a7b300         mov ecx, dword ptr [0xb3a714]
// 00985586  56                   push esi
// 00985587  8bf1                 mov esi, ecx
// 00985589  85c9                 test ecx, ecx
// 0098558b  740e                 je 0x98559b
// 0098558d  e84eb5bbff           call 0x540ae0
// 00985592  56                   push esi
// 00985593  e8c2e2e6ff           call 0x7f385a
// 00985598  83c404               add esp, 4
// 0098559b  5e                   pop esi
// 0098559c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
