// roc 2009-12 0069fef0  unit: std::strstream  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069fef0
//
// 0069fef0  56                   push esi
// 0069fef1  57                   push edi
// 0069fef2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0069fef6  6a04                 push 4
// 0069fef8  57                   push edi
// 0069fef9  e8f2980e00           call 0x7897f0
// 0069fefe  8bf0                 mov esi, eax
// 0069ff00  83c408               add esp, 8
// 0069ff03  85f6                 test esi, esi
// 0069ff05  7406                 je 0x69ff0d
// 0069ff07  8b442410             mov eax, dword ptr [esp + 0x10]
// 0069ff0b  8906                 mov dword ptr [esi], eax
// 0069ff0d  8b0d602bb600         mov ecx, dword ptr [0xb62b60]
// 0069ff13  51                   push ecx
// 0069ff14  68f0d8ffff           push 0xffffd8f0
// 0069ff19  57                   push edi
// 0069ff1a  e8d1900e00           call 0x788ff0
// 0069ff1f  6afe                 push -2
// 0069ff21  57                   push edi
// 0069ff22  e859940e00           call 0x789380
// 0069ff27  83c414               add esp, 0x14
// 0069ff2a  5f                   pop edi
// 0069ff2b  8bc6                 mov eax, esi
// 0069ff2d  5e                   pop esi
// 0069ff2e  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VBrickColor@RBX@@@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@SAPAVBrickColor@2@PAUlua_State@@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
