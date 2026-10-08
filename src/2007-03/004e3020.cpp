// roc 2007-03 004e3020  unit: seg_004e0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e3020
//
// 004e3020  56                   push esi
// 004e3021  8bf1                 mov esi, ecx
// 004e3023  8b4608               mov eax, dword ptr [esi + 8]
// 004e3026  85c0                 test eax, eax
// 004e3028  742c                 je 0x4e3056
// 004e302a  83c004               add eax, 4
// 004e302d  50                   push eax
// 004e302e  ff15a8d27700         call dword ptr [0x77d2a8]
// 004e3034  85c0                 test eax, eax
// 004e3036  7517                 jne 0x4e304f
// 004e3038  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e303b  e88003f8ff           call 0x4633c0
// 004e3040  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e3043  85c9                 test ecx, ecx
// 004e3045  7408                 je 0x4e304f
// 004e3047  8b01                 mov eax, dword ptr [ecx]
// 004e3049  8b10                 mov edx, dword ptr [eax]
// 004e304b  6a01                 push 1
// 004e304d  ffd2                 call edx
// 004e304f  c7460800000000       mov dword ptr [esi + 8], 0
// 004e3056  5e                   pop esi
// 004e3057  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??1BucketKey@AggregatingSceneManager@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
