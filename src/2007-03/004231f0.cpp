// roc 2007-03 004231f0  unit: seg_00420000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004231f0
//
// 004231f0  83ec10               sub esp, 0x10
// 004231f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 004231f7  53                   push ebx
// 004231f8  55                   push ebp
// 004231f9  56                   push esi
// 004231fa  57                   push edi
// 004231fb  8bf1                 mov esi, ecx
// 004231fd  50                   push eax
// 004231fe  8d4c2414             lea ecx, [esp + 0x14]
// 00423202  51                   push ecx
// 00423203  8bce                 mov ecx, esi
// 00423205  e8762b1400           call 0x565d80
// 0042320a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0042320e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00423212  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00423216  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042321a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00423222  8b542424             mov edx, dword ptr [esp + 0x24]
// 00423226  52                   push edx
// 00423227  8d442428             lea eax, [esp + 0x28]
// 0042322b  50                   push eax
// 0042322c  57                   push edi
// 0042322d  53                   push ebx
// 0042322e  55                   push ebp
// 0042322f  51                   push ecx
// 00423230  e8db12feff           call 0x404510
// 00423235  8b542428             mov edx, dword ptr [esp + 0x28]
// 00423239  83c418               add esp, 0x18
// 0042323c  57                   push edi
// 0042323d  53                   push ebx
// 0042323e  55                   push ebp
// 0042323f  52                   push edx
// 00423240  8d442420             lea eax, [esp + 0x20]
// 00423244  50                   push eax
// 00423245  8bce                 mov ecx, esi
// 00423247  e8c4a70200           call 0x44da10
// 0042324c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00423250  5f                   pop edi
// 00423251  5e                   pop esi
// 00423252  5d                   pop ebp
// 00423253  5b                   pop ebx
// 00423254  83c410               add esp, 0x10
// 00423257  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@QAEIABQAVClump@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
