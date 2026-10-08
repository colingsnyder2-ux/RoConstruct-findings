// roc 2010-06 0069f3e0  unit: RBX::FaceInstance  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069f3e0
//
// 0069f3e0  51                   push ecx
// 0069f3e1  6a18                 push 0x18
// 0069f3e3  c744240400000000     mov dword ptr [esp + 4], 0
// 0069f3eb  e8b0851000           call 0x7a79a0
// 0069f3f0  83c404               add esp, 4
// 0069f3f3  85c0                 test eax, eax
// 0069f3f5  7424                 je 0x69f41b
// 0069f3f7  c7008405a400         mov dword ptr [eax], 0xa40584
// 0069f3fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069f401  894808               mov dword ptr [eax + 8], ecx
// 0069f404  8b542410             mov edx, dword ptr [esp + 0x10]
// 0069f408  89500c               mov dword ptr [eax + 0xc], edx
// 0069f40b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069f40f  894810               mov dword ptr [eax + 0x10], ecx
// 0069f412  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069f416  895014               mov dword ptr [eax + 0x14], edx
// 0069f419  eb02                 jmp 0x69f41d
// 0069f41b  33c0                 xor eax, eax
// 0069f41d  56                   push esi
// 0069f41e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069f422  6a00                 push 0
// 0069f424  8906                 mov dword ptr [esi], eax
// 0069f426  e86f851000           call 0x7a799a
// 0069f42b  83c404               add esp, 4
// 0069f42e  8bc6                 mov eax, esi
// 0069f430  5e                   pop esi
// 0069f431  59                   pop ecx
// 0069f432  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
