// roc 2008-06 00589c40  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00589c40
//
// 00589c40  6aff                 push -1
// 00589c42  6890157d00           push 0x7d1590
// 00589c47  64a100000000         mov eax, dword ptr fs:[0]
// 00589c4d  50                   push eax
// 00589c4e  64892500000000       mov dword ptr fs:[0], esp
// 00589c55  83ec0c               sub esp, 0xc
// 00589c58  56                   push esi
// 00589c59  8bf1                 mov esi, ecx
// 00589c5b  6a04                 push 4
// 00589c5d  89742408             mov dword ptr [esp + 8], esi
// 00589c61  e8ba6c1100           call 0x6a0920
// 00589c66  83c404               add esp, 4
// 00589c69  85c0                 test eax, eax
// 00589c6b  7404                 je 0x589c71
// 00589c6d  8930                 mov dword ptr [eax], esi
// 00589c6f  eb02                 jmp 0x589c73
// 00589c71  33c0                 xor eax, eax
// 00589c73  8906                 mov dword ptr [esi], eax
// 00589c75  8d4c2408             lea ecx, [esp + 8]
// 00589c79  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00589c81  e83aae0000           call 0x594ac0
// 00589c86  50                   push eax
// 00589c87  8b442424             mov eax, dword ptr [esp + 0x24]
// 00589c8b  50                   push eax
// 00589c8c  8bce                 mov ecx, esi
// 00589c8e  c644242001           mov byte ptr [esp + 0x20], 1
// 00589c93  e848fbffff           call 0x5897e0
// 00589c98  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00589c9c  c644241800           mov byte ptr [esp + 0x18], 0
// 00589ca1  85c9                 test ecx, ecx
// 00589ca3  7408                 je 0x589cad
// 00589ca5  8b11                 mov edx, dword ptr [ecx]
// 00589ca7  8b02                 mov eax, dword ptr [edx]
// 00589ca9  6a01                 push 1
// 00589cab  ffd0                 call eax
// 00589cad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00589cb1  8bc6                 mov eax, esi
// 00589cb3  5e                   pop esi
// 00589cb4  64890d00000000       mov dword ptr fs:[0], ecx
// 00589cbb  83c418               add esp, 0x18
// 00589cbe  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
