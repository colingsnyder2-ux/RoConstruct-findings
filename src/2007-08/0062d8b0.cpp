// roc 2007-08 0062d8b0  unit: RBX::Flying  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062d8b0
//
// 0062d8b0  d90538f77900         fld dword ptr [0x79f738]
// 0062d8b6  8b442404             mov eax, dword ptr [esp + 4]
// 0062d8ba  56                   push esi
// 0062d8bb  83ec08               sub esp, 8
// 0062d8be  d95c2404             fstp dword ptr [esp + 4]
// 0062d8c2  8bf1                 mov esi, ecx
// 0062d8c4  d905702b7c00         fld dword ptr [0x7c2b70]
// 0062d8ca  d91c24               fstp dword ptr [esp]
// 0062d8cd  50                   push eax
// 0062d8ce  e84d8dffff           call 0x626620
// 0062d8d3  d9ee                 fldz 
// 0062d8d5  d95e28               fstp dword ptr [esi + 0x28]
// 0062d8d8  c706044d7c00         mov dword ptr [esi], 0x7c4d04
// 0062d8de  c74608fc4c7c00       mov dword ptr [esi + 8], 0x7c4cfc
// 0062d8e5  8bc6                 mov eax, esi
// 0062d8e7  5e                   pop esi
// 0062d8e8  c20400               ret 4
// library rbxgs/humanoid\Flying.cpp (function ??0Flying@RBX@@IAE@PAVHumanoid@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Flying.cpp
