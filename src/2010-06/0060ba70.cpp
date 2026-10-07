// roc 2010-06 0060ba70  unit: RBX::ScriptContext  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060ba70
//
// 0060ba70  56                   push esi
// 0060ba71  57                   push edi
// 0060ba72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0060ba76  6a04                 push 4
// 0060ba78  57                   push edi
// 0060ba79  e822651100           call 0x721fa0
// 0060ba7e  8bf0                 mov esi, eax
// 0060ba80  83c408               add esp, 8
// 0060ba83  85f6                 test esi, esi
// 0060ba85  7406                 je 0x60ba8d
// 0060ba87  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060ba8b  8906                 mov dword ptr [esi], eax
// 0060ba8d  8b0d6c2abe00         mov ecx, dword ptr [0xbe2a6c]
// 0060ba93  51                   push ecx
// 0060ba94  68f0d8ffff           push 0xffffd8f0
// 0060ba99  57                   push edi
// 0060ba9a  e8015d1100           call 0x7217a0
// 0060ba9f  6afe                 push -2
// 0060baa1  57                   push edi
// 0060baa2  e889601100           call 0x721b30
// 0060baa7  83c414               add esp, 0x14
// 0060baaa  5f                   pop edi
// 0060baab  8bc6                 mov eax, esi
// 0060baad  5e                   pop esi
// 0060baae  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VBrickColor@RBX@@@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@SAPAVBrickColor@2@PAUlua_State@@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
