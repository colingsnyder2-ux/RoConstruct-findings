// roc 2012-06 00542820  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00542820
//
// 00542820  51                   push ecx
// 00542821  6a18                 push 0x18
// 00542823  c744240400000000     mov dword ptr [esp + 4], 0
// 0054282b  e8eaf84300           call 0x98211a
// 00542830  83c404               add esp, 4
// 00542833  85c0                 test eax, eax
// 00542835  7424                 je 0x54285b
// 00542837  c7002420b700         mov dword ptr [eax], 0xb72024
// 0054283d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00542841  894808               mov dword ptr [eax + 8], ecx
// 00542844  8b542410             mov edx, dword ptr [esp + 0x10]
// 00542848  89500c               mov dword ptr [eax + 0xc], edx
// 0054284b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054284f  894810               mov dword ptr [eax + 0x10], ecx
// 00542852  8b542418             mov edx, dword ptr [esp + 0x18]
// 00542856  895014               mov dword ptr [eax + 0x14], edx
// 00542859  eb02                 jmp 0x54285d
// 0054285b  33c0                 xor eax, eax
// 0054285d  56                   push esi
// 0054285e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00542862  6a00                 push 0
// 00542864  8906                 mov dword ptr [esi], eax
// 00542866  e8a9f84300           call 0x982114
// 0054286b  83c404               add esp, 4
// 0054286e  8bc6                 mov eax, esi
// 00542870  5e                   pop esi
// 00542871  59                   pop ecx
// 00542872  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
