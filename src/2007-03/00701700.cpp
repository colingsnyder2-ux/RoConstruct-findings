// roc 2007-03 00701700  unit: seg_00700000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00701700
//
// 00701700  8bc1                 mov eax, ecx
// 00701702  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00701706  c70020d17d00         mov dword ptr [eax], 0x7dd120
// 0070170c  894804               mov dword ptr [eax + 4], ecx
// 0070170f  c20400               ret 4
// library rbxgs/humanoid\Balancing.cpp (function ??0State@Humanoid@RBX@@IAE@PAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
