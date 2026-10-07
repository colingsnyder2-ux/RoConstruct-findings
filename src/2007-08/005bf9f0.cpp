// roc 2007-08 005bf9f0  unit: RBX::Lua::LuaArguments  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf9f0
//
// 005bf9f0  64a100000000         mov eax, dword ptr fs:[0]
// 005bf9f6  6aff                 push -1
// 005bf9f8  68d8bc7500           push 0x75bcd8
// 005bf9fd  50                   push eax
// 005bf9fe  64892500000000       mov dword ptr fs:[0], esp
// 005bfa05  83ec08               sub esp, 8
// 005bfa08  56                   push esi
// 005bfa09  8b742420             mov esi, dword ptr [esp + 0x20]
// 005bfa0d  57                   push edi
// 005bfa0e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005bfa12  56                   push esi
// 005bfa13  57                   push edi
// 005bfa14  e857ddffff           call 0x5bd770
// 005bfa19  83c408               add esp, 8
// 005bfa1c  85c0                 test eax, eax
// 005bfa1e  7534                 jne 0x5bfa54
// 005bfa20  33c9                 xor ecx, ecx
// 005bfa22  894c2408             mov dword ptr [esp + 8], ecx
// 005bfa26  894c240c             mov dword ptr [esp + 0xc], ecx
// 005bfa2a  8b442428             mov eax, dword ptr [esp + 0x28]
// 005bfa2e  894c2418             mov dword ptr [esp + 0x18], ecx
// 005bfa32  8908                 mov dword ptr [eax], ecx
// 005bfa34  8d4c240c             lea ecx, [esp + 0xc]
// 005bfa38  51                   push ecx
// 005bfa39  8d4804               lea ecx, [eax + 4]
// 005bfa3c  e81f30e4ff           call 0x402a60
// 005bfa41  5f                   pop edi
// 005bfa42  b001                 mov al, 1
// 005bfa44  5e                   pop esi
// 005bfa45  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bfa49  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfa50  83c414               add esp, 0x14
// 005bfa53  c3                   ret 
// 005bfa54  8b542428             mov edx, dword ptr [esp + 0x28]
// 005bfa58  52                   push edx
// 005bfa59  56                   push esi
// 005bfa5a  57                   push edi
// 005bfa5b  e8d0fdffff           call 0x5bf830
// 005bfa60  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005bfa64  83c40c               add esp, 0xc
// 005bfa67  5f                   pop edi
// 005bfa68  5e                   pop esi
// 005bfa69  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfa70  83c414               add esp, 0x14
// 005bfa73  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
