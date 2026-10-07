// roc 2010-06 0060bab0  unit: RBX::ScriptContext  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060bab0
//
// 0060bab0  56                   push esi
// 0060bab1  57                   push edi
// 0060bab2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0060bab6  6a04                 push 4
// 0060bab8  57                   push edi
// 0060bab9  e8e2641100           call 0x721fa0
// 0060babe  8bf0                 mov esi, eax
// 0060bac0  83c408               add esp, 8
// 0060bac3  85f6                 test esi, esi
// 0060bac5  7406                 je 0x60bacd
// 0060bac7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060bacb  8906                 mov dword ptr [esi], eax
// 0060bacd  8b0d702abe00         mov ecx, dword ptr [0xbe2a70]
// 0060bad3  51                   push ecx
// 0060bad4  68f0d8ffff           push 0xffffd8f0
// 0060bad9  57                   push edi
// 0060bada  e8c15c1100           call 0x7217a0
// 0060badf  6afe                 push -2
// 0060bae1  57                   push edi
// 0060bae2  e849601100           call 0x721b30
// 0060bae7  83c414               add esp, 0x14
// 0060baea  5f                   pop edi
// 0060baeb  8bc6                 mov eax, esi
// 0060baed  5e                   pop esi
// 0060baee  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VBrickColor@RBX@@@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@SAPAVBrickColor@2@PAUlua_State@@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
