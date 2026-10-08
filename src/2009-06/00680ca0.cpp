// roc 2009-06 00680ca0  unit: RBX::VInstance::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00680ca0
//
// 00680ca0  51                   push ecx
// 00680ca1  6a18                 push 0x18
// 00680ca3  c744240400000000     mov dword ptr [esp + 4], 0
// 00680cab  e8887d0900           call 0x718a38
// 00680cb0  83c404               add esp, 4
// 00680cb3  85c0                 test eax, eax
// 00680cb5  7424                 je 0x680cdb
// 00680cb7  c700a05a8e00         mov dword ptr [eax], 0x8e5aa0
// 00680cbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00680cc1  894808               mov dword ptr [eax + 8], ecx
// 00680cc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00680cc8  89500c               mov dword ptr [eax + 0xc], edx
// 00680ccb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00680ccf  894810               mov dword ptr [eax + 0x10], ecx
// 00680cd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00680cd6  895014               mov dword ptr [eax + 0x14], edx
// 00680cd9  eb02                 jmp 0x680cdd
// 00680cdb  33c0                 xor eax, eax
// 00680cdd  56                   push esi
// 00680cde  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00680ce2  6a00                 push 0
// 00680ce4  8906                 mov dword ptr [esi], eax
// 00680ce6  e8477d0900           call 0x718a32
// 00680ceb  83c404               add esp, 4
// 00680cee  8bc6                 mov eax, esi
// 00680cf0  5e                   pop esi
// 00680cf1  59                   pop ecx
// 00680cf2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
