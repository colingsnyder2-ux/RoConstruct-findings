// roc 2007-03 005bac00  unit: seg_005b0000  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bac00
//
// 005bac00  64a100000000         mov eax, dword ptr fs:[0]
// 005bac06  6aff                 push -1
// 005bac08  68e8397500           push 0x7539e8
// 005bac0d  50                   push eax
// 005bac0e  64892500000000       mov dword ptr fs:[0], esp
// 005bac15  83ec08               sub esp, 8
// 005bac18  56                   push esi
// 005bac19  8b742420             mov esi, dword ptr [esp + 0x20]
// 005bac1d  57                   push edi
// 005bac1e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005bac22  56                   push esi
// 005bac23  57                   push edi
// 005bac24  e817e0ffff           call 0x5b8c40
// 005bac29  83c408               add esp, 8
// 005bac2c  85c0                 test eax, eax
// 005bac2e  7534                 jne 0x5bac64
// 005bac30  33c9                 xor ecx, ecx
// 005bac32  894c2408             mov dword ptr [esp + 8], ecx
// 005bac36  894c240c             mov dword ptr [esp + 0xc], ecx
// 005bac3a  8b442428             mov eax, dword ptr [esp + 0x28]
// 005bac3e  894c2418             mov dword ptr [esp + 0x18], ecx
// 005bac42  8908                 mov dword ptr [eax], ecx
// 005bac44  8d4c240c             lea ecx, [esp + 0xc]
// 005bac48  51                   push ecx
// 005bac49  8d4804               lea ecx, [eax + 4]
// 005bac4c  e81f33e5ff           call 0x40df70
// 005bac51  5f                   pop edi
// 005bac52  b001                 mov al, 1
// 005bac54  5e                   pop esi
// 005bac55  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bac59  64890d00000000       mov dword ptr fs:[0], ecx
// 005bac60  83c414               add esp, 0x14
// 005bac63  c3                   ret 
// 005bac64  8b542428             mov edx, dword ptr [esp + 0x28]
// 005bac68  52                   push edx
// 005bac69  56                   push esi
// 005bac6a  57                   push edi
// 005bac6b  e830feffff           call 0x5baaa0
// 005bac70  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005bac74  83c40c               add esp, 0xc
// 005bac77  5f                   pop edi
// 005bac78  5e                   pop esi
// 005bac79  64890d00000000       mov dword ptr fs:[0], ecx
// 005bac80  83c414               add esp, 0x14
// 005bac83  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getPtr@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA_NPAUlua_State@@IAAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
