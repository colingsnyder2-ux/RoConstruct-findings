// roc 2008-06 0061d370  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061d370
//
// 0061d370  56                   push esi
// 0061d371  8b742408             mov esi, dword ptr [esp + 8]
// 0061d375  6a04                 push 4
// 0061d377  56                   push esi
// 0061d378  e8c358ffff           call 0x612c40
// 0061d37d  83c408               add esp, 8
// 0061d380  85c0                 test eax, eax
// 0061d382  7406                 je 0x61d38a
// 0061d384  c70018000000         mov dword ptr [eax], 0x18
// 0061d38a  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 0061d38f  50                   push eax
// 0061d390  68f0d8ffff           push 0xffffd8f0
// 0061d395  56                   push esi
// 0061d396  e8f550ffff           call 0x612490
// 0061d39b  6afe                 push -2
// 0061d39d  56                   push esi
// 0061d39e  e84d54ffff           call 0x6127f0
// 0061d3a3  83c414               add esp, 0x14
// 0061d3a6  b801000000           mov eax, 1
// 0061d3ab  5e                   pop esi
// 0061d3ac  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushYellow@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
