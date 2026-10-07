// roc 2008-06 0061d5f0  unit: RBX::Lua::LuaArguments  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061d5f0
//
// 0061d5f0  51                   push ecx
// 0061d5f1  56                   push esi
// 0061d5f2  8d442404             lea eax, [esp + 4]
// 0061d5f6  57                   push edi
// 0061d5f7  50                   push eax
// 0061d5f8  e8e388f9ff           call 0x5b5ee0
// 0061d5fd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0061d601  8b30                 mov esi, dword ptr [eax]
// 0061d603  6a04                 push 4
// 0061d605  57                   push edi
// 0061d606  e83556ffff           call 0x612c40
// 0061d60b  83c40c               add esp, 0xc
// 0061d60e  85c0                 test eax, eax
// 0061d610  7402                 je 0x61d614
// 0061d612  8930                 mov dword ptr [eax], esi
// 0061d614  8b0dc4b19500         mov ecx, dword ptr [0x95b1c4]
// 0061d61a  51                   push ecx
// 0061d61b  68f0d8ffff           push 0xffffd8f0
// 0061d620  57                   push edi
// 0061d621  e86a4effff           call 0x612490
// 0061d626  6afe                 push -2
// 0061d628  57                   push edi
// 0061d629  e8c251ffff           call 0x6127f0
// 0061d62e  83c414               add esp, 0x14
// 0061d631  5f                   pop edi
// 0061d632  b801000000           mov eax, 1
// 0061d637  5e                   pop esi
// 0061d638  59                   pop ecx
// 0061d639  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?randomBrickColor@BrickColorBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
