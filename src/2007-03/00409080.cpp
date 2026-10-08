// roc 2007-03 00409080  unit: seg_00400000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00409080
//
// 00409080  56                   push esi
// 00409081  8bf1                 mov esi, ecx
// 00409083  807e0400             cmp byte ptr [esi + 4], 0
// 00409087  740b                 je 0x409094
// 00409089  8b0e                 mov ecx, dword ptr [esi]
// 0040908b  e810da3100           call 0x726aa0
// 00409090  c6460400             mov byte ptr [esi + 4], 0
// 00409094  5e                   pop esi
// 00409095  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??1?$scoped_lock@Vrecursive_mutex@boost@@@thread@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
