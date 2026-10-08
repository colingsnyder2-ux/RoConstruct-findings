// roc 2012-06 0080ab50  unit: RBX::Hint  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0080ab50
//
// 0080ab50  51                   push ecx
// 0080ab51  6a18                 push 0x18
// 0080ab53  c744240400000000     mov dword ptr [esp + 4], 0
// 0080ab5b  e8ba751700           call 0x98211a
// 0080ab60  83c404               add esp, 4
// 0080ab63  85c0                 test eax, eax
// 0080ab65  7424                 je 0x80ab8b
// 0080ab67  c700e449bc00         mov dword ptr [eax], 0xbc49e4
// 0080ab6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080ab71  894808               mov dword ptr [eax + 8], ecx
// 0080ab74  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080ab78  89500c               mov dword ptr [eax + 0xc], edx
// 0080ab7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080ab7f  894810               mov dword ptr [eax + 0x10], ecx
// 0080ab82  8b542418             mov edx, dword ptr [esp + 0x18]
// 0080ab86  895014               mov dword ptr [eax + 0x14], edx
// 0080ab89  eb02                 jmp 0x80ab8d
// 0080ab8b  33c0                 xor eax, eax
// 0080ab8d  56                   push esi
// 0080ab8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0080ab92  6a00                 push 0
// 0080ab94  8906                 mov dword ptr [esi], eax
// 0080ab96  e879751700           call 0x982114
// 0080ab9b  83c404               add esp, 4
// 0080ab9e  8bc6                 mov eax, esi
// 0080aba0  5e                   pop esi
// 0080aba1  59                   pop ecx
// 0080aba2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
