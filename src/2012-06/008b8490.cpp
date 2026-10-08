// roc 2012-06 008b8490  unit: seg_008b0000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008b8490
//
// 008b8490  55                   push ebp
// 008b8491  8bec                 mov ebp, esp
// 008b8493  6aff                 push -1
// 008b8495  68b048ad00           push 0xad48b0
// 008b849a  64a100000000         mov eax, dword ptr fs:[0]
// 008b84a0  50                   push eax
// 008b84a1  64892500000000       mov dword ptr fs:[0], esp
// 008b84a8  83ec08               sub esp, 8
// 008b84ab  53                   push ebx
// 008b84ac  56                   push esi
// 008b84ad  57                   push edi
// 008b84ae  8965f0               mov dword ptr [ebp - 0x10], esp
// 008b84b1  6a30                 push 0x30
// 008b84b3  e8629c0c00           call 0x98211a
// 008b84b8  8bf0                 mov esi, eax
// 008b84ba  83c404               add esp, 4
// 008b84bd  8975ec               mov dword ptr [ebp - 0x14], esi
// 008b84c0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 008b84c7  85f6                 test esi, esi
// 008b84c9  7405                 je 0x8b84d0
// 008b84cb  8b4508               mov eax, dword ptr [ebp + 8]
// 008b84ce  8906                 mov dword ptr [esi], eax
// 008b84d0  8d4604               lea eax, [esi + 4]
// 008b84d3  85c0                 test eax, eax
// 008b84d5  7405                 je 0x8b84dc
// 008b84d7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 008b84da  8908                 mov dword ptr [eax], ecx
// 008b84dc  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008b84df  52                   push edx
// 008b84e0  8d4608               lea eax, [esi + 8]
// 008b84e3  50                   push eax
// 008b84e4  e827faffff           call 0x8b7f10
// 008b84e9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 008b84ec  83c408               add esp, 8
// 008b84ef  5f                   pop edi
// 008b84f0  8bc6                 mov eax, esi
// 008b84f2  5e                   pop esi
// 008b84f3  64890d00000000       mov dword ptr fs:[0], ecx
// 008b84fa  5b                   pop ebx
// 008b84fb  8be5                 mov esp, ebp
// 008b84fd  5d                   pop ebp
// 008b84fe  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
