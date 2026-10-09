// roc 2009-12 00713480  unit: RBX::P8Smoke::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00713480
//
// 00713480  51                   push ecx
// 00713481  6a18                 push 0x18
// 00713483  c744240400000000     mov dword ptr [esp + 4], 0
// 0071348b  e8d0030e00           call 0x7f3860
// 00713490  83c404               add esp, 4
// 00713493  85c0                 test eax, eax
// 00713495  7424                 je 0x7134bb
// 00713497  c70004e59d00         mov dword ptr [eax], 0x9de504
// 0071349d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007134a1  894808               mov dword ptr [eax + 8], ecx
// 007134a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007134a8  89500c               mov dword ptr [eax + 0xc], edx
// 007134ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007134af  894810               mov dword ptr [eax + 0x10], ecx
// 007134b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007134b6  895014               mov dword ptr [eax + 0x14], edx
// 007134b9  eb02                 jmp 0x7134bd
// 007134bb  33c0                 xor eax, eax
// 007134bd  56                   push esi
// 007134be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007134c2  6a00                 push 0
// 007134c4  8906                 mov dword ptr [esi], eax
// 007134c6  e88f030e00           call 0x7f385a
// 007134cb  83c404               add esp, 4
// 007134ce  8bc6                 mov eax, esi
// 007134d0  5e                   pop esi
// 007134d1  59                   pop ecx
// 007134d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
