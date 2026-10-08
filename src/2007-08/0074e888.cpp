// roc 2007-08 0074e888  unit: seg_00740000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074e888
//
// 0074e888  68f0374600           push 0x4637f0
// 0074e88d  6a02                 push 2
// 0074e88f  6a04                 push 4
// 0074e891  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0074e894  83c008               add eax, 8
// 0074e897  50                   push eax
// 0074e898  e85a22eeff           call 0x630af7
// 0074e89d  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function __unwindfunclet$??1ToneMap@G3D@@QAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
