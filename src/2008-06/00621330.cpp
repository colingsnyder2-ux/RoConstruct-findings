// roc 2008-06 00621330  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00621330
//
// 00621330  6aff                 push -1
// 00621332  68e8727d00           push 0x7d72e8
// 00621337  64a100000000         mov eax, dword ptr fs:[0]
// 0062133d  50                   push eax
// 0062133e  64892500000000       mov dword ptr fs:[0], esp
// 00621345  51                   push ecx
// 00621346  8b442414             mov eax, dword ptr [esp + 0x14]
// 0062134a  56                   push esi
// 0062134b  57                   push edi
// 0062134c  8bf9                 mov edi, ecx
// 0062134e  6a04                 push 4
// 00621350  8907                 mov dword ptr [edi], eax
// 00621352  8d7704               lea esi, [edi + 4]
// 00621355  e8c6f50700           call 0x6a0920
// 0062135a  33c9                 xor ecx, ecx
// 0062135c  83c404               add esp, 4
// 0062135f  3bc1                 cmp eax, ecx
// 00621361  7404                 je 0x621367
// 00621363  8930                 mov dword ptr [eax], esi
// 00621365  eb02                 jmp 0x621369
// 00621367  33c0                 xor eax, eax
// 00621369  8906                 mov dword ptr [esi], eax
// 0062136b  894e0c               mov dword ptr [esi + 0xc], ecx
// 0062136e  894e10               mov dword ptr [esi + 0x10], ecx
// 00621371  894e14               mov dword ptr [esi + 0x14], ecx
// 00621374  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00621378  8bc7                 mov eax, edi
// 0062137a  5f                   pop edi
// 0062137b  5e                   pop esi
// 0062137c  64890d00000000       mov dword ptr fs:[0], ecx
// 00621383  83c410               add esp, 0x10
// 00621386  c20400               ret 4
// library rbxgs/script\ScriptEvent.cpp (function ??0YieldingThreads@Lua@RBX@@QAE@PAVScriptContext@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
