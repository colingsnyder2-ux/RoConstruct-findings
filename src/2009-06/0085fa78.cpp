// roc 2009-06 0085fa78  unit: seg_00850000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085fa78
//
// 0085fa78  6860d14900           push 0x49d160
// 0085fa7d  6a02                 push 2
// 0085fa7f  6a04                 push 4
// 0085fa81  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0085fa84  83c008               add eax, 8
// 0085fa87  50                   push eax
// 0085fa88  e8e9a0ebff           call 0x719b76
// 0085fa8d  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function __unwindfunclet$??1ToneMap@G3D@@QAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
