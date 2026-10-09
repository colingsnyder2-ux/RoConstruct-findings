// roc 2009-06 006c1ec0  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c1ec0
//
// 006c1ec0  6aff                 push -1
// 006c1ec2  687b9c8600           push 0x869c7b
// 006c1ec7  64a100000000         mov eax, dword ptr fs:[0]
// 006c1ecd  50                   push eax
// 006c1ece  64892500000000       mov dword ptr fs:[0], esp
// 006c1ed5  51                   push ecx
// 006c1ed6  53                   push ebx
// 006c1ed7  56                   push esi
// 006c1ed8  57                   push edi
// 006c1ed9  6a20                 push 0x20
// 006c1edb  8bf9                 mov edi, ecx
// 006c1edd  e8566b0500           call 0x718a38
// 006c1ee2  83c404               add esp, 4
// 006c1ee5  8944240c             mov dword ptr [esp + 0xc], eax
// 006c1ee9  33f6                 xor esi, esi
// 006c1eeb  89742418             mov dword ptr [esp + 0x18], esi
// 006c1eef  3bc6                 cmp eax, esi
// 006c1ef1  740e                 je 0x6c1f01
// 006c1ef3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c1ef7  51                   push ecx
// 006c1ef8  8bc8                 mov ecx, eax
// 006c1efa  e81138fdff           call 0x695710
// 006c1eff  8bf0                 mov esi, eax
// 006c1f01  8d5f04               lea ebx, [edi + 4]
// 006c1f04  56                   push esi
// 006c1f05  8bcb                 mov ecx, ebx
// 006c1f07  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006c1f0f  8937                 mov dword ptr [edi], esi
// 006c1f11  e8aafcffff           call 0x6c1bc0
// 006c1f16  56                   push esi
// 006c1f17  56                   push esi
// 006c1f18  53                   push ebx
// 006c1f19  e8c22afbff           call 0x6749e0
// 006c1f1e  dd442430             fld qword ptr [esp + 0x30]
// 006c1f22  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c1f26  dd5f08               fstp qword ptr [edi + 8]
// 006c1f29  d9ee                 fldz 
// 006c1f2b  83c40c               add esp, 0xc
// 006c1f2e  dd5f10               fstp qword ptr [edi + 0x10]
// 006c1f31  8bc7                 mov eax, edi
// 006c1f33  5f                   pop edi
// 006c1f34  5e                   pop esi
// 006c1f35  5b                   pop ebx
// 006c1f36  64890d00000000       mov dword ptr fs:[0], ecx
// 006c1f3d  83c410               add esp, 0x10
// 006c1f40  c20c00               ret 0xc
// library openrbx-client/App\script\ScriptEvent.cpp (function ??0WaitingThread@YieldingThreads@Lua@RBX@@QAE@PAUlua_State@@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
