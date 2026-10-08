// roc 2011-06 006c2000  unit: RBX::ScriptInformationProvider  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006c2000
//
// 006c2000  55                   push ebp
// 006c2001  8bec                 mov ebp, esp
// 006c2003  6aff                 push -1
// 006c2005  6820259f00           push 0x9f2520
// 006c200a  64a100000000         mov eax, dword ptr fs:[0]
// 006c2010  50                   push eax
// 006c2011  64892500000000       mov dword ptr fs:[0], esp
// 006c2018  83ec08               sub esp, 8
// 006c201b  53                   push ebx
// 006c201c  56                   push esi
// 006c201d  57                   push edi
// 006c201e  8965f0               mov dword ptr [ebp - 0x10], esp
// 006c2021  6a30                 push 0x30
// 006c2023  e836801400           call 0x80a05e
// 006c2028  8bf0                 mov esi, eax
// 006c202a  83c404               add esp, 4
// 006c202d  8975ec               mov dword ptr [ebp - 0x14], esi
// 006c2030  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006c2037  85f6                 test esi, esi
// 006c2039  7405                 je 0x6c2040
// 006c203b  8b4508               mov eax, dword ptr [ebp + 8]
// 006c203e  8906                 mov dword ptr [esi], eax
// 006c2040  8d4604               lea eax, [esi + 4]
// 006c2043  85c0                 test eax, eax
// 006c2045  7405                 je 0x6c204c
// 006c2047  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006c204a  8908                 mov dword ptr [eax], ecx
// 006c204c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006c204f  52                   push edx
// 006c2050  8d4608               lea eax, [esi + 8]
// 006c2053  50                   push eax
// 006c2054  e817fdffff           call 0x6c1d70
// 006c2059  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006c205c  83c408               add esp, 8
// 006c205f  5f                   pop edi
// 006c2060  8bc6                 mov eax, esi
// 006c2062  5e                   pop esi
// 006c2063  64890d00000000       mov dword ptr fs:[0], ecx
// 006c206a  5b                   pop ebx
// 006c206b  8be5                 mov esp, ebp
// 006c206d  5d                   pop ebp
// 006c206e  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
