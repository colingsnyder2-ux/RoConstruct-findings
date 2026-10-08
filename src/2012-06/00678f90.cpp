// roc 2012-06 00678f90  unit: VAuthoringSettings::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00678f90
//
// 00678f90  51                   push ecx
// 00678f91  6a18                 push 0x18
// 00678f93  c744240400000000     mov dword ptr [esp + 4], 0
// 00678f9b  e87a913000           call 0x98211a
// 00678fa0  83c404               add esp, 4
// 00678fa3  85c0                 test eax, eax
// 00678fa5  7424                 je 0x678fcb
// 00678fa7  c70024ddb800         mov dword ptr [eax], 0xb8dd24
// 00678fad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00678fb1  894808               mov dword ptr [eax + 8], ecx
// 00678fb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00678fb8  89500c               mov dword ptr [eax + 0xc], edx
// 00678fbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00678fbf  894810               mov dword ptr [eax + 0x10], ecx
// 00678fc2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00678fc6  895014               mov dword ptr [eax + 0x14], edx
// 00678fc9  eb02                 jmp 0x678fcd
// 00678fcb  33c0                 xor eax, eax
// 00678fcd  56                   push esi
// 00678fce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00678fd2  6a00                 push 0
// 00678fd4  8906                 mov dword ptr [esi], eax
// 00678fd6  e839913000           call 0x982114
// 00678fdb  83c404               add esp, 4
// 00678fde  8bc6                 mov eax, esi
// 00678fe0  5e                   pop esi
// 00678fe1  59                   pop ecx
// 00678fe2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
