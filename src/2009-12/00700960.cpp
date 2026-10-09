// roc 2009-12 00700960  unit: RBX::VTimerService::?$FactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00700960
//
// 00700960  55                   push ebp
// 00700961  8bec                 mov ebp, esp
// 00700963  6aff                 push -1
// 00700965  68d0c89400           push 0x94c8d0
// 0070096a  64a100000000         mov eax, dword ptr fs:[0]
// 00700970  50                   push eax
// 00700971  64892500000000       mov dword ptr fs:[0], esp
// 00700978  83ec08               sub esp, 8
// 0070097b  53                   push ebx
// 0070097c  56                   push esi
// 0070097d  57                   push edi
// 0070097e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00700981  6a30                 push 0x30
// 00700983  e8d82e0f00           call 0x7f3860
// 00700988  8bf0                 mov esi, eax
// 0070098a  83c404               add esp, 4
// 0070098d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00700990  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00700997  85f6                 test esi, esi
// 00700999  7405                 je 0x7009a0
// 0070099b  8b4508               mov eax, dword ptr [ebp + 8]
// 0070099e  8906                 mov dword ptr [esi], eax
// 007009a0  8d4604               lea eax, [esi + 4]
// 007009a3  85c0                 test eax, eax
// 007009a5  7405                 je 0x7009ac
// 007009a7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 007009aa  8908                 mov dword ptr [eax], ecx
// 007009ac  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007009af  52                   push edx
// 007009b0  8d4608               lea eax, [esi + 8]
// 007009b3  50                   push eax
// 007009b4  e8b7feffff           call 0x700870
// 007009b9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007009bc  83c408               add esp, 8
// 007009bf  5f                   pop edi
// 007009c0  8bc6                 mov eax, esi
// 007009c2  5e                   pop esi
// 007009c3  64890d00000000       mov dword ptr fs:[0], ecx
// 007009ca  5b                   pop ebx
// 007009cb  8be5                 mov esp, ebp
// 007009cd  5d                   pop ebp
// 007009ce  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
