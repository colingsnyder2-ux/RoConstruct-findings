// roc 2010-06 009c1588  unit: seg_009c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c1588
//
// 009c1588  68f0ca5200           push 0x52caf0
// 009c158d  6a02                 push 2
// 009c158f  6a04                 push 4
// 009c1591  8b4580               mov eax, dword ptr [ebp - 0x80]
// 009c1594  83c008               add eax, 8
// 009c1597  50                   push eax
// 009c1598  e84175deff           call 0x7a8ade
// 009c159d  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function __unwindfunclet$??0ToneMap@G3D@@QAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
