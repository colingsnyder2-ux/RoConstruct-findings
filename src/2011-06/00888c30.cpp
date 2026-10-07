// roc 2011-06 00888c30  unit: XTPPaintThemes::CXTPDefaultTheme  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00888c30
//
// 00888c30  83ec10               sub esp, 0x10
// 00888c33  837c243000           cmp dword ptr [esp + 0x30], 0
// 00888c38  7440                 je 0x888c7a
// 00888c3a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00888c3e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00888c42  890424               mov dword ptr [esp], eax
// 00888c45  8b442424             mov eax, dword ptr [esp + 0x24]
// 00888c49  89442408             mov dword ptr [esp + 8], eax
// 00888c4d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00888c51  89542404             mov dword ptr [esp + 4], edx
// 00888c55  8b542428             mov edx, dword ptr [esp + 0x28]
// 00888c59  4a                   dec edx
// 00888c5a  f7d8                 neg eax
// 00888c5c  1bc0                 sbb eax, eax
// 00888c5e  83c003               add eax, 3
// 00888c61  50                   push eax
// 00888c62  89542410             mov dword ptr [esp + 0x10], edx
// 00888c66  e84569f8ff           call 0x80f5b0
// 00888c6b  50                   push eax
// 00888c6c  8d4c2404             lea ecx, [esp + 4]
// 00888c70  51                   push ecx
// 00888c71  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00888c75  e8a621f8ff           call 0x80ae20
// 00888c7a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00888c7e  c70000000000         mov dword ptr [eax], 0
// 00888c84  c7400408000000       mov dword ptr [eax + 4], 8
// 00888c8b  83c410               add esp, 0x10
// 00888c8e  c22000               ret 0x20
// library xtp-15.2.1/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawTearOffGripper@CXTPDefaultTheme@@UAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDefaultTheme.cpp
