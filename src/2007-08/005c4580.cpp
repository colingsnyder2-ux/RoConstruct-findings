// roc 2007-08 005c4580  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4580
//
// 005c4580  6aff                 push -1
// 005c4582  68a8137500           push 0x7513a8
// 005c4587  64a100000000         mov eax, dword ptr fs:[0]
// 005c458d  50                   push eax
// 005c458e  64892500000000       mov dword ptr fs:[0], esp
// 005c4595  51                   push ecx
// 005c4596  53                   push ebx
// 005c4597  55                   push ebp
// 005c4598  56                   push esi
// 005c4599  57                   push edi
// 005c459a  8bf9                 mov edi, ecx
// 005c459c  6a10                 push 0x10
// 005c459e  897c2414             mov dword ptr [esp + 0x14], edi
// 005c45a2  e84fb90600           call 0x62fef6
// 005c45a7  33db                 xor ebx, ebx
// 005c45a9  83c404               add esp, 4
// 005c45ac  3bc3                 cmp eax, ebx
// 005c45ae  740d                 je 0x5c45bd
// 005c45b0  895804               mov dword ptr [eax + 4], ebx
// 005c45b3  895808               mov dword ptr [eax + 8], ebx
// 005c45b6  88580c               mov byte ptr [eax + 0xc], bl
// 005c45b9  8bf0                 mov esi, eax
// 005c45bb  eb02                 jmp 0x5c45bf
// 005c45bd  33f6                 xor esi, esi
// 005c45bf  8d6f04               lea ebp, [edi + 4]
// 005c45c2  56                   push esi
// 005c45c3  8bcd                 mov ecx, ebp
// 005c45c5  8937                 mov dword ptr [edi], esi
// 005c45c7  e894f4ffff           call 0x5c3a60
// 005c45cc  56                   push esi
// 005c45cd  56                   push esi
// 005c45ce  55                   push ebp
// 005c45cf  e84c86e4ff           call 0x40cc20
// 005c45d4  83c40c               add esp, 0xc
// 005c45d7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005c45db  50                   push eax
// 005c45dc  8d4f08               lea ecx, [edi + 8]
// 005c45df  895c2420             mov dword ptr [esp + 0x20], ebx
// 005c45e3  e80883faff           call 0x56c8f0
// 005c45e8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c45ec  8bc7                 mov eax, edi
// 005c45ee  5f                   pop edi
// 005c45ef  5e                   pop esi
// 005c45f0  5d                   pop ebp
// 005c45f1  5b                   pop ebx
// 005c45f2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c45f9  83c410               add esp, 0x10
// 005c45fc  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
