// roc 2009-06 00627530  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00627530
//
// 00627530  51                   push ecx
// 00627531  6a18                 push 0x18
// 00627533  c744240400000000     mov dword ptr [esp + 4], 0
// 0062753b  e8f8140f00           call 0x718a38
// 00627540  83c404               add esp, 4
// 00627543  85c0                 test eax, eax
// 00627545  7424                 je 0x62756b
// 00627547  c7009ca48d00         mov dword ptr [eax], 0x8da49c
// 0062754d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00627551  894808               mov dword ptr [eax + 8], ecx
// 00627554  8b542410             mov edx, dword ptr [esp + 0x10]
// 00627558  89500c               mov dword ptr [eax + 0xc], edx
// 0062755b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062755f  894810               mov dword ptr [eax + 0x10], ecx
// 00627562  8b542418             mov edx, dword ptr [esp + 0x18]
// 00627566  895014               mov dword ptr [eax + 0x14], edx
// 00627569  eb02                 jmp 0x62756d
// 0062756b  33c0                 xor eax, eax
// 0062756d  56                   push esi
// 0062756e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00627572  6a00                 push 0
// 00627574  8906                 mov dword ptr [esi], eax
// 00627576  e8b7140f00           call 0x718a32
// 0062757b  83c404               add esp, 4
// 0062757e  8bc6                 mov eax, esi
// 00627580  5e                   pop esi
// 00627581  59                   pop ecx
// 00627582  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
