// roc 2009-06 00896a20  unit: seg_00890000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896a20
//
// 00896a20  8b0de41ca400         mov ecx, dword ptr [0xa41ce4]
// 00896a26  56                   push esi
// 00896a27  8bf1                 mov esi, ecx
// 00896a29  85c9                 test ecx, ecx
// 00896a2b  740e                 je 0x896a3b
// 00896a2d  e81e28cdff           call 0x569250
// 00896a32  56                   push esi
// 00896a33  e8fa1fe8ff           call 0x718a32
// 00896a38  83c404               add esp, 4
// 00896a3b  5e                   pop esi
// 00896a3c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
