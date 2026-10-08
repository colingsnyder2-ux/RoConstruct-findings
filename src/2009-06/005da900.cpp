// roc 2009-06 005da900  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005da900
//
// 005da900  55                   push ebp
// 005da901  8bec                 mov ebp, esp
// 005da903  6aff                 push -1
// 005da905  68e0338600           push 0x8633e0
// 005da90a  64a100000000         mov eax, dword ptr fs:[0]
// 005da910  50                   push eax
// 005da911  64892500000000       mov dword ptr fs:[0], esp
// 005da918  83ec08               sub esp, 8
// 005da91b  53                   push ebx
// 005da91c  56                   push esi
// 005da91d  57                   push edi
// 005da91e  8965f0               mov dword ptr [ebp - 0x10], esp
// 005da921  6a30                 push 0x30
// 005da923  e810e11300           call 0x718a38
// 005da928  8bf0                 mov esi, eax
// 005da92a  83c404               add esp, 4
// 005da92d  8975ec               mov dword ptr [ebp - 0x14], esi
// 005da930  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005da937  85f6                 test esi, esi
// 005da939  7405                 je 0x5da940
// 005da93b  8b4508               mov eax, dword ptr [ebp + 8]
// 005da93e  8906                 mov dword ptr [esi], eax
// 005da940  8d4604               lea eax, [esi + 4]
// 005da943  85c0                 test eax, eax
// 005da945  7405                 je 0x5da94c
// 005da947  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005da94a  8908                 mov dword ptr [eax], ecx
// 005da94c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005da94f  52                   push edx
// 005da950  8d4608               lea eax, [esi + 8]
// 005da953  50                   push eax
// 005da954  e8c7f1ffff           call 0x5d9b20
// 005da959  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005da95c  83c408               add esp, 8
// 005da95f  5f                   pop edi
// 005da960  8bc6                 mov eax, esi
// 005da962  5e                   pop esi
// 005da963  64890d00000000       mov dword ptr fs:[0], ecx
// 005da96a  5b                   pop ebx
// 005da96b  8be5                 mov esp, ebp
// 005da96d  5d                   pop ebp
// 005da96e  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
