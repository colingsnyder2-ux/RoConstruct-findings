// roc 2010-06 0072b350  unit: seg_00720000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072b350
//
// 0072b350  51                   push ecx
// 0072b351  56                   push esi
// 0072b352  8d442404             lea eax, [esp + 4]
// 0072b356  57                   push edi
// 0072b357  50                   push eax
// 0072b358  e8333aefff           call 0x61ed90
// 0072b35d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0072b361  8b30                 mov esi, dword ptr [eax]
// 0072b363  6a04                 push 4
// 0072b365  57                   push edi
// 0072b366  e8356cffff           call 0x721fa0
// 0072b36b  83c40c               add esp, 0xc
// 0072b36e  85c0                 test eax, eax
// 0072b370  7402                 je 0x72b374
// 0072b372  8930                 mov dword ptr [eax], esi
// 0072b374  8b0d5c2abe00         mov ecx, dword ptr [0xbe2a5c]
// 0072b37a  51                   push ecx
// 0072b37b  68f0d8ffff           push 0xffffd8f0
// 0072b380  57                   push edi
// 0072b381  e81a64ffff           call 0x7217a0
// 0072b386  6afe                 push -2
// 0072b388  57                   push edi
// 0072b389  e8a267ffff           call 0x721b30
// 0072b38e  83c414               add esp, 0x14
// 0072b391  5f                   pop edi
// 0072b392  b801000000           mov eax, 1
// 0072b397  5e                   pop esi
// 0072b398  59                   pop ecx
// 0072b399  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?randomBrickColor@BrickColorBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
