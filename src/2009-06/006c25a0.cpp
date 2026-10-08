// roc 2009-06 006c25a0  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c25a0
//
// 006c25a0  6aff                 push -1
// 006c25a2  6878ef8600           push 0x86ef78
// 006c25a7  64a100000000         mov eax, dword ptr fs:[0]
// 006c25ad  50                   push eax
// 006c25ae  64892500000000       mov dword ptr fs:[0], esp
// 006c25b5  51                   push ecx
// 006c25b6  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c25ba  56                   push esi
// 006c25bb  57                   push edi
// 006c25bc  8bf9                 mov edi, ecx
// 006c25be  6a04                 push 4
// 006c25c0  8907                 mov dword ptr [edi], eax
// 006c25c2  8d7704               lea esi, [edi + 4]
// 006c25c5  e86e640500           call 0x718a38
// 006c25ca  33c9                 xor ecx, ecx
// 006c25cc  83c404               add esp, 4
// 006c25cf  3bc1                 cmp eax, ecx
// 006c25d1  7404                 je 0x6c25d7
// 006c25d3  8930                 mov dword ptr [eax], esi
// 006c25d5  eb02                 jmp 0x6c25d9
// 006c25d7  33c0                 xor eax, eax
// 006c25d9  8906                 mov dword ptr [esi], eax
// 006c25db  894e0c               mov dword ptr [esi + 0xc], ecx
// 006c25de  894e10               mov dword ptr [esi + 0x10], ecx
// 006c25e1  894e14               mov dword ptr [esi + 0x14], ecx
// 006c25e4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c25e8  8bc7                 mov eax, edi
// 006c25ea  5f                   pop edi
// 006c25eb  5e                   pop esi
// 006c25ec  64890d00000000       mov dword ptr fs:[0], ecx
// 006c25f3  83c410               add esp, 0x10
// 006c25f6  c20400               ret 4
// library rbxgs/script\ScriptEvent.cpp (function ??0YieldingThreads@Lua@RBX@@QAE@PAVScriptContext@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
