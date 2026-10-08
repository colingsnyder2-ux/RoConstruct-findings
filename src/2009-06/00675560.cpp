// roc 2009-06 00675560  unit: RBX::VTimerService::?$FactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00675560
//
// 00675560  55                   push ebp
// 00675561  8bec                 mov ebp, esp
// 00675563  6aff                 push -1
// 00675565  6860d08600           push 0x86d060
// 0067556a  64a100000000         mov eax, dword ptr fs:[0]
// 00675570  50                   push eax
// 00675571  64892500000000       mov dword ptr fs:[0], esp
// 00675578  83ec08               sub esp, 8
// 0067557b  53                   push ebx
// 0067557c  56                   push esi
// 0067557d  57                   push edi
// 0067557e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00675581  6a30                 push 0x30
// 00675583  e8b0340a00           call 0x718a38
// 00675588  8bf0                 mov esi, eax
// 0067558a  83c404               add esp, 4
// 0067558d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00675590  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00675597  85f6                 test esi, esi
// 00675599  7405                 je 0x6755a0
// 0067559b  8b4508               mov eax, dword ptr [ebp + 8]
// 0067559e  8906                 mov dword ptr [esi], eax
// 006755a0  8d4604               lea eax, [esi + 4]
// 006755a3  85c0                 test eax, eax
// 006755a5  7405                 je 0x6755ac
// 006755a7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006755aa  8908                 mov dword ptr [eax], ecx
// 006755ac  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006755af  52                   push edx
// 006755b0  8d4608               lea eax, [esi + 8]
// 006755b3  50                   push eax
// 006755b4  e817ffffff           call 0x6754d0
// 006755b9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006755bc  83c408               add esp, 8
// 006755bf  5f                   pop edi
// 006755c0  8bc6                 mov eax, esi
// 006755c2  5e                   pop esi
// 006755c3  64890d00000000       mov dword ptr fs:[0], ecx
// 006755ca  5b                   pop ebx
// 006755cb  8be5                 mov esp, ebp
// 006755cd  5d                   pop ebp
// 006755ce  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
