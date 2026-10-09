// roc 2009-12 00747940  unit: RBX::Handles  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00747940
//
// 00747940  51                   push ecx
// 00747941  6a18                 push 0x18
// 00747943  c744240400000000     mov dword ptr [esp + 4], 0
// 0074794b  e810bf0a00           call 0x7f3860
// 00747950  83c404               add esp, 4
// 00747953  85c0                 test eax, eax
// 00747955  7424                 je 0x74797b
// 00747957  c700a83b9e00         mov dword ptr [eax], 0x9e3ba8
// 0074795d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00747961  894808               mov dword ptr [eax + 8], ecx
// 00747964  8b542410             mov edx, dword ptr [esp + 0x10]
// 00747968  89500c               mov dword ptr [eax + 0xc], edx
// 0074796b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074796f  894810               mov dword ptr [eax + 0x10], ecx
// 00747972  8b542418             mov edx, dword ptr [esp + 0x18]
// 00747976  895014               mov dword ptr [eax + 0x14], edx
// 00747979  eb02                 jmp 0x74797d
// 0074797b  33c0                 xor eax, eax
// 0074797d  56                   push esi
// 0074797e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00747982  6a00                 push 0
// 00747984  8906                 mov dword ptr [esi], eax
// 00747986  e8cfbe0a00           call 0x7f385a
// 0074798b  83c404               add esp, 4
// 0074798e  8bc6                 mov eax, esi
// 00747990  5e                   pop esi
// 00747991  59                   pop ecx
// 00747992  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
