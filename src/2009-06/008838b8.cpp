// roc 2009-06 008838b8  unit: seg_00880000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008838b8
//
// 008838b8  6860d14900           push 0x49d160
// 008838bd  6a02                 push 2
// 008838bf  6a04                 push 4
// 008838c1  8b4580               mov eax, dword ptr [ebp - 0x80]
// 008838c4  83c008               add eax, 8
// 008838c7  50                   push eax
// 008838c8  e8a962e9ff           call 0x719b76
// 008838cd  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function __unwindfunclet$??0ToneMap@G3D@@QAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
