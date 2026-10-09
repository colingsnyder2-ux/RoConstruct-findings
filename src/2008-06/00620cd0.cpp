// roc 2008-06 00620cd0  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620cd0
//
// 00620cd0  6aff                 push -1
// 00620cd2  683bf47b00           push 0x7bf43b
// 00620cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00620cdd  50                   push eax
// 00620cde  64892500000000       mov dword ptr fs:[0], esp
// 00620ce5  51                   push ecx
// 00620ce6  53                   push ebx
// 00620ce7  56                   push esi
// 00620ce8  57                   push edi
// 00620ce9  6a20                 push 0x20
// 00620ceb  8bf9                 mov edi, ecx
// 00620ced  e82efc0700           call 0x6a0920
// 00620cf2  83c404               add esp, 4
// 00620cf5  8944240c             mov dword ptr [esp + 0xc], eax
// 00620cf9  33f6                 xor esi, esi
// 00620cfb  89742418             mov dword ptr [esp + 0x18], esi
// 00620cff  3bc6                 cmp eax, esi
// 00620d01  740e                 je 0x620d11
// 00620d03  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00620d07  51                   push ecx
// 00620d08  8bc8                 mov ecx, eax
// 00620d0a  e83131f7ff           call 0x593e40
// 00620d0f  8bf0                 mov esi, eax
// 00620d11  8d5f04               lea ebx, [edi + 4]
// 00620d14  56                   push esi
// 00620d15  8bcb                 mov ecx, ebx
// 00620d17  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00620d1f  8937                 mov dword ptr [edi], esi
// 00620d21  e8aafcffff           call 0x6209d0
// 00620d26  56                   push esi
// 00620d27  56                   push esi
// 00620d28  53                   push ebx
// 00620d29  e8e2c6e5ff           call 0x47d410
// 00620d2e  dd442430             fld qword ptr [esp + 0x30]
// 00620d32  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00620d36  dd5f08               fstp qword ptr [edi + 8]
// 00620d39  d9ee                 fldz 
// 00620d3b  83c40c               add esp, 0xc
// 00620d3e  dd5f10               fstp qword ptr [edi + 0x10]
// 00620d41  8bc7                 mov eax, edi
// 00620d43  5f                   pop edi
// 00620d44  5e                   pop esi
// 00620d45  5b                   pop ebx
// 00620d46  64890d00000000       mov dword ptr fs:[0], ecx
// 00620d4d  83c410               add esp, 0x10
// 00620d50  c20c00               ret 0xc
// library openrbx-client/App\script\ScriptEvent.cpp (function ??0WaitingThread@YieldingThreads@Lua@RBX@@QAE@PAUlua_State@@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
