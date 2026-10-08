// roc 2007-08 005c44b0  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c44b0
//
// 005c44b0  6aff                 push -1
// 005c44b2  68a8137500           push 0x7513a8
// 005c44b7  64a100000000         mov eax, dword ptr fs:[0]
// 005c44bd  50                   push eax
// 005c44be  64892500000000       mov dword ptr fs:[0], esp
// 005c44c5  51                   push ecx
// 005c44c6  53                   push ebx
// 005c44c7  56                   push esi
// 005c44c8  57                   push edi
// 005c44c9  8bf1                 mov esi, ecx
// 005c44cb  6a10                 push 0x10
// 005c44cd  89742410             mov dword ptr [esp + 0x10], esi
// 005c44d1  e820ba0600           call 0x62fef6
// 005c44d6  33db                 xor ebx, ebx
// 005c44d8  83c404               add esp, 4
// 005c44db  3bc3                 cmp eax, ebx
// 005c44dd  740d                 je 0x5c44ec
// 005c44df  895804               mov dword ptr [eax + 4], ebx
// 005c44e2  895808               mov dword ptr [eax + 8], ebx
// 005c44e5  88580c               mov byte ptr [eax + 0xc], bl
// 005c44e8  8bf8                 mov edi, eax
// 005c44ea  eb02                 jmp 0x5c44ee
// 005c44ec  33ff                 xor edi, edi
// 005c44ee  55                   push ebp
// 005c44ef  8d6e04               lea ebp, [esi + 4]
// 005c44f2  57                   push edi
// 005c44f3  8bcd                 mov ecx, ebp
// 005c44f5  893e                 mov dword ptr [esi], edi
// 005c44f7  e864f5ffff           call 0x5c3a60
// 005c44fc  57                   push edi
// 005c44fd  57                   push edi
// 005c44fe  55                   push ebp
// 005c44ff  e81c87e4ff           call 0x40cc20
// 005c4504  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005c4508  57                   push edi
// 005c4509  895c242c             mov dword ptr [esp + 0x2c], ebx
// 005c450d  e8defaf6ff           call 0x533ff0
// 005c4512  83c410               add esp, 0x10
// 005c4515  894608               mov dword ptr [esi + 8], eax
// 005c4518  8b442428             mov eax, dword ptr [esp + 0x28]
// 005c451c  50                   push eax
// 005c451d  57                   push edi
// 005c451e  8d4e0c               lea ecx, [esi + 0xc]
// 005c4521  e8ea88faff           call 0x56ce10
// 005c4526  c7463000727800       mov dword ptr [esi + 0x30], 0x787200
// 005c452d  8b0df8238c00         mov ecx, dword ptr [0x8c23f8]
// 005c4533  894e34               mov dword ptr [esi + 0x34], ecx
// 005c4536  8b15fc238c00         mov edx, dword ptr [0x8c23fc]
// 005c453c  8bc2                 mov eax, edx
// 005c453e  3bc3                 cmp eax, ebx
// 005c4540  895638               mov dword ptr [esi + 0x38], edx
// 005c4543  5d                   pop ebp
// 005c4544  740c                 je 0x5c4552
// 005c4546  83c004               add eax, 4
// 005c4549  b901000000           mov ecx, 1
// 005c454e  f00fc108             lock xadd dword ptr [eax], ecx
// 005c4552  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c4556  895e3c               mov dword ptr [esi + 0x3c], ebx
// 005c4559  895e40               mov dword ptr [esi + 0x40], ebx
// 005c455c  895e44               mov dword ptr [esi + 0x44], ebx
// 005c455f  895e48               mov dword ptr [esi + 0x48], ebx
// 005c4562  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005c4565  5f                   pop edi
// 005c4566  8bc6                 mov eax, esi
// 005c4568  5e                   pop esi
// 005c4569  5b                   pop ebx
// 005c456a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c4571  83c410               add esp, 0x10
// 005c4574  c20800               ret 8
// library rbxgs/script\LuaSignalBridge.cpp (function ??0FunctionScriptSlot@@QAE@PAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
