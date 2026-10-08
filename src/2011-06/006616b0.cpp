// roc 2011-06 006616b0  unit: RBX::VExplosion::?$EventDesc  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006616b0
//
// 006616b0  a10cf0c800           mov eax, dword ptr [0xc8f00c]
// 006616b5  56                   push esi
// 006616b6  8b742408             mov esi, dword ptr [esp + 8]
// 006616ba  57                   push edi
// 006616bb  50                   push eax
// 006616bc  6a02                 push 2
// 006616be  56                   push esi
// 006616bf  e8bc291000           call 0x764080
// 006616c4  8b0d0cf0c800         mov ecx, dword ptr [0xc8f00c]
// 006616ca  51                   push ecx
// 006616cb  6a01                 push 1
// 006616cd  56                   push esi
// 006616ce  8bf8                 mov edi, eax
// 006616d0  e8ab291000           call 0x764080
// 006616d5  83c418               add esp, 0x18
// 006616d8  57                   push edi
// 006616d9  8bc8                 mov ecx, eax
// 006616db  e890761900           call 0x7f8d70
// 006616e0  0fb6d0               movzx edx, al
// 006616e3  52                   push edx
// 006616e4  56                   push esi
// 006616e5  e826141000           call 0x762b10
// 006616ea  83c408               add esp, 8
// 006616ed  5f                   pop edi
// 006616ee  b801000000           mov eax, 1
// 006616f3  5e                   pop esi
// 006616f4  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
