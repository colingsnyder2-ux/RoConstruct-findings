// roc 2009-12 0069f0c0  unit: std::strstream  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f0c0
//
// 0069f0c0  a1842bb600           mov eax, dword ptr [0xb62b84]
// 0069f0c5  56                   push esi
// 0069f0c6  8b742408             mov esi, dword ptr [esp + 8]
// 0069f0ca  50                   push eax
// 0069f0cb  6a01                 push 1
// 0069f0cd  56                   push esi
// 0069f0ce  e88db50e00           call 0x78a660
// 0069f0d3  68482a9d00           push 0x9d2a48
// 0069f0d8  56                   push esi
// 0069f0d9  e8029d0e00           call 0x788de0
// 0069f0de  83c414               add esp, 0x14
// 0069f0e1  b801000000           mov eax, 1
// 0069f0e6  5e                   pop esi
// 0069f0e7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
