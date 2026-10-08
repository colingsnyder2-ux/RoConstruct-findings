// roc 2008-06 00500fd0  unit: RBX::ViewNew::PBBBuilder  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00500fd0
//
// 00500fd0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00500fd3  8b400c               mov eax, dword ptr [eax + 0xc]
// 00500fd6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00500fda  8b1490               mov edx, dword ptr [eax + edx*4]
// 00500fdd  8954240c             mov dword ptr [esp + 0xc], edx
// 00500fe1  8b542408             mov edx, dword ptr [esp + 8]
// 00500fe5  8b1490               mov edx, dword ptr [eax + edx*4]
// 00500fe8  89542408             mov dword ptr [esp + 8], edx
// 00500fec  8b542404             mov edx, dword ptr [esp + 4]
// 00500ff0  8b0490               mov eax, dword ptr [eax + edx*4]
// 00500ff3  89442404             mov dword ptr [esp + 4], eax
// 00500ff7  e9e4fdffff           jmp 0x500de0
// library rbxgs-view/QuadVolume.cpp (function ?appendQuadFromIndexArray@LevelBuilder@View@RBX@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
