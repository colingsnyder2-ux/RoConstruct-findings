// roc 2009-12 0062c7b0  unit: seg_00620000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062c7b0
//
// 0062c7b0  51                   push ecx
// 0062c7b1  6a18                 push 0x18
// 0062c7b3  c744240400000000     mov dword ptr [esp + 4], 0
// 0062c7bb  e8a0701c00           call 0x7f3860
// 0062c7c0  83c404               add esp, 4
// 0062c7c3  85c0                 test eax, eax
// 0062c7c5  7424                 je 0x62c7eb
// 0062c7c7  c70080ad9c00         mov dword ptr [eax], 0x9cad80
// 0062c7cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062c7d1  894808               mov dword ptr [eax + 8], ecx
// 0062c7d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062c7d8  89500c               mov dword ptr [eax + 0xc], edx
// 0062c7db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062c7df  894810               mov dword ptr [eax + 0x10], ecx
// 0062c7e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062c7e6  895014               mov dword ptr [eax + 0x14], edx
// 0062c7e9  eb02                 jmp 0x62c7ed
// 0062c7eb  33c0                 xor eax, eax
// 0062c7ed  56                   push esi
// 0062c7ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062c7f2  6a00                 push 0
// 0062c7f4  8906                 mov dword ptr [esi], eax
// 0062c7f6  e85f701c00           call 0x7f385a
// 0062c7fb  83c404               add esp, 4
// 0062c7fe  8bc6                 mov eax, esi
// 0062c800  5e                   pop esi
// 0062c801  59                   pop ecx
// 0062c802  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
