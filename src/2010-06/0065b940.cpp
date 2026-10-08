// roc 2010-06 0065b940  unit: RBX::ScriptInformationProvider  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065b940
//
// 0065b940  55                   push ebp
// 0065b941  8bec                 mov ebp, esp
// 0065b943  6aff                 push -1
// 0065b945  68c0e39900           push 0x99e3c0
// 0065b94a  64a100000000         mov eax, dword ptr fs:[0]
// 0065b950  50                   push eax
// 0065b951  64892500000000       mov dword ptr fs:[0], esp
// 0065b958  83ec08               sub esp, 8
// 0065b95b  53                   push ebx
// 0065b95c  56                   push esi
// 0065b95d  57                   push edi
// 0065b95e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0065b961  6a30                 push 0x30
// 0065b963  e838c01400           call 0x7a79a0
// 0065b968  8bf0                 mov esi, eax
// 0065b96a  83c404               add esp, 4
// 0065b96d  8975ec               mov dword ptr [ebp - 0x14], esi
// 0065b970  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0065b977  85f6                 test esi, esi
// 0065b979  7405                 je 0x65b980
// 0065b97b  8b4508               mov eax, dword ptr [ebp + 8]
// 0065b97e  8906                 mov dword ptr [esi], eax
// 0065b980  8d4604               lea eax, [esi + 4]
// 0065b983  85c0                 test eax, eax
// 0065b985  7405                 je 0x65b98c
// 0065b987  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0065b98a  8908                 mov dword ptr [eax], ecx
// 0065b98c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0065b98f  52                   push edx
// 0065b990  8d4608               lea eax, [esi + 8]
// 0065b993  50                   push eax
// 0065b994  e817fbffff           call 0x65b4b0
// 0065b999  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0065b99c  83c408               add esp, 8
// 0065b99f  5f                   pop edi
// 0065b9a0  8bc6                 mov eax, esi
// 0065b9a2  5e                   pop esi
// 0065b9a3  64890d00000000       mov dword ptr fs:[0], ecx
// 0065b9aa  5b                   pop ebx
// 0065b9ab  8be5                 mov esp, ebp
// 0065b9ad  5d                   pop ebp
// 0065b9ae  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
