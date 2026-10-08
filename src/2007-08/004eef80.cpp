// roc 2007-08 004eef80  unit: PBBBuilder  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eef80
//
// 004eef80  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004eef83  8b400c               mov eax, dword ptr [eax + 0xc]
// 004eef86  8b542410             mov edx, dword ptr [esp + 0x10]
// 004eef8a  8b1490               mov edx, dword ptr [eax + edx*4]
// 004eef8d  89542410             mov dword ptr [esp + 0x10], edx
// 004eef91  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004eef95  8b1490               mov edx, dword ptr [eax + edx*4]
// 004eef98  8954240c             mov dword ptr [esp + 0xc], edx
// 004eef9c  8b542408             mov edx, dword ptr [esp + 8]
// 004eefa0  8b1490               mov edx, dword ptr [eax + edx*4]
// 004eefa3  89542408             mov dword ptr [esp + 8], edx
// 004eefa7  8b542404             mov edx, dword ptr [esp + 4]
// 004eefab  8b0490               mov eax, dword ptr [eax + edx*4]
// 004eefae  89442404             mov dword ptr [esp + 4], eax
// 004eefb2  e979feffff           jmp 0x4eee30
// library rbxgs-view/QuadVolume.cpp (function ?appendQuadFromIndexArray@LevelBuilder@View@RBX@@IAEXHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
