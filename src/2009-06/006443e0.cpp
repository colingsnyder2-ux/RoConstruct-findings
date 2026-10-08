// roc 2009-06 006443e0  unit: RBX::Soundscape::SoundChannel  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006443e0
//
// 006443e0  51                   push ecx
// 006443e1  6a18                 push 0x18
// 006443e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006443eb  e848460d00           call 0x718a38
// 006443f0  83c404               add esp, 4
// 006443f3  85c0                 test eax, eax
// 006443f5  7424                 je 0x64441b
// 006443f7  c7009ce48d00         mov dword ptr [eax], 0x8de49c
// 006443fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00644401  894808               mov dword ptr [eax + 8], ecx
// 00644404  8b542410             mov edx, dword ptr [esp + 0x10]
// 00644408  89500c               mov dword ptr [eax + 0xc], edx
// 0064440b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064440f  894810               mov dword ptr [eax + 0x10], ecx
// 00644412  8b542418             mov edx, dword ptr [esp + 0x18]
// 00644416  895014               mov dword ptr [eax + 0x14], edx
// 00644419  eb02                 jmp 0x64441d
// 0064441b  33c0                 xor eax, eax
// 0064441d  56                   push esi
// 0064441e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00644422  6a00                 push 0
// 00644424  8906                 mov dword ptr [esi], eax
// 00644426  e807460d00           call 0x718a32
// 0064442b  83c404               add esp, 4
// 0064442e  8bc6                 mov eax, esi
// 00644430  5e                   pop esi
// 00644431  59                   pop ecx
// 00644432  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
