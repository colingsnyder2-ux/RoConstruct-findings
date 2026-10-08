// roc 2007-08 0076bfe8  unit: seg_00760000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076bfe8
//
// 0076bfe8  68f0374600           push 0x4637f0
// 0076bfed  6a02                 push 2
// 0076bfef  6a04                 push 4
// 0076bff1  8b4580               mov eax, dword ptr [ebp - 0x80]
// 0076bff4  83c008               add eax, 8
// 0076bff7  50                   push eax
// 0076bff8  e8fa4aecff           call 0x630af7
// 0076bffd  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function __unwindfunclet$??0ToneMap@G3D@@QAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
