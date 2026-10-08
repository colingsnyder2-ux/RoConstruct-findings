// roc 2007-03 004e2980  unit: seg_004e0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e2980
//
// 004e2980  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004e2983  8b400c               mov eax, dword ptr [eax + 0xc]
// 004e2986  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e298a  8b1490               mov edx, dword ptr [eax + edx*4]
// 004e298d  8954240c             mov dword ptr [esp + 0xc], edx
// 004e2991  8b542408             mov edx, dword ptr [esp + 8]
// 004e2995  8b1490               mov edx, dword ptr [eax + edx*4]
// 004e2998  89542408             mov dword ptr [esp + 8], edx
// 004e299c  8b542404             mov edx, dword ptr [esp + 4]
// 004e29a0  8b0490               mov eax, dword ptr [eax + edx*4]
// 004e29a3  89442404             mov dword ptr [esp + 4], eax
// 004e29a7  e9e4fdffff           jmp 0x4e2790
// library rbxgs-view/QuadVolume.cpp (function ?appendQuadFromIndexArray@LevelBuilder@View@RBX@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
