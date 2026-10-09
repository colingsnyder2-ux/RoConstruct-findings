// roc 2009-12 006be1c0  unit: CPropGrid::UpdateItemsJob  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006be1c0
//
// 006be1c0  55                   push ebp
// 006be1c1  8bec                 mov ebp, esp
// 006be1c3  6aff                 push -1
// 006be1c5  68e08c9400           push 0x948ce0
// 006be1ca  64a100000000         mov eax, dword ptr fs:[0]
// 006be1d0  50                   push eax
// 006be1d1  64892500000000       mov dword ptr fs:[0], esp
// 006be1d8  83ec08               sub esp, 8
// 006be1db  53                   push ebx
// 006be1dc  56                   push esi
// 006be1dd  57                   push edi
// 006be1de  8965f0               mov dword ptr [ebp - 0x10], esp
// 006be1e1  6a30                 push 0x30
// 006be1e3  e878561300           call 0x7f3860
// 006be1e8  8bf0                 mov esi, eax
// 006be1ea  83c404               add esp, 4
// 006be1ed  8975ec               mov dword ptr [ebp - 0x14], esi
// 006be1f0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006be1f7  85f6                 test esi, esi
// 006be1f9  7405                 je 0x6be200
// 006be1fb  8b4508               mov eax, dword ptr [ebp + 8]
// 006be1fe  8906                 mov dword ptr [esi], eax
// 006be200  8d4604               lea eax, [esi + 4]
// 006be203  85c0                 test eax, eax
// 006be205  7405                 je 0x6be20c
// 006be207  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006be20a  8908                 mov dword ptr [eax], ecx
// 006be20c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006be20f  52                   push edx
// 006be210  8d4608               lea eax, [esi + 8]
// 006be213  50                   push eax
// 006be214  e897f3ffff           call 0x6bd5b0
// 006be219  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006be21c  83c408               add esp, 8
// 006be21f  5f                   pop edi
// 006be220  8bc6                 mov eax, esi
// 006be222  5e                   pop esi
// 006be223  64890d00000000       mov dword ptr fs:[0], ecx
// 006be22a  5b                   pop ebx
// 006be22b  8be5                 mov esp, ebp
// 006be22d  5d                   pop ebp
// 006be22e  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
