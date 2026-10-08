// roc 2010-06 00594810  unit: VAuthoringSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00594810
//
// 00594810  51                   push ecx
// 00594811  6a18                 push 0x18
// 00594813  c744240400000000     mov dword ptr [esp + 4], 0
// 0059481b  e880312100           call 0x7a79a0
// 00594820  83c404               add esp, 4
// 00594823  85c0                 test eax, eax
// 00594825  7424                 je 0x59484b
// 00594827  c700089ba200         mov dword ptr [eax], 0xa29b08
// 0059482d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00594831  894808               mov dword ptr [eax + 8], ecx
// 00594834  8b542410             mov edx, dword ptr [esp + 0x10]
// 00594838  89500c               mov dword ptr [eax + 0xc], edx
// 0059483b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059483f  894810               mov dword ptr [eax + 0x10], ecx
// 00594842  8b542418             mov edx, dword ptr [esp + 0x18]
// 00594846  895014               mov dword ptr [eax + 0x14], edx
// 00594849  eb02                 jmp 0x59484d
// 0059484b  33c0                 xor eax, eax
// 0059484d  56                   push esi
// 0059484e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00594852  6a00                 push 0
// 00594854  8906                 mov dword ptr [esi], eax
// 00594856  e83f312100           call 0x7a799a
// 0059485b  83c404               add esp, 4
// 0059485e  8bc6                 mov eax, esi
// 00594860  5e                   pop esi
// 00594861  59                   pop ecx
// 00594862  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
