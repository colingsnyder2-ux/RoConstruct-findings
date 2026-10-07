// roc 2009-06 006bb4a0  unit: RBX::Lua::LuaArguments  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bb4a0
//
// 006bb4a0  64a100000000         mov eax, dword ptr fs:[0]
// 006bb4a6  6aff                 push -1
// 006bb4a8  68e8a68600           push 0x86a6e8
// 006bb4ad  50                   push eax
// 006bb4ae  64892500000000       mov dword ptr fs:[0], esp
// 006bb4b5  83ec08               sub esp, 8
// 006bb4b8  56                   push esi
// 006bb4b9  8b742420             mov esi, dword ptr [esp + 0x20]
// 006bb4bd  57                   push edi
// 006bb4be  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006bb4c2  56                   push esi
// 006bb4c3  57                   push edi
// 006bb4c4  e8a7daffff           call 0x6b8f70
// 006bb4c9  83c408               add esp, 8
// 006bb4cc  85c0                 test eax, eax
// 006bb4ce  7534                 jne 0x6bb504
// 006bb4d0  33c9                 xor ecx, ecx
// 006bb4d2  894c2408             mov dword ptr [esp + 8], ecx
// 006bb4d6  894c240c             mov dword ptr [esp + 0xc], ecx
// 006bb4da  8b442428             mov eax, dword ptr [esp + 0x28]
// 006bb4de  894c2418             mov dword ptr [esp + 0x18], ecx
// 006bb4e2  8908                 mov dword ptr [eax], ecx
// 006bb4e4  8d4c240c             lea ecx, [esp + 0xc]
// 006bb4e8  51                   push ecx
// 006bb4e9  8d4804               lea ecx, [eax + 4]
// 006bb4ec  e80f70d4ff           call 0x402500
// 006bb4f1  5f                   pop edi
// 006bb4f2  b001                 mov al, 1
// 006bb4f4  5e                   pop esi
// 006bb4f5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006bb4f9  64890d00000000       mov dword ptr fs:[0], ecx
// 006bb500  83c414               add esp, 0x14
// 006bb503  c3                   ret 
// 006bb504  8b542428             mov edx, dword ptr [esp + 0x28]
// 006bb508  52                   push edx
// 006bb509  56                   push esi
// 006bb50a  57                   push edi
// 006bb50b  e8d0fdffff           call 0x6bb2e0
// 006bb510  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006bb514  83c40c               add esp, 0xc
// 006bb517  5f                   pop edi
// 006bb518  5e                   pop esi
// 006bb519  64890d00000000       mov dword ptr fs:[0], ecx
// 006bb520  83c414               add esp, 0x14
// 006bb523  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
