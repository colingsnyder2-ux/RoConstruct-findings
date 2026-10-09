// roc 2009-12 0062e910  unit: RBX::Time::W4SampleMethod::?$EnumDesc  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062e910
//
// 0062e910  6aff                 push -1
// 0062e912  68b0fc9300           push 0x93fcb0
// 0062e917  64a100000000         mov eax, dword ptr fs:[0]
// 0062e91d  50                   push eax
// 0062e91e  64892500000000       mov dword ptr fs:[0], esp
// 0062e925  83ec0c               sub esp, 0xc
// 0062e928  56                   push esi
// 0062e929  8bf1                 mov esi, ecx
// 0062e92b  6a04                 push 4
// 0062e92d  89742408             mov dword ptr [esp + 8], esi
// 0062e931  e82a4f1c00           call 0x7f3860
// 0062e936  83c404               add esp, 4
// 0062e939  85c0                 test eax, eax
// 0062e93b  7404                 je 0x62e941
// 0062e93d  8930                 mov dword ptr [eax], esi
// 0062e93f  eb02                 jmp 0x62e943
// 0062e941  33c0                 xor eax, eax
// 0062e943  8906                 mov dword ptr [esi], eax
// 0062e945  8d4c2408             lea ecx, [esp + 8]
// 0062e949  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0062e951  e8cabd0700           call 0x6aa720
// 0062e956  50                   push eax
// 0062e957  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062e95b  50                   push eax
// 0062e95c  8bce                 mov ecx, esi
// 0062e95e  c644242001           mov byte ptr [esp + 0x20], 1
// 0062e963  e888fbffff           call 0x62e4f0
// 0062e968  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062e96c  c644241800           mov byte ptr [esp + 0x18], 0
// 0062e971  85c9                 test ecx, ecx
// 0062e973  7408                 je 0x62e97d
// 0062e975  8b11                 mov edx, dword ptr [ecx]
// 0062e977  8b02                 mov eax, dword ptr [edx]
// 0062e979  6a01                 push 1
// 0062e97b  ffd0                 call eax
// 0062e97d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062e981  8bc6                 mov eax, esi
// 0062e983  5e                   pop esi
// 0062e984  64890d00000000       mov dword ptr fs:[0], ecx
// 0062e98b  83c418               add esp, 0x18
// 0062e98e  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
