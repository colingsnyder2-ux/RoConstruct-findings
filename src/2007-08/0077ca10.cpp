// roc 2007-08 0077ca10  unit: seg_00770000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ca10
//
// 0077ca10  8b0db0828c00         mov ecx, dword ptr [0x8c82b0]
// 0077ca16  85c9                 test ecx, ecx
// 0077ca18  56                   push esi
// 0077ca19  8bf1                 mov esi, ecx
// 0077ca1b  740e                 je 0x77ca2b
// 0077ca1d  e80e7deaff           call 0x624730
// 0077ca22  56                   push esi
// 0077ca23  e83a32ebff           call 0x62fc62
// 0077ca28  83c404               add esp, 4
// 0077ca2b  5e                   pop esi
// 0077ca2c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
