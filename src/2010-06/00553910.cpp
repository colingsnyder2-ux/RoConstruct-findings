// from server: 100% by auto
// roc 2010-06 00553910  unit: seg_00550000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00553910
//
// 00553910  56                   push esi
// 00553911  8bf1                 mov esi, ecx
// 00553913  8b4604               mov eax, dword ptr [esi + 4]
// 00553916  50                   push eax
// 00553917  c7460800000000       mov dword ptr [esi + 8], 0
// 0055391e  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00553925  e88672fbff           call 0x50abb0
// 0055392a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055392e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00553932  8b542414             mov edx, dword ptr [esp + 0x14]
// 00553936  894608               mov dword ptr [esi + 8], eax
// 00553939  0fafc1               imul eax, ecx
// 0055393c  0fafc2               imul eax, edx
// 0055393f  6a01                 push 1
// 00553941  50                   push eax
// 00553942  c7460400000000       mov dword ptr [esi + 4], 0
// 00553949  894e0c               mov dword ptr [esi + 0xc], ecx
// 0055394c  895610               mov dword ptr [esi + 0x10], edx
// 0055394f  e82c9fffff           call 0x54d880
// 00553954  83c40c               add esp, 0xc
// 00553957  894604               mov dword ptr [esi + 4], eax
// 0055395a  5e                   pop esi
// 0055395b  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?resize@GImage@G3D@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
