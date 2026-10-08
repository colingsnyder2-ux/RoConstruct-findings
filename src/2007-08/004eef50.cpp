// roc 2007-08 004eef50  unit: PBBBuilder  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eef50
//
// 004eef50  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004eef53  8b400c               mov eax, dword ptr [eax + 0xc]
// 004eef56  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004eef5a  8b1490               mov edx, dword ptr [eax + edx*4]
// 004eef5d  8954240c             mov dword ptr [esp + 0xc], edx
// 004eef61  8b542408             mov edx, dword ptr [esp + 8]
// 004eef65  8b1490               mov edx, dword ptr [eax + edx*4]
// 004eef68  89542408             mov dword ptr [esp + 8], edx
// 004eef6c  8b542404             mov edx, dword ptr [esp + 4]
// 004eef70  8b0490               mov eax, dword ptr [eax + edx*4]
// 004eef73  89442404             mov dword ptr [esp + 4], eax
// 004eef77  e9e4fdffff           jmp 0x4eed60
// library rbxgs-view/QuadVolume.cpp (function ?appendQuadFromIndexArray@LevelBuilder@View@RBX@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
