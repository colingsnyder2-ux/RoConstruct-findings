// roc 2008-06 00501000  unit: RBX::ViewNew::PBBBuilder  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501000
//
// 00501000  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00501003  8b400c               mov eax, dword ptr [eax + 0xc]
// 00501006  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050100a  8b1490               mov edx, dword ptr [eax + edx*4]
// 0050100d  89542410             mov dword ptr [esp + 0x10], edx
// 00501011  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00501015  8b1490               mov edx, dword ptr [eax + edx*4]
// 00501018  8954240c             mov dword ptr [esp + 0xc], edx
// 0050101c  8b542408             mov edx, dword ptr [esp + 8]
// 00501020  8b1490               mov edx, dword ptr [eax + edx*4]
// 00501023  89542408             mov dword ptr [esp + 8], edx
// 00501027  8b542404             mov edx, dword ptr [esp + 4]
// 0050102b  8b0490               mov eax, dword ptr [eax + edx*4]
// 0050102e  89442404             mov dword ptr [esp + 4], eax
// 00501032  e979feffff           jmp 0x500eb0
// library rbxgs-view/QuadVolume.cpp (function ?appendQuadFromIndexArray@LevelBuilder@View@RBX@@IAEXHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
