// roc 2008-06 007cb7e8  unit: seg_007c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007cb7e8
//
// 007cb7e8  68702a5000           push 0x502a70
// 007cb7ed  6a02                 push 2
// 007cb7ef  6a04                 push 4
// 007cb7f1  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 007cb7f4  83c008               add eax, 8
// 007cb7f7  50                   push eax
// 007cb7f8  e85e5eedff           call 0x6a165b
// 007cb7fd  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function __unwindfunclet$??1ToneMap@G3D@@QAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
