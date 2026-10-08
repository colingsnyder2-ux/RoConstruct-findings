// roc 2009-06 00624d80  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00624d80
//
// 00624d80  51                   push ecx
// 00624d81  6a18                 push 0x18
// 00624d83  c744240400000000     mov dword ptr [esp + 4], 0
// 00624d8b  e8a83c0f00           call 0x718a38
// 00624d90  83c404               add esp, 4
// 00624d93  85c0                 test eax, eax
// 00624d95  7424                 je 0x624dbb
// 00624d97  c700909c8d00         mov dword ptr [eax], 0x8d9c90
// 00624d9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00624da1  894808               mov dword ptr [eax + 8], ecx
// 00624da4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00624da8  89500c               mov dword ptr [eax + 0xc], edx
// 00624dab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00624daf  894810               mov dword ptr [eax + 0x10], ecx
// 00624db2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00624db6  895014               mov dword ptr [eax + 0x14], edx
// 00624db9  eb02                 jmp 0x624dbd
// 00624dbb  33c0                 xor eax, eax
// 00624dbd  56                   push esi
// 00624dbe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00624dc2  6a00                 push 0
// 00624dc4  8906                 mov dword ptr [esi], eax
// 00624dc6  e8673c0f00           call 0x718a32
// 00624dcb  83c404               add esp, 4
// 00624dce  8bc6                 mov eax, esi
// 00624dd0  5e                   pop esi
// 00624dd1  59                   pop ecx
// 00624dd2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
