// roc 2007-08 006ba5a0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ba5a0
//
// 006ba5a0  83ec10               sub esp, 0x10
// 006ba5a3  837c243000           cmp dword ptr [esp + 0x30], 0
// 006ba5a8  7442                 je 0x6ba5ec
// 006ba5aa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006ba5ae  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ba5b2  890424               mov dword ptr [esp], eax
// 006ba5b5  8b442424             mov eax, dword ptr [esp + 0x24]
// 006ba5b9  89442408             mov dword ptr [esp + 8], eax
// 006ba5bd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006ba5c1  89542404             mov dword ptr [esp + 4], edx
// 006ba5c5  8b542428             mov edx, dword ptr [esp + 0x28]
// 006ba5c9  83c2ff               add edx, -1
// 006ba5cc  f7d8                 neg eax
// 006ba5ce  1bc0                 sbb eax, eax
// 006ba5d0  83c003               add eax, 3
// 006ba5d3  50                   push eax
// 006ba5d4  89542410             mov dword ptr [esp + 0x10], edx
// 006ba5d8  e89327f8ff           call 0x63cd70
// 006ba5dd  50                   push eax
// 006ba5de  8d4c2404             lea ecx, [esp + 4]
// 006ba5e2  51                   push ecx
// 006ba5e3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006ba5e7  e8c462f7ff           call 0x6308b0
// 006ba5ec  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ba5f0  c70000000000         mov dword ptr [eax], 0
// 006ba5f6  c7400408000000       mov dword ptr [eax + 4], 8
// 006ba5fd  83c410               add esp, 0x10
// 006ba600  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawTearOffGripper@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDefaultTheme.cpp
