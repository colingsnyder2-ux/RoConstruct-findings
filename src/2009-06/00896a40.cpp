// roc 2009-06 00896a40  unit: seg_00890000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896a40
//
// 00896a40  8b0dec1ca400         mov ecx, dword ptr [0xa41cec]
// 00896a46  56                   push esi
// 00896a47  8bf1                 mov esi, ecx
// 00896a49  85c9                 test ecx, ecx
// 00896a4b  740e                 je 0x896a5b
// 00896a4d  e8be28cdff           call 0x569310
// 00896a52  56                   push esi
// 00896a53  e8da1fe8ff           call 0x718a32
// 00896a58  83c404               add esp, 4
// 00896a5b  5e                   pop esi
// 00896a5c  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??__FtoneMap@?1??getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
