// roc 2007-03 0066ddd0  unit: seg_00660000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066ddd0
//
// 0066ddd0  8b01                 mov eax, dword ptr [ecx]
// 0066ddd2  8b5008               mov edx, dword ptr [eax + 8]
// 0066ddd5  ffe2                 jmp edx
// library rbxgs-render/Profiler.cpp (function ?thousands_sep@?$numpunct@D@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp
