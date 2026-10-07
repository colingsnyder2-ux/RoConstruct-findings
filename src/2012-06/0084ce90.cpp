// roc 2012-06 0084ce90  unit: RBX::Lua::LuaArguments  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084ce90
//
// 0084ce90  64a100000000         mov eax, dword ptr fs:[0]
// 0084ce96  6aff                 push -1
// 0084ce98  6808c8ac00           push 0xacc808
// 0084ce9d  50                   push eax
// 0084ce9e  64892500000000       mov dword ptr fs:[0], esp
// 0084cea5  83ec08               sub esp, 8
// 0084cea8  56                   push esi
// 0084cea9  8b742420             mov esi, dword ptr [esp + 0x20]
// 0084cead  57                   push edi
// 0084ceae  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0084ceb2  56                   push esi
// 0084ceb3  57                   push edi
// 0084ceb4  e8274efeff           call 0x831ce0
// 0084ceb9  83c408               add esp, 8
// 0084cebc  85c0                 test eax, eax
// 0084cebe  7534                 jne 0x84cef4
// 0084cec0  33c9                 xor ecx, ecx
// 0084cec2  894c2408             mov dword ptr [esp + 8], ecx
// 0084cec6  894c240c             mov dword ptr [esp + 0xc], ecx
// 0084ceca  8b442428             mov eax, dword ptr [esp + 0x28]
// 0084cece  894c2418             mov dword ptr [esp + 0x18], ecx
// 0084ced2  8908                 mov dword ptr [eax], ecx
// 0084ced4  8d4c240c             lea ecx, [esp + 0xc]
// 0084ced8  51                   push ecx
// 0084ced9  8d4804               lea ecx, [eax + 4]
// 0084cedc  e8bf57bbff           call 0x4026a0
// 0084cee1  5f                   pop edi
// 0084cee2  b001                 mov al, 1
// 0084cee4  5e                   pop esi
// 0084cee5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084cee9  64890d00000000       mov dword ptr fs:[0], ecx
// 0084cef0  83c414               add esp, 0x14
// 0084cef3  c3                   ret 
// 0084cef4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0084cef8  52                   push edx
// 0084cef9  56                   push esi
// 0084cefa  57                   push edi
// 0084cefb  e830f8ffff           call 0x84c730
// 0084cf00  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0084cf04  83c40c               add esp, 0xc
// 0084cf07  5f                   pop edi
// 0084cf08  5e                   pop esi
// 0084cf09  64890d00000000       mov dword ptr fs:[0], ecx
// 0084cf10  83c414               add esp, 0x14
// 0084cf13  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
