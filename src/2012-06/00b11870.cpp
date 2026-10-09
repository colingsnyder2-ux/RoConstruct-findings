// roc 2012-06 00b11870  unit: seg_00b10000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b11870
//
// 00b11870  8b0d5c81e100         mov ecx, dword ptr [0xe1815c]
// 00b11876  56                   push esi
// 00b11877  8bf1                 mov esi, ecx
// 00b11879  85c9                 test ecx, ecx
// 00b1187b  740e                 je 0xb1188b
// 00b1187d  e8ce9e8fff           call 0x40b750
// 00b11882  56                   push esi
// 00b11883  e88c08e7ff           call 0x982114
// 00b11888  83c404               add esp, 4
// 00b1188b  5e                   pop esi
// 00b1188c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
