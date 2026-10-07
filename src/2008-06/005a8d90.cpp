// roc 2008-06 005a8d90  unit: RBX::ScriptContext  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8d90
//
// 005a8d90  56                   push esi
// 005a8d91  57                   push edi
// 005a8d92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a8d96  6a04                 push 4
// 005a8d98  57                   push edi
// 005a8d99  e8a29e0600           call 0x612c40
// 005a8d9e  8bf0                 mov esi, eax
// 005a8da0  83c408               add esp, 8
// 005a8da3  85f6                 test esi, esi
// 005a8da5  7406                 je 0x5a8dad
// 005a8da7  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a8dab  8906                 mov dword ptr [esi], eax
// 005a8dad  8b0dc4b19500         mov ecx, dword ptr [0x95b1c4]
// 005a8db3  51                   push ecx
// 005a8db4  68f0d8ffff           push 0xffffd8f0
// 005a8db9  57                   push edi
// 005a8dba  e8d1960600           call 0x612490
// 005a8dbf  6afe                 push -2
// 005a8dc1  57                   push edi
// 005a8dc2  e8299a0600           call 0x6127f0
// 005a8dc7  83c414               add esp, 0x14
// 005a8dca  5f                   pop edi
// 005a8dcb  8bc6                 mov eax, esi
// 005a8dcd  5e                   pop esi
// 005a8dce  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VBrickColor@RBX@@@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@SAPAVBrickColor@2@PAUlua_State@@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
