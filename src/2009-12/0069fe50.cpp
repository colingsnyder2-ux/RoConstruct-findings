// roc 2009-12 0069fe50  unit: std::strstream  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069fe50
//
// 0069fe50  56                   push esi
// 0069fe51  57                   push edi
// 0069fe52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0069fe56  6a04                 push 4
// 0069fe58  57                   push edi
// 0069fe59  e892990e00           call 0x7897f0
// 0069fe5e  8bf0                 mov esi, eax
// 0069fe60  83c408               add esp, 8
// 0069fe63  85f6                 test esi, esi
// 0069fe65  7406                 je 0x69fe6d
// 0069fe67  8b442410             mov eax, dword ptr [esp + 0x10]
// 0069fe6b  8906                 mov dword ptr [esi], eax
// 0069fe6d  8b0d502bb600         mov ecx, dword ptr [0xb62b50]
// 0069fe73  51                   push ecx
// 0069fe74  68f0d8ffff           push 0xffffd8f0
// 0069fe79  57                   push edi
// 0069fe7a  e871910e00           call 0x788ff0
// 0069fe7f  6afe                 push -2
// 0069fe81  57                   push edi
// 0069fe82  e8f9940e00           call 0x789380
// 0069fe87  83c414               add esp, 0x14
// 0069fe8a  5f                   pop edi
// 0069fe8b  8bc6                 mov eax, esi
// 0069fe8d  5e                   pop esi
// 0069fe8e  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VBrickColor@RBX@@@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@SAPAVBrickColor@2@PAUlua_State@@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
