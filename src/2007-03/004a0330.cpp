// roc 2007-03 004a0330  unit: seg_004a0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a0330
//
// 004a0330  83ec10               sub esp, 0x10
// 004a0333  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a0337  53                   push ebx
// 004a0338  55                   push ebp
// 004a0339  56                   push esi
// 004a033a  57                   push edi
// 004a033b  8bf1                 mov esi, ecx
// 004a033d  50                   push eax
// 004a033e  8d4c2414             lea ecx, [esp + 0x14]
// 004a0342  51                   push ecx
// 004a0343  8bce                 mov ecx, esi
// 004a0345  e8a62d1700           call 0x6130f0
// 004a034a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004a034e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004a0352  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004a0356  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a035a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004a0362  8b542424             mov edx, dword ptr [esp + 0x24]
// 004a0366  52                   push edx
// 004a0367  8d442428             lea eax, [esp + 0x28]
// 004a036b  50                   push eax
// 004a036c  57                   push edi
// 004a036d  53                   push ebx
// 004a036e  55                   push ebp
// 004a036f  51                   push ecx
// 004a0370  e8db2f1700           call 0x613350
// 004a0375  8b542428             mov edx, dword ptr [esp + 0x28]
// 004a0379  83c418               add esp, 0x18
// 004a037c  57                   push edi
// 004a037d  53                   push ebx
// 004a037e  55                   push ebp
// 004a037f  52                   push edx
// 004a0380  8d442420             lea eax, [esp + 0x20]
// 004a0384  50                   push eax
// 004a0385  8bce                 mov ecx, esi
// 004a0387  e8c498f9ff           call 0x439c50
// 004a038c  8b442424             mov eax, dword ptr [esp + 0x24]
// 004a0390  5f                   pop edi
// 004a0391  5e                   pop esi
// 004a0392  5d                   pop ebp
// 004a0393  5b                   pop ebx
// 004a0394  83c410               add esp, 0x10
// 004a0397  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@QAEIABQAVClump@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
