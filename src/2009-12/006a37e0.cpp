// roc 2009-12 006a37e0  unit: RBX::Lua::VLiveThreadRef::?$sp_counted_impl_p  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a37e0
//
// 006a37e0  a1802bb600           mov eax, dword ptr [0xb62b80]
// 006a37e5  56                   push esi
// 006a37e6  8b742408             mov esi, dword ptr [esp + 8]
// 006a37ea  57                   push edi
// 006a37eb  50                   push eax
// 006a37ec  6a02                 push 2
// 006a37ee  56                   push esi
// 006a37ef  e86c6e0e00           call 0x78a660
// 006a37f4  8b0d802bb600         mov ecx, dword ptr [0xb62b80]
// 006a37fa  51                   push ecx
// 006a37fb  6a01                 push 1
// 006a37fd  56                   push esi
// 006a37fe  8bf8                 mov edi, eax
// 006a3800  e85b6e0e00           call 0x78a660
// 006a3805  83c418               add esp, 0x18
// 006a3808  57                   push edi
// 006a3809  8bc8                 mov ecx, eax
// 006a380b  e890fbffff           call 0x6a33a0
// 006a3810  0fb6d0               movzx edx, al
// 006a3813  52                   push edx
// 006a3814  56                   push esi
// 006a3815  e836570e00           call 0x788f50
// 006a381a  83c408               add esp, 8
// 006a381d  5f                   pop edi
// 006a381e  b801000000           mov eax, 1
// 006a3823  5e                   pop esi
// 006a3824  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
