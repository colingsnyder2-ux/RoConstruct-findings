// roc 2007-03 004e29b0  unit: seg_004e0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e29b0
//
// 004e29b0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004e29b3  8b400c               mov eax, dword ptr [eax + 0xc]
// 004e29b6  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e29ba  8b1490               mov edx, dword ptr [eax + edx*4]
// 004e29bd  89542410             mov dword ptr [esp + 0x10], edx
// 004e29c1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e29c5  8b1490               mov edx, dword ptr [eax + edx*4]
// 004e29c8  8954240c             mov dword ptr [esp + 0xc], edx
// 004e29cc  8b542408             mov edx, dword ptr [esp + 8]
// 004e29d0  8b1490               mov edx, dword ptr [eax + edx*4]
// 004e29d3  89542408             mov dword ptr [esp + 8], edx
// 004e29d7  8b542404             mov edx, dword ptr [esp + 4]
// 004e29db  8b0490               mov eax, dword ptr [eax + edx*4]
// 004e29de  89442404             mov dword ptr [esp + 4], eax
// 004e29e2  e979feffff           jmp 0x4e2860
// library rbxgs-view/QuadVolume.cpp (function ?appendQuadFromIndexArray@LevelBuilder@View@RBX@@IAEXHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
