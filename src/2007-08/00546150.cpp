// roc 2007-08 00546150  unit: RBX::MD5HasherImpl  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00546150
//
// 00546150  55                   push ebp
// 00546151  8bec                 mov ebp, esp
// 00546153  6aff                 push -1
// 00546155  6880197500           push 0x751980
// 0054615a  64a100000000         mov eax, dword ptr fs:[0]
// 00546160  50                   push eax
// 00546161  64892500000000       mov dword ptr fs:[0], esp
// 00546168  83ec08               sub esp, 8
// 0054616b  53                   push ebx
// 0054616c  56                   push esi
// 0054616d  57                   push edi
// 0054616e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00546171  6a30                 push 0x30
// 00546173  e87e9d0e00           call 0x62fef6
// 00546178  8bf0                 mov esi, eax
// 0054617a  83c404               add esp, 4
// 0054617d  85f6                 test esi, esi
// 0054617f  8975ec               mov dword ptr [ebp - 0x14], esi
// 00546182  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00546189  7405                 je 0x546190
// 0054618b  8b4508               mov eax, dword ptr [ebp + 8]
// 0054618e  8906                 mov dword ptr [esi], eax
// 00546190  8d4604               lea eax, [esi + 4]
// 00546193  85c0                 test eax, eax
// 00546195  7405                 je 0x54619c
// 00546197  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0054619a  8908                 mov dword ptr [eax], ecx
// 0054619c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0054619f  52                   push edx
// 005461a0  8d4608               lea eax, [esi + 8]
// 005461a3  50                   push eax
// 005461a4  e827faffff           call 0x545bd0
// 005461a9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005461ac  83c408               add esp, 8
// 005461af  5f                   pop edi
// 005461b0  8bc6                 mov eax, esi
// 005461b2  5e                   pop esi
// 005461b3  64890d00000000       mov dword ptr fs:[0], ecx
// 005461ba  5b                   pop ebx
// 005461bb  8be5                 mov esp, ebp
// 005461bd  5d                   pop ebp
// 005461be  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
