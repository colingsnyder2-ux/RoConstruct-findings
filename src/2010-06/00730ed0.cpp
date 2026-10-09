// roc 2010-06 00730ed0  unit: lua_exception  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00730ed0
//
// 00730ed0  6aff                 push -1
// 00730ed2  684b1d9a00           push 0x9a1d4b
// 00730ed7  64a100000000         mov eax, dword ptr fs:[0]
// 00730edd  50                   push eax
// 00730ede  64892500000000       mov dword ptr fs:[0], esp
// 00730ee5  51                   push ecx
// 00730ee6  53                   push ebx
// 00730ee7  56                   push esi
// 00730ee8  57                   push edi
// 00730ee9  6a20                 push 0x20
// 00730eeb  8bf9                 mov edi, ecx
// 00730eed  e8ae6a0700           call 0x7a79a0
// 00730ef2  83c404               add esp, 4
// 00730ef5  8944240c             mov dword ptr [esp + 0xc], eax
// 00730ef9  33f6                 xor esi, esi
// 00730efb  89742418             mov dword ptr [esp + 0x18], esi
// 00730eff  3bc6                 cmp eax, esi
// 00730f01  740e                 je 0x730f11
// 00730f03  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00730f07  51                   push ecx
// 00730f08  8bc8                 mov ecx, eax
// 00730f0a  e89199f8ff           call 0x6ba8a0
// 00730f0f  8bf0                 mov esi, eax
// 00730f11  8d5f04               lea ebx, [edi + 4]
// 00730f14  56                   push esi
// 00730f15  8bcb                 mov ecx, ebx
// 00730f17  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00730f1f  8937                 mov dword ptr [edi], esi
// 00730f21  e8da2cffff           call 0x723c00
// 00730f26  56                   push esi
// 00730f27  56                   push esi
// 00730f28  53                   push ebx
// 00730f29  e88236d2ff           call 0x4545b0
// 00730f2e  dd442430             fld qword ptr [esp + 0x30]
// 00730f32  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00730f36  dd5f08               fstp qword ptr [edi + 8]
// 00730f39  d9ee                 fldz 
// 00730f3b  83c40c               add esp, 0xc
// 00730f3e  dd5f10               fstp qword ptr [edi + 0x10]
// 00730f41  8bc7                 mov eax, edi
// 00730f43  5f                   pop edi
// 00730f44  5e                   pop esi
// 00730f45  5b                   pop ebx
// 00730f46  64890d00000000       mov dword ptr fs:[0], ecx
// 00730f4d  83c410               add esp, 0x10
// 00730f50  c20c00               ret 0xc
// library openrbx-client/App\script\ScriptEvent.cpp (function ??0WaitingThread@YieldingThreads@Lua@RBX@@QAE@PAUlua_State@@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
