// roc 2011-06 007652d0  unit: RBX::Lua::LuaArguments  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007652d0
//
// 007652d0  64a100000000         mov eax, dword ptr fs:[0]
// 007652d6  6aff                 push -1
// 007652d8  6868449d00           push 0x9d4468
// 007652dd  50                   push eax
// 007652de  64892500000000       mov dword ptr fs:[0], esp
// 007652e5  83ec08               sub esp, 8
// 007652e8  56                   push esi
// 007652e9  8b742420             mov esi, dword ptr [esp + 0x20]
// 007652ed  57                   push edi
// 007652ee  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007652f2  56                   push esi
// 007652f3  57                   push edi
// 007652f4  e857d2ffff           call 0x762550
// 007652f9  83c408               add esp, 8
// 007652fc  85c0                 test eax, eax
// 007652fe  7534                 jne 0x765334
// 00765300  33c9                 xor ecx, ecx
// 00765302  894c2408             mov dword ptr [esp + 8], ecx
// 00765306  894c240c             mov dword ptr [esp + 0xc], ecx
// 0076530a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0076530e  894c2418             mov dword ptr [esp + 0x18], ecx
// 00765312  8908                 mov dword ptr [eax], ecx
// 00765314  8d4c240c             lea ecx, [esp + 0xc]
// 00765318  51                   push ecx
// 00765319  8d4804               lea ecx, [eax + 4]
// 0076531c  e83fd2c9ff           call 0x402560
// 00765321  5f                   pop edi
// 00765322  b001                 mov al, 1
// 00765324  5e                   pop esi
// 00765325  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00765329  64890d00000000       mov dword ptr fs:[0], ecx
// 00765330  83c414               add esp, 0x14
// 00765333  c3                   ret 
// 00765334  8b542428             mov edx, dword ptr [esp + 0x28]
// 00765338  52                   push edx
// 00765339  56                   push esi
// 0076533a  57                   push edi
// 0076533b  e850fbffff           call 0x764e90
// 00765340  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00765344  83c40c               add esp, 0xc
// 00765347  5f                   pop edi
// 00765348  5e                   pop esi
// 00765349  64890d00000000       mov dword ptr fs:[0], ecx
// 00765350  83c414               add esp, 0x14
// 00765353  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
