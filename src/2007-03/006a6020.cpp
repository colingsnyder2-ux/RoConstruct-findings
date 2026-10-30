// roc 2007-03 006a6020  unit: seg_006a0000  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a6020
//
// 006a6020  83ec10               sub esp, 0x10
// 006a6023  837c243000           cmp dword ptr [esp + 0x30], 0
// 006a6028  7442                 je 0x6a606c
// 006a602a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a602e  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a6032  890424               mov dword ptr [esp], eax
// 006a6035  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a6039  89442408             mov dword ptr [esp + 8], eax
// 006a603d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006a6041  89542404             mov dword ptr [esp + 4], edx
// 006a6045  8b542428             mov edx, dword ptr [esp + 0x28]
// 006a6049  83c2ff               add edx, -1
// 006a604c  f7d8                 neg eax
// 006a604e  1bc0                 sbb eax, eax
// 006a6050  83c003               add eax, 3
// 006a6053  50                   push eax
// 006a6054  89542410             mov dword ptr [esp + 0x10], edx
// 006a6058  e843c1f8ff           call 0x6321a0
// 006a605d  50                   push eax
// 006a605e  8d4c2404             lea ecx, [esp + 4]
// 006a6062  51                   push ecx
// 006a6063  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006a6067  e8ae8cf7ff           call 0x61ed1a
// 006a606c  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a6070  c70000000000         mov dword ptr [eax], 0
// 006a6076  c7400408000000       mov dword ptr [eax + 4], 8
// 006a607d  83c410               add esp, 0x10
// 006a6080  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawTearOffGripper@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDefaultTheme.cpp
