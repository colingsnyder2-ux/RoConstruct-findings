// from server: 100% by auto
// roc 2012-06 00a011f0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a011f0
//
// 00a011f0  83ec10               sub esp, 0x10
// 00a011f3  837c243000           cmp dword ptr [esp + 0x30], 0
// 00a011f8  7440                 je 0xa0123a
// 00a011fa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a011fe  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a01202  890424               mov dword ptr [esp], eax
// 00a01205  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a01209  89442408             mov dword ptr [esp + 8], eax
// 00a0120d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a01211  89542404             mov dword ptr [esp + 4], edx
// 00a01215  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a01219  4a                   dec edx
// 00a0121a  f7d8                 neg eax
// 00a0121c  1bc0                 sbb eax, eax
// 00a0121e  83c003               add eax, 3
// 00a01221  50                   push eax
// 00a01222  89542410             mov dword ptr [esp + 0x10], edx
// 00a01226  e86566f8ff           call 0x987890
// 00a0122b  50                   push eax
// 00a0122c  8d4c2404             lea ecx, [esp + 4]
// 00a01230  51                   push ecx
// 00a01231  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a01235  e8721cf8ff           call 0x982eac
// 00a0123a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a0123e  c70000000000         mov dword ptr [eax], 0
// 00a01244  c7400408000000       mov dword ptr [eax + 4], 8
// 00a0124b  83c410               add esp, 0x10
// 00a0124e  c22000               ret 0x20
// library xtp-15.2.1/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawTearOffGripper@CXTPDefaultTheme@@UAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDefaultTheme.cpp
