// roc 2010-06 00723a80  unit: RBX::Lua::LuaArguments  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00723a80
//
// 00723a80  64a100000000         mov eax, dword ptr fs:[0]
// 00723a86  6aff                 push -1
// 00723a88  6898929800           push 0x989298
// 00723a8d  50                   push eax
// 00723a8e  64892500000000       mov dword ptr fs:[0], esp
// 00723a95  83ec08               sub esp, 8
// 00723a98  56                   push esi
// 00723a99  8b742420             mov esi, dword ptr [esp + 0x20]
// 00723a9d  57                   push edi
// 00723a9e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00723aa2  56                   push esi
// 00723aa3  57                   push edi
// 00723aa4  e897d6ffff           call 0x721140
// 00723aa9  83c408               add esp, 8
// 00723aac  85c0                 test eax, eax
// 00723aae  7534                 jne 0x723ae4
// 00723ab0  33c9                 xor ecx, ecx
// 00723ab2  894c2408             mov dword ptr [esp + 8], ecx
// 00723ab6  894c240c             mov dword ptr [esp + 0xc], ecx
// 00723aba  8b442428             mov eax, dword ptr [esp + 0x28]
// 00723abe  894c2418             mov dword ptr [esp + 0x18], ecx
// 00723ac2  8908                 mov dword ptr [eax], ecx
// 00723ac4  8d4c240c             lea ecx, [esp + 0xc]
// 00723ac8  51                   push ecx
// 00723ac9  8d4804               lea ecx, [eax + 4]
// 00723acc  e8bfe5cdff           call 0x402090
// 00723ad1  5f                   pop edi
// 00723ad2  b001                 mov al, 1
// 00723ad4  5e                   pop esi
// 00723ad5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00723ad9  64890d00000000       mov dword ptr fs:[0], ecx
// 00723ae0  83c414               add esp, 0x14
// 00723ae3  c3                   ret 
// 00723ae4  8b542428             mov edx, dword ptr [esp + 0x28]
// 00723ae8  52                   push edx
// 00723ae9  56                   push esi
// 00723aea  57                   push edi
// 00723aeb  e8b0fbffff           call 0x7236a0
// 00723af0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00723af4  83c40c               add esp, 0xc
// 00723af7  5f                   pop edi
// 00723af8  5e                   pop esi
// 00723af9  64890d00000000       mov dword ptr fs:[0], ecx
// 00723b00  83c414               add esp, 0x14
// 00723b03  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
