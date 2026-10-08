// roc 2011-06 00662c20  unit: RBX::VExplosion::?$EventDesc  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00662c20
//
// 00662c20  a108f0c800           mov eax, dword ptr [0xc8f008]
// 00662c25  56                   push esi
// 00662c26  8b742408             mov esi, dword ptr [esp + 8]
// 00662c2a  57                   push edi
// 00662c2b  50                   push eax
// 00662c2c  6a02                 push 2
// 00662c2e  56                   push esi
// 00662c2f  e84c141000           call 0x764080
// 00662c34  8b0d08f0c800         mov ecx, dword ptr [0xc8f008]
// 00662c3a  51                   push ecx
// 00662c3b  6a01                 push 1
// 00662c3d  56                   push esi
// 00662c3e  8bf8                 mov edi, eax
// 00662c40  e83b141000           call 0x764080
// 00662c45  83c418               add esp, 0x18
// 00662c48  57                   push edi
// 00662c49  8bc8                 mov ecx, eax
// 00662c4b  e890f3ffff           call 0x661fe0
// 00662c50  0fb6d0               movzx edx, al
// 00662c53  52                   push edx
// 00662c54  56                   push esi
// 00662c55  e8b6fe0f00           call 0x762b10
// 00662c5a  83c408               add esp, 8
// 00662c5d  5f                   pop edi
// 00662c5e  b801000000           mov eax, 1
// 00662c63  5e                   pop esi
// 00662c64  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
