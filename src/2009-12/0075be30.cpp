// roc 2009-12 0075be30  unit: RBX::TextBox  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075be30
//
// 0075be30  51                   push ecx
// 0075be31  6a18                 push 0x18
// 0075be33  c744240400000000     mov dword ptr [esp + 4], 0
// 0075be3b  e8207a0900           call 0x7f3860
// 0075be40  83c404               add esp, 4
// 0075be43  85c0                 test eax, eax
// 0075be45  7424                 je 0x75be6b
// 0075be47  c7006c689e00         mov dword ptr [eax], 0x9e686c
// 0075be4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075be51  894808               mov dword ptr [eax + 8], ecx
// 0075be54  8b542410             mov edx, dword ptr [esp + 0x10]
// 0075be58  89500c               mov dword ptr [eax + 0xc], edx
// 0075be5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075be5f  894810               mov dword ptr [eax + 0x10], ecx
// 0075be62  8b542418             mov edx, dword ptr [esp + 0x18]
// 0075be66  895014               mov dword ptr [eax + 0x14], edx
// 0075be69  eb02                 jmp 0x75be6d
// 0075be6b  33c0                 xor eax, eax
// 0075be6d  56                   push esi
// 0075be6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0075be72  6a00                 push 0
// 0075be74  8906                 mov dword ptr [esi], eax
// 0075be76  e8df790900           call 0x7f385a
// 0075be7b  83c404               add esp, 4
// 0075be7e  8bc6                 mov eax, esi
// 0075be80  5e                   pop esi
// 0075be81  59                   pop ecx
// 0075be82  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
