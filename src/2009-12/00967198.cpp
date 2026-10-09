// roc 2009-12 00967198  unit: seg_00960000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00967198
//
// 00967198  6820cc5c00           push 0x5ccc20
// 0096719d  6a02                 push 2
// 0096719f  6a04                 push 4
// 009671a1  8b4580               mov eax, dword ptr [ebp - 0x80]
// 009671a4  83c008               add eax, 8
// 009671a7  50                   push eax
// 009671a8  e8f7d7e8ff           call 0x7f49a4
// 009671ad  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function __unwindfunclet$??0ToneMap@G3D@@QAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
