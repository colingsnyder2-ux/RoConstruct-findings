// roc 2009-06 00633820  unit: std::strstream  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633820
//
// 00633820  56                   push esi
// 00633821  57                   push edi
// 00633822  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00633826  6a04                 push 4
// 00633828  57                   push edi
// 00633829  e8a2650800           call 0x6b9dd0
// 0063382e  8bf0                 mov esi, eax
// 00633830  83c408               add esp, 8
// 00633833  85f6                 test esi, esi
// 00633835  7406                 je 0x63383d
// 00633837  8b442410             mov eax, dword ptr [esp + 0x10]
// 0063383b  8906                 mov dword ptr [esi], eax
// 0063383d  8b0df82aa200         mov ecx, dword ptr [0xa22af8]
// 00633843  51                   push ecx
// 00633844  68f0d8ffff           push 0xffffd8f0
// 00633849  57                   push edi
// 0063384a  e8815d0800           call 0x6b95d0
// 0063384f  6afe                 push -2
// 00633851  57                   push edi
// 00633852  e809610800           call 0x6b9960
// 00633857  83c414               add esp, 0x14
// 0063385a  5f                   pop edi
// 0063385b  8bc6                 mov eax, esi
// 0063385d  5e                   pop esi
// 0063385e  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VBrickColor@RBX@@@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@SAPAVBrickColor@2@PAUlua_State@@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
