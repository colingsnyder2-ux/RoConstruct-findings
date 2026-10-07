// roc 2008-06 00735320  unit: XTPPaintThemes::CXTPDefaultTheme  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00735320
//
// 00735320  83ec10               sub esp, 0x10
// 00735323  837c243000           cmp dword ptr [esp + 0x30], 0
// 00735328  7440                 je 0x73536a
// 0073532a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073532e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00735332  890424               mov dword ptr [esp], eax
// 00735335  8b442424             mov eax, dword ptr [esp + 0x24]
// 00735339  89442408             mov dword ptr [esp + 8], eax
// 0073533d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00735341  89542404             mov dword ptr [esp + 4], edx
// 00735345  8b542428             mov edx, dword ptr [esp + 0x28]
// 00735349  4a                   dec edx
// 0073534a  f7d8                 neg eax
// 0073534c  1bc0                 sbb eax, eax
// 0073534e  83c003               add eax, 3
// 00735351  50                   push eax
// 00735352  89542410             mov dword ptr [esp + 0x10], edx
// 00735356  e8158df7ff           call 0x6ae070
// 0073535b  50                   push eax
// 0073535c  8d4c2404             lea ecx, [esp + 4]
// 00735360  51                   push ecx
// 00735361  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00735365  e8f4bff6ff           call 0x6a135e
// 0073536a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0073536e  c70000000000         mov dword ptr [eax], 0
// 00735374  c7400408000000       mov dword ptr [eax + 4], 8
// 0073537b  83c410               add esp, 0x10
// 0073537e  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawTearOffGripper@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
