// roc 2008-06 0061a720  unit: RBX::Lua::LuaArguments  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a720
//
// 0061a720  64a100000000         mov eax, dword ptr fs:[0]
// 0061a726  6aff                 push -1
// 0061a728  6868917d00           push 0x7d9168
// 0061a72d  50                   push eax
// 0061a72e  64892500000000       mov dword ptr fs:[0], esp
// 0061a735  83ec08               sub esp, 8
// 0061a738  56                   push esi
// 0061a739  8b742420             mov esi, dword ptr [esp + 0x20]
// 0061a73d  57                   push edi
// 0061a73e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0061a742  56                   push esi
// 0061a743  57                   push edi
// 0061a744  e8b776ffff           call 0x611e00
// 0061a749  83c408               add esp, 8
// 0061a74c  85c0                 test eax, eax
// 0061a74e  7534                 jne 0x61a784
// 0061a750  33c9                 xor ecx, ecx
// 0061a752  894c2408             mov dword ptr [esp + 8], ecx
// 0061a756  894c240c             mov dword ptr [esp + 0xc], ecx
// 0061a75a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061a75e  894c2418             mov dword ptr [esp + 0x18], ecx
// 0061a762  8908                 mov dword ptr [eax], ecx
// 0061a764  8d4c240c             lea ecx, [esp + 0xc]
// 0061a768  51                   push ecx
// 0061a769  8d4804               lea ecx, [eax + 4]
// 0061a76c  e83f7edeff           call 0x4025b0
// 0061a771  5f                   pop edi
// 0061a772  b001                 mov al, 1
// 0061a774  5e                   pop esi
// 0061a775  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061a779  64890d00000000       mov dword ptr fs:[0], ecx
// 0061a780  83c414               add esp, 0x14
// 0061a783  c3                   ret 
// 0061a784  8b542428             mov edx, dword ptr [esp + 0x28]
// 0061a788  52                   push edx
// 0061a789  56                   push esi
// 0061a78a  57                   push edi
// 0061a78b  e8d0fdffff           call 0x61a560
// 0061a790  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061a794  83c40c               add esp, 0xc
// 0061a797  5f                   pop edi
// 0061a798  5e                   pop esi
// 0061a799  64890d00000000       mov dword ptr fs:[0], ecx
// 0061a7a0  83c414               add esp, 0x14
// 0061a7a3  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
