// roc 2009-12 0078b310  unit: RBX::Lua::LuaArguments  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078b310
//
// 0078b310  64a100000000         mov eax, dword ptr fs:[0]
// 0078b316  6aff                 push -1
// 0078b318  6888039400           push 0x940388
// 0078b31d  50                   push eax
// 0078b31e  64892500000000       mov dword ptr fs:[0], esp
// 0078b325  83ec08               sub esp, 8
// 0078b328  56                   push esi
// 0078b329  8b742420             mov esi, dword ptr [esp + 0x20]
// 0078b32d  57                   push edi
// 0078b32e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0078b332  56                   push esi
// 0078b333  57                   push edi
// 0078b334  e857d6ffff           call 0x788990
// 0078b339  83c408               add esp, 8
// 0078b33c  85c0                 test eax, eax
// 0078b33e  7534                 jne 0x78b374
// 0078b340  33c9                 xor ecx, ecx
// 0078b342  894c2408             mov dword ptr [esp + 8], ecx
// 0078b346  894c240c             mov dword ptr [esp + 0xc], ecx
// 0078b34a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0078b34e  894c2418             mov dword ptr [esp + 0x18], ecx
// 0078b352  8908                 mov dword ptr [eax], ecx
// 0078b354  8d4c240c             lea ecx, [esp + 0xc]
// 0078b358  51                   push ecx
// 0078b359  8d4804               lea ecx, [eax + 4]
// 0078b35c  e83f6dc7ff           call 0x4020a0
// 0078b361  5f                   pop edi
// 0078b362  b001                 mov al, 1
// 0078b364  5e                   pop esi
// 0078b365  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0078b369  64890d00000000       mov dword ptr fs:[0], ecx
// 0078b370  83c414               add esp, 0x14
// 0078b373  c3                   ret 
// 0078b374  8b542428             mov edx, dword ptr [esp + 0x28]
// 0078b378  52                   push edx
// 0078b379  56                   push esi
// 0078b37a  57                   push edi
// 0078b37b  e840fbffff           call 0x78aec0
// 0078b380  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0078b384  83c40c               add esp, 0xc
// 0078b387  5f                   pop edi
// 0078b388  5e                   pop esi
// 0078b389  64890d00000000       mov dword ptr fs:[0], ecx
// 0078b390  83c414               add esp, 0x14
// 0078b393  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
