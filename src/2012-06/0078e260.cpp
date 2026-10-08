// roc 2012-06 0078e260  unit: RBX::VInstance::?$NonFactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0078e260
//
// 0078e260  55                   push ebp
// 0078e261  8bec                 mov ebp, esp
// 0078e263  6aff                 push -1
// 0078e265  68705aac00           push 0xac5a70
// 0078e26a  64a100000000         mov eax, dword ptr fs:[0]
// 0078e270  50                   push eax
// 0078e271  64892500000000       mov dword ptr fs:[0], esp
// 0078e278  83ec08               sub esp, 8
// 0078e27b  53                   push ebx
// 0078e27c  56                   push esi
// 0078e27d  57                   push edi
// 0078e27e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0078e281  6a30                 push 0x30
// 0078e283  e8923e1f00           call 0x98211a
// 0078e288  8bf0                 mov esi, eax
// 0078e28a  83c404               add esp, 4
// 0078e28d  8975ec               mov dword ptr [ebp - 0x14], esi
// 0078e290  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0078e297  85f6                 test esi, esi
// 0078e299  7405                 je 0x78e2a0
// 0078e29b  8b4508               mov eax, dword ptr [ebp + 8]
// 0078e29e  8906                 mov dword ptr [esi], eax
// 0078e2a0  8d4604               lea eax, [esi + 4]
// 0078e2a3  85c0                 test eax, eax
// 0078e2a5  7405                 je 0x78e2ac
// 0078e2a7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0078e2aa  8908                 mov dword ptr [eax], ecx
// 0078e2ac  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0078e2af  52                   push edx
// 0078e2b0  8d4608               lea eax, [esi + 8]
// 0078e2b3  50                   push eax
// 0078e2b4  e877120200           call 0x7af530
// 0078e2b9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0078e2bc  83c408               add esp, 8
// 0078e2bf  5f                   pop edi
// 0078e2c0  8bc6                 mov eax, esi
// 0078e2c2  5e                   pop esi
// 0078e2c3  64890d00000000       mov dword ptr fs:[0], ecx
// 0078e2ca  5b                   pop ebx
// 0078e2cb  8be5                 mov esp, ebp
// 0078e2cd  5d                   pop ebp
// 0078e2ce  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
