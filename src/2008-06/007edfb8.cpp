// roc 2008-06 007edfb8  unit: seg_007e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007edfb8
//
// 007edfb8  68702a5000           push 0x502a70
// 007edfbd  6a02                 push 2
// 007edfbf  6a04                 push 4
// 007edfc1  8b4580               mov eax, dword ptr [ebp - 0x80]
// 007edfc4  83c008               add eax, 8
// 007edfc7  50                   push eax
// 007edfc8  e88e36ebff           call 0x6a165b
// 007edfcd  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function __unwindfunclet$??0ToneMap@G3D@@QAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
