// roc 2011-06 00795250  unit: RBX::VHttp::?$sp_counted_impl_p  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00795250
//
// 00795250  55                   push ebp
// 00795251  8bec                 mov ebp, esp
// 00795253  6aff                 push -1
// 00795255  6880d99f00           push 0x9fd980
// 0079525a  64a100000000         mov eax, dword ptr fs:[0]
// 00795260  50                   push eax
// 00795261  64892500000000       mov dword ptr fs:[0], esp
// 00795268  83ec08               sub esp, 8
// 0079526b  53                   push ebx
// 0079526c  56                   push esi
// 0079526d  57                   push edi
// 0079526e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00795271  6a30                 push 0x30
// 00795273  e8e64d0700           call 0x80a05e
// 00795278  8bf0                 mov esi, eax
// 0079527a  83c404               add esp, 4
// 0079527d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00795280  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00795287  85f6                 test esi, esi
// 00795289  7405                 je 0x795290
// 0079528b  8b4508               mov eax, dword ptr [ebp + 8]
// 0079528e  8906                 mov dword ptr [esi], eax
// 00795290  8d4604               lea eax, [esi + 4]
// 00795293  85c0                 test eax, eax
// 00795295  7405                 je 0x79529c
// 00795297  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0079529a  8908                 mov dword ptr [eax], ecx
// 0079529c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0079529f  52                   push edx
// 007952a0  8d4608               lea eax, [esi + 8]
// 007952a3  50                   push eax
// 007952a4  e8b7faffff           call 0x794d60
// 007952a9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007952ac  83c408               add esp, 8
// 007952af  5f                   pop edi
// 007952b0  8bc6                 mov eax, esi
// 007952b2  5e                   pop esi
// 007952b3  64890d00000000       mov dword ptr fs:[0], ecx
// 007952ba  5b                   pop ebx
// 007952bb  8be5                 mov esp, ebp
// 007952bd  5d                   pop ebp
// 007952be  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
