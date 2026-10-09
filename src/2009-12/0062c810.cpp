// roc 2009-12 0062c810  unit: seg_00620000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062c810
//
// 0062c810  51                   push ecx
// 0062c811  6a18                 push 0x18
// 0062c813  c744240400000000     mov dword ptr [esp + 4], 0
// 0062c81b  e840701c00           call 0x7f3860
// 0062c820  83c404               add esp, 4
// 0062c823  85c0                 test eax, eax
// 0062c825  7424                 je 0x62c84b
// 0062c827  c70098ad9c00         mov dword ptr [eax], 0x9cad98
// 0062c82d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062c831  894808               mov dword ptr [eax + 8], ecx
// 0062c834  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062c838  89500c               mov dword ptr [eax + 0xc], edx
// 0062c83b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062c83f  894810               mov dword ptr [eax + 0x10], ecx
// 0062c842  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062c846  895014               mov dword ptr [eax + 0x14], edx
// 0062c849  eb02                 jmp 0x62c84d
// 0062c84b  33c0                 xor eax, eax
// 0062c84d  56                   push esi
// 0062c84e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062c852  6a00                 push 0
// 0062c854  8906                 mov dword ptr [esi], eax
// 0062c856  e8ff6f1c00           call 0x7f385a
// 0062c85b  83c404               add esp, 4
// 0062c85e  8bc6                 mov eax, esi
// 0062c860  5e                   pop esi
// 0062c861  59                   pop ecx
// 0062c862  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
