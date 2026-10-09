// roc 2009-12 0093e9a8  unit: seg_00930000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0093e9a8
//
// 0093e9a8  6820cc5c00           push 0x5ccc20
// 0093e9ad  6a02                 push 2
// 0093e9af  6a04                 push 4
// 0093e9b1  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0093e9b4  83c008               add eax, 8
// 0093e9b7  50                   push eax
// 0093e9b8  e8e75febff           call 0x7f49a4
// 0093e9bd  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function __unwindfunclet$??1ToneMap@G3D@@QAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
