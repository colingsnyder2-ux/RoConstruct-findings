// roc 2009-06 0061a880  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061a880
//
// 0061a880  6aff                 push -1
// 0061a882  6850838600           push 0x868350
// 0061a887  64a100000000         mov eax, dword ptr fs:[0]
// 0061a88d  50                   push eax
// 0061a88e  64892500000000       mov dword ptr fs:[0], esp
// 0061a895  83ec0c               sub esp, 0xc
// 0061a898  56                   push esi
// 0061a899  8bf1                 mov esi, ecx
// 0061a89b  6a04                 push 4
// 0061a89d  89742408             mov dword ptr [esp + 8], esi
// 0061a8a1  e892e10f00           call 0x718a38
// 0061a8a6  83c404               add esp, 4
// 0061a8a9  85c0                 test eax, eax
// 0061a8ab  7404                 je 0x61a8b1
// 0061a8ad  8930                 mov dword ptr [eax], esi
// 0061a8af  eb02                 jmp 0x61a8b3
// 0061a8b1  33c0                 xor eax, eax
// 0061a8b3  8906                 mov dword ptr [esi], eax
// 0061a8b5  8d4c2408             lea ecx, [esp + 8]
// 0061a8b9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0061a8c1  e83a1b0200           call 0x63c400
// 0061a8c6  50                   push eax
// 0061a8c7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061a8cb  50                   push eax
// 0061a8cc  8bce                 mov ecx, esi
// 0061a8ce  c644242001           mov byte ptr [esp + 0x20], 1
// 0061a8d3  e8b8faffff           call 0x61a390
// 0061a8d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061a8dc  c644241800           mov byte ptr [esp + 0x18], 0
// 0061a8e1  85c9                 test ecx, ecx
// 0061a8e3  7408                 je 0x61a8ed
// 0061a8e5  8b11                 mov edx, dword ptr [ecx]
// 0061a8e7  8b02                 mov eax, dword ptr [edx]
// 0061a8e9  6a01                 push 1
// 0061a8eb  ffd0                 call eax
// 0061a8ed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061a8f1  8bc6                 mov eax, esi
// 0061a8f3  5e                   pop esi
// 0061a8f4  64890d00000000       mov dword ptr fs:[0], ecx
// 0061a8fb  83c418               add esp, 0x18
// 0061a8fe  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
