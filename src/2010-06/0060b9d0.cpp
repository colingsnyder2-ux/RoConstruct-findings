// roc 2010-06 0060b9d0  unit: RBX::ScriptContext  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b9d0
//
// 0060b9d0  56                   push esi
// 0060b9d1  57                   push edi
// 0060b9d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0060b9d6  6a04                 push 4
// 0060b9d8  57                   push edi
// 0060b9d9  e8c2651100           call 0x721fa0
// 0060b9de  8bf0                 mov esi, eax
// 0060b9e0  83c408               add esp, 8
// 0060b9e3  85f6                 test esi, esi
// 0060b9e5  7406                 je 0x60b9ed
// 0060b9e7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060b9eb  8906                 mov dword ptr [esi], eax
// 0060b9ed  8b0d5c2abe00         mov ecx, dword ptr [0xbe2a5c]
// 0060b9f3  51                   push ecx
// 0060b9f4  68f0d8ffff           push 0xffffd8f0
// 0060b9f9  57                   push edi
// 0060b9fa  e8a15d1100           call 0x7217a0
// 0060b9ff  6afe                 push -2
// 0060ba01  57                   push edi
// 0060ba02  e829611100           call 0x721b30
// 0060ba07  83c414               add esp, 0x14
// 0060ba0a  5f                   pop edi
// 0060ba0b  8bc6                 mov eax, esi
// 0060ba0d  5e                   pop esi
// 0060ba0e  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VBrickColor@RBX@@@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@SAPAVBrickColor@2@PAUlua_State@@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
