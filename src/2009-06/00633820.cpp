// from server: 100% by tester
// roc 2007-03 00536c70  unit: seg_00530000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536c70
//
// 00536c70  56                   push esi
// 00536c71  57                   push edi
// 00536c72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00536c76  6a04                 push 4
// 00536c78  57                   push edi
// 00536c79  e8022e0800           call 0x5b9a80
// 00536c7e  8bf0                 mov esi, eax
// 00536c80  83c408               add esp, 8
// 00536c83  85f6                 test esi, esi
// 00536c85  7406                 je 0x536c8d
// 00536c87  8b442410             mov eax, dword ptr [esp + 0x10]
// 00536c8b  8906                 mov dword ptr [esi], eax
// 00536c8d  8b0d4c828a00         mov ecx, dword ptr [0x8a824c]
// 00536c93  51                   push ecx
// 00536c94  68f0d8ffff           push 0xffffd8f0
// 00536c99  57                   push edi
// 00536c9a  e831260800           call 0x5b92d0
// 00536c9f  6afe                 push -2
// 00536ca1  57                   push edi
// 00536ca2  e889290800           call 0x5b9630
// 00536ca7  83c414               add esp, 0x14
// 00536caa  5f                   pop edi
// 00536cab  8bc6                 mov eax, esi
// 00536cad  5e                   pop esi
// 00536cae  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VBrickColor@RBX@@@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@SAPAVBrickColor@2@PAUlua_State@@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
