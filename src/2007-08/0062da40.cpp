// roc 2007-08 0062da40  unit: RBX::Freefall  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062da40
//
// 0062da40  8b442404             mov eax, dword ptr [esp + 4]
// 0062da44  56                   push esi
// 0062da45  50                   push eax
// 0062da46  8bf1                 mov esi, ecx
// 0062da48  e863feffff           call 0x62d8b0
// 0062da4d  c706404d7c00         mov dword ptr [esi], 0x7c4d40
// 0062da53  c74608384d7c00       mov dword ptr [esi + 8], 0x7c4d38
// 0062da5a  8bc6                 mov eax, esi
// 0062da5c  5e                   pop esi
// 0062da5d  c20400               ret 4
// library rbxgs/humanoid\Freefall.cpp (function ??$?0PAVHumanoid@RBX@@@?$Named@VFlying@RBX@@$1?sFreefall@2@3PBDB@RBX@@QAE@PAVHumanoid@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Freefall.cpp
