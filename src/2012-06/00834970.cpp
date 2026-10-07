// roc 2012-06 00834970  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00834970
//
// 00834970  64a100000000         mov eax, dword ptr fs:[0]
// 00834976  6aff                 push -1
// 00834978  6808c8ac00           push 0xacc808
// 0083497d  50                   push eax
// 0083497e  64892500000000       mov dword ptr fs:[0], esp
// 00834985  83ec08               sub esp, 8
// 00834988  56                   push esi
// 00834989  8b742420             mov esi, dword ptr [esp + 0x20]
// 0083498d  57                   push edi
// 0083498e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00834992  56                   push esi
// 00834993  57                   push edi
// 00834994  e847d3ffff           call 0x831ce0
// 00834999  83c408               add esp, 8
// 0083499c  85c0                 test eax, eax
// 0083499e  7534                 jne 0x8349d4
// 008349a0  33c9                 xor ecx, ecx
// 008349a2  894c2408             mov dword ptr [esp + 8], ecx
// 008349a6  894c240c             mov dword ptr [esp + 0xc], ecx
// 008349aa  8b442428             mov eax, dword ptr [esp + 0x28]
// 008349ae  894c2418             mov dword ptr [esp + 0x18], ecx
// 008349b2  8908                 mov dword ptr [eax], ecx
// 008349b4  8d4c240c             lea ecx, [esp + 0xc]
// 008349b8  51                   push ecx
// 008349b9  8d4804               lea ecx, [eax + 4]
// 008349bc  e8dfdcbcff           call 0x4026a0
// 008349c1  5f                   pop edi
// 008349c2  b001                 mov al, 1
// 008349c4  5e                   pop esi
// 008349c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008349c9  64890d00000000       mov dword ptr fs:[0], ecx
// 008349d0  83c414               add esp, 0x14
// 008349d3  c3                   ret 
// 008349d4  8b542428             mov edx, dword ptr [esp + 0x28]
// 008349d8  52                   push edx
// 008349d9  56                   push esi
// 008349da  57                   push edi
// 008349db  e890fcffff           call 0x834670
// 008349e0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008349e4  83c40c               add esp, 0xc
// 008349e7  5f                   pop edi
// 008349e8  5e                   pop esi
// 008349e9  64890d00000000       mov dword ptr fs:[0], ecx
// 008349f0  83c414               add esp, 0x14
// 008349f3  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
