// roc 2007-08 005c4df0  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4df0
//
// 005c4df0  6aff                 push -1
// 005c4df2  681bb67500           push 0x75b61b
// 005c4df7  64a100000000         mov eax, dword ptr fs:[0]
// 005c4dfd  50                   push eax
// 005c4dfe  64892500000000       mov dword ptr fs:[0], esp
// 005c4e05  51                   push ecx
// 005c4e06  53                   push ebx
// 005c4e07  56                   push esi
// 005c4e08  57                   push edi
// 005c4e09  6a20                 push 0x20
// 005c4e0b  8bf9                 mov edi, ecx
// 005c4e0d  e8e4b00600           call 0x62fef6
// 005c4e12  83c404               add esp, 4
// 005c4e15  8944240c             mov dword ptr [esp + 0xc], eax
// 005c4e19  33f6                 xor esi, esi
// 005c4e1b  3bc6                 cmp eax, esi
// 005c4e1d  89742418             mov dword ptr [esp + 0x18], esi
// 005c4e21  740e                 je 0x5c4e31
// 005c4e23  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005c4e27  51                   push ecx
// 005c4e28  8bc8                 mov ecx, eax
// 005c4e2a  e8c17afaff           call 0x56c8f0
// 005c4e2f  8bf0                 mov esi, eax
// 005c4e31  8d5f04               lea ebx, [edi + 4]
// 005c4e34  56                   push esi
// 005c4e35  8bcb                 mov ecx, ebx
// 005c4e37  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c4e3f  8937                 mov dword ptr [edi], esi
// 005c4e41  e80afdffff           call 0x5c4b50
// 005c4e46  56                   push esi
// 005c4e47  56                   push esi
// 005c4e48  53                   push ebx
// 005c4e49  e8d27de4ff           call 0x40cc20
// 005c4e4e  d9442430             fld dword ptr [esp + 0x30]
// 005c4e52  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c4e56  d95f08               fstp dword ptr [edi + 8]
// 005c4e59  d9ee                 fldz 
// 005c4e5b  83c40c               add esp, 0xc
// 005c4e5e  d95f0c               fstp dword ptr [edi + 0xc]
// 005c4e61  8bc7                 mov eax, edi
// 005c4e63  5f                   pop edi
// 005c4e64  5e                   pop esi
// 005c4e65  5b                   pop ebx
// 005c4e66  64890d00000000       mov dword ptr fs:[0], ecx
// 005c4e6d  83c410               add esp, 0x10
// 005c4e70  c20800               ret 8
// library rbxgs/script\ScriptEvent.cpp (function ??0WaitingThread@YieldingThreads@Lua@RBX@@QAE@PAUlua_State@@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
