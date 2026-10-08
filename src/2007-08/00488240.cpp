// roc 2007-08 00488240  unit: P8CRenderSettings::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00488240
//
// 00488240  51                   push ecx
// 00488241  6a18                 push 0x18
// 00488243  c744240400000000     mov dword ptr [esp + 4], 0
// 0048824b  e8a67c1a00           call 0x62fef6
// 00488250  83c404               add esp, 4
// 00488253  85c0                 test eax, eax
// 00488255  7424                 je 0x48827b
// 00488257  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048825b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048825f  894808               mov dword ptr [eax + 8], ecx
// 00488262  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00488266  89500c               mov dword ptr [eax + 0xc], edx
// 00488269  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048826d  c700a0ae7900         mov dword ptr [eax], 0x79aea0
// 00488273  894810               mov dword ptr [eax + 0x10], ecx
// 00488276  895014               mov dword ptr [eax + 0x14], edx
// 00488279  eb02                 jmp 0x48827d
// 0048827b  33c0                 xor eax, eax
// 0048827d  56                   push esi
// 0048827e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00488282  6a00                 push 0
// 00488284  c744240800000000     mov dword ptr [esp + 8], 0
// 0048828c  8906                 mov dword ptr [esi], eax
// 0048828e  e8cf791a00           call 0x62fc62
// 00488293  83c404               add esp, 4
// 00488296  8bc6                 mov eax, esi
// 00488298  5e                   pop esi
// 00488299  59                   pop ecx
// 0048829a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
