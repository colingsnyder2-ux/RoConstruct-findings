// roc 2007-03 005bf3f0  unit: seg_005b0000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bf3f0
//
// 005bf3f0  6aff                 push -1
// 005bf3f2  68a8417500           push 0x7541a8
// 005bf3f7  64a100000000         mov eax, dword ptr fs:[0]
// 005bf3fd  50                   push eax
// 005bf3fe  64892500000000       mov dword ptr fs:[0], esp
// 005bf405  51                   push ecx
// 005bf406  53                   push ebx
// 005bf407  55                   push ebp
// 005bf408  56                   push esi
// 005bf409  57                   push edi
// 005bf40a  8bf9                 mov edi, ecx
// 005bf40c  6a10                 push 0x10
// 005bf40e  897c2414             mov dword ptr [esp + 0x14], edi
// 005bf412  e8f1ec0500           call 0x61e108
// 005bf417  33db                 xor ebx, ebx
// 005bf419  83c404               add esp, 4
// 005bf41c  3bc3                 cmp eax, ebx
// 005bf41e  740d                 je 0x5bf42d
// 005bf420  895804               mov dword ptr [eax + 4], ebx
// 005bf423  895808               mov dword ptr [eax + 8], ebx
// 005bf426  88580c               mov byte ptr [eax + 0xc], bl
// 005bf429  8bf0                 mov esi, eax
// 005bf42b  eb02                 jmp 0x5bf42f
// 005bf42d  33f6                 xor esi, esi
// 005bf42f  8d6f04               lea ebp, [edi + 4]
// 005bf432  56                   push esi
// 005bf433  8bcd                 mov ecx, ebp
// 005bf435  8937                 mov dword ptr [edi], esi
// 005bf437  e8e4f6ffff           call 0x5beb20
// 005bf43c  56                   push esi
// 005bf43d  56                   push esi
// 005bf43e  55                   push ebp
// 005bf43f  e87c890d00           call 0x697dc0
// 005bf444  83c40c               add esp, 0xc
// 005bf447  8b442424             mov eax, dword ptr [esp + 0x24]
// 005bf44b  50                   push eax
// 005bf44c  8d4f08               lea ecx, [edi + 8]
// 005bf44f  895c2420             mov dword ptr [esp + 0x20], ebx
// 005bf453  e888d0faff           call 0x56c4e0
// 005bf458  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bf45c  8bc7                 mov eax, edi
// 005bf45e  5f                   pop edi
// 005bf45f  5e                   pop esi
// 005bf460  5d                   pop ebp
// 005bf461  5b                   pop ebx
// 005bf462  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf469  83c410               add esp, 0x10
// 005bf46c  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
