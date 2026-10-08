// roc 2008-06 0055d8c0  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d8c0
//
// 0055d8c0  55                   push ebp
// 0055d8c1  8bec                 mov ebp, esp
// 0055d8c3  6aff                 push -1
// 0055d8c5  68a0e87c00           push 0x7ce8a0
// 0055d8ca  64a100000000         mov eax, dword ptr fs:[0]
// 0055d8d0  50                   push eax
// 0055d8d1  64892500000000       mov dword ptr fs:[0], esp
// 0055d8d8  83ec08               sub esp, 8
// 0055d8db  53                   push ebx
// 0055d8dc  56                   push esi
// 0055d8dd  57                   push edi
// 0055d8de  8965f0               mov dword ptr [ebp - 0x10], esp
// 0055d8e1  6a30                 push 0x30
// 0055d8e3  e838301400           call 0x6a0920
// 0055d8e8  8bf0                 mov esi, eax
// 0055d8ea  83c404               add esp, 4
// 0055d8ed  8975ec               mov dword ptr [ebp - 0x14], esi
// 0055d8f0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0055d8f7  85f6                 test esi, esi
// 0055d8f9  7405                 je 0x55d900
// 0055d8fb  8b4508               mov eax, dword ptr [ebp + 8]
// 0055d8fe  8906                 mov dword ptr [esi], eax
// 0055d900  8d4604               lea eax, [esi + 4]
// 0055d903  85c0                 test eax, eax
// 0055d905  7405                 je 0x55d90c
// 0055d907  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0055d90a  8908                 mov dword ptr [eax], ecx
// 0055d90c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0055d90f  52                   push edx
// 0055d910  8d4608               lea eax, [esi + 8]
// 0055d913  50                   push eax
// 0055d914  e8b7f5ffff           call 0x55ced0
// 0055d919  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0055d91c  83c408               add esp, 8
// 0055d91f  5f                   pop edi
// 0055d920  8bc6                 mov eax, esi
// 0055d922  5e                   pop esi
// 0055d923  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d92a  5b                   pop ebx
// 0055d92b  8be5                 mov esp, ebp
// 0055d92d  5d                   pop ebp
// 0055d92e  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
