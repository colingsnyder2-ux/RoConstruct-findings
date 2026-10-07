// roc 2007-08 005c21f0  unit: RBX::Lua::LuaArguments  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c21f0
//
// 005c21f0  51                   push ecx
// 005c21f1  56                   push esi
// 005c21f2  8d442404             lea eax, [esp + 4]
// 005c21f6  57                   push edi
// 005c21f7  50                   push eax
// 005c21f8  e81346fcff           call 0x586810
// 005c21fd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005c2201  8b30                 mov esi, dword ptr [eax]
// 005c2203  6a04                 push 4
// 005c2205  57                   push edi
// 005c2206  e8a5c3ffff           call 0x5be5b0
// 005c220b  83c40c               add esp, 0xc
// 005c220e  85c0                 test eax, eax
// 005c2210  7402                 je 0x5c2214
// 005c2212  8930                 mov dword ptr [eax], esi
// 005c2214  8b0d7cbe8a00         mov ecx, dword ptr [0x8abe7c]
// 005c221a  51                   push ecx
// 005c221b  68f0d8ffff           push 0xffffd8f0
// 005c2220  57                   push edi
// 005c2221  e8dabbffff           call 0x5bde00
// 005c2226  6afe                 push -2
// 005c2228  57                   push edi
// 005c2229  e832bfffff           call 0x5be160
// 005c222e  83c414               add esp, 0x14
// 005c2231  5f                   pop edi
// 005c2232  b801000000           mov eax, 1
// 005c2237  5e                   pop esi
// 005c2238  59                   pop ecx
// 005c2239  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?randomBrickColor@BrickColorBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
