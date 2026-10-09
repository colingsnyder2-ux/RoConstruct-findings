// roc 2009-12 0069ff30  unit: std::strstream  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069ff30
//
// 0069ff30  56                   push esi
// 0069ff31  57                   push edi
// 0069ff32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0069ff36  6a04                 push 4
// 0069ff38  57                   push edi
// 0069ff39  e8b2980e00           call 0x7897f0
// 0069ff3e  8bf0                 mov esi, eax
// 0069ff40  83c408               add esp, 8
// 0069ff43  85f6                 test esi, esi
// 0069ff45  7406                 je 0x69ff4d
// 0069ff47  8b442410             mov eax, dword ptr [esp + 0x10]
// 0069ff4b  8906                 mov dword ptr [esi], eax
// 0069ff4d  8b0d642bb600         mov ecx, dword ptr [0xb62b64]
// 0069ff53  51                   push ecx
// 0069ff54  68f0d8ffff           push 0xffffd8f0
// 0069ff59  57                   push edi
// 0069ff5a  e891900e00           call 0x788ff0
// 0069ff5f  6afe                 push -2
// 0069ff61  57                   push edi
// 0069ff62  e819940e00           call 0x789380
// 0069ff67  83c414               add esp, 0x14
// 0069ff6a  5f                   pop edi
// 0069ff6b  8bc6                 mov eax, esi
// 0069ff6d  5e                   pop esi
// 0069ff6e  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VBrickColor@RBX@@@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@SAPAVBrickColor@2@PAUlua_State@@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
