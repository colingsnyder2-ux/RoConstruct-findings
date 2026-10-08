// roc 2008-06 005d6bf0  unit: RBX::VTimerService::?$FactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d6bf0
//
// 005d6bf0  55                   push ebp
// 005d6bf1  8bec                 mov ebp, esp
// 005d6bf3  6aff                 push -1
// 005d6bf5  68505c7d00           push 0x7d5c50
// 005d6bfa  64a100000000         mov eax, dword ptr fs:[0]
// 005d6c00  50                   push eax
// 005d6c01  64892500000000       mov dword ptr fs:[0], esp
// 005d6c08  83ec08               sub esp, 8
// 005d6c0b  53                   push ebx
// 005d6c0c  56                   push esi
// 005d6c0d  57                   push edi
// 005d6c0e  8965f0               mov dword ptr [ebp - 0x10], esp
// 005d6c11  6a30                 push 0x30
// 005d6c13  e8089d0c00           call 0x6a0920
// 005d6c18  8bf0                 mov esi, eax
// 005d6c1a  83c404               add esp, 4
// 005d6c1d  8975ec               mov dword ptr [ebp - 0x14], esi
// 005d6c20  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005d6c27  85f6                 test esi, esi
// 005d6c29  7405                 je 0x5d6c30
// 005d6c2b  8b4508               mov eax, dword ptr [ebp + 8]
// 005d6c2e  8906                 mov dword ptr [esi], eax
// 005d6c30  8d4604               lea eax, [esi + 4]
// 005d6c33  85c0                 test eax, eax
// 005d6c35  7405                 je 0x5d6c3c
// 005d6c37  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005d6c3a  8908                 mov dword ptr [eax], ecx
// 005d6c3c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005d6c3f  52                   push edx
// 005d6c40  8d4608               lea eax, [esi + 8]
// 005d6c43  50                   push eax
// 005d6c44  e817ffffff           call 0x5d6b60
// 005d6c49  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005d6c4c  83c408               add esp, 8
// 005d6c4f  5f                   pop edi
// 005d6c50  8bc6                 mov eax, esi
// 005d6c52  5e                   pop esi
// 005d6c53  64890d00000000       mov dword ptr fs:[0], ecx
// 005d6c5a  5b                   pop ebx
// 005d6c5b  8be5                 mov esp, ebp
// 005d6c5d  5d                   pop ebp
// 005d6c5e  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
