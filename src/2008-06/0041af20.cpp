// roc 2008-06 0041af20  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041af20
//
// 0041af20  6aff                 push -1
// 0041af22  68e8727d00           push 0x7d72e8
// 0041af27  64a100000000         mov eax, dword ptr fs:[0]
// 0041af2d  50                   push eax
// 0041af2e  64892500000000       mov dword ptr fs:[0], esp
// 0041af35  51                   push ecx
// 0041af36  56                   push esi
// 0041af37  8bf1                 mov esi, ecx
// 0041af39  57                   push edi
// 0041af3a  89742408             mov dword ptr [esp + 8], esi
// 0041af3e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041af41  33ff                 xor edi, edi
// 0041af43  897c2414             mov dword ptr [esp + 0x14], edi
// 0041af47  3bc7                 cmp eax, edi
// 0041af49  7418                 je 0x41af63
// 0041af4b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0041af4e  51                   push ecx
// 0041af4f  50                   push eax
// 0041af50  8bce                 mov ecx, esi
// 0041af52  e889feffff           call 0x41ade0
// 0041af57  8b560c               mov edx, dword ptr [esi + 0xc]
// 0041af5a  52                   push edx
// 0041af5b  e81a572800           call 0x6a067a
// 0041af60  83c404               add esp, 4
// 0041af63  8b06                 mov eax, dword ptr [esi]
// 0041af65  50                   push eax
// 0041af66  897e0c               mov dword ptr [esi + 0xc], edi
// 0041af69  897e10               mov dword ptr [esi + 0x10], edi
// 0041af6c  897e14               mov dword ptr [esi + 0x14], edi
// 0041af6f  e806572800           call 0x6a067a
// 0041af74  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041af78  83c404               add esp, 4
// 0041af7b  5f                   pop edi
// 0041af7c  5e                   pop esi
// 0041af7d  64890d00000000       mov dword ptr fs:[0], ecx
// 0041af84  83c410               add esp, 0x10
// 0041af87  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
