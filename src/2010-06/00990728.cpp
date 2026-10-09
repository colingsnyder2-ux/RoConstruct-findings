// roc 2010-06 00990728  unit: seg_00990000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00990728
//
// 00990728  68f0ca5200           push 0x52caf0
// 0099072d  6a02                 push 2
// 0099072f  6a04                 push 4
// 00990731  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00990734  83c008               add eax, 8
// 00990737  50                   push eax
// 00990738  e8a183e1ff           call 0x7a8ade
// 0099073d  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function __unwindfunclet$??1ToneMap@G3D@@QAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
