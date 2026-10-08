// roc 2012-06 00542770  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00542770
//
// 00542770  51                   push ecx
// 00542771  6a18                 push 0x18
// 00542773  c744240400000000     mov dword ptr [esp + 4], 0
// 0054277b  e89af94300           call 0x98211a
// 00542780  83c404               add esp, 4
// 00542783  85c0                 test eax, eax
// 00542785  7424                 je 0x5427ab
// 00542787  c700fc1fb700         mov dword ptr [eax], 0xb71ffc
// 0054278d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00542791  894808               mov dword ptr [eax + 8], ecx
// 00542794  8b542410             mov edx, dword ptr [esp + 0x10]
// 00542798  89500c               mov dword ptr [eax + 0xc], edx
// 0054279b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054279f  894810               mov dword ptr [eax + 0x10], ecx
// 005427a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005427a6  895014               mov dword ptr [eax + 0x14], edx
// 005427a9  eb02                 jmp 0x5427ad
// 005427ab  33c0                 xor eax, eax
// 005427ad  56                   push esi
// 005427ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005427b2  6a00                 push 0
// 005427b4  8906                 mov dword ptr [esi], eax
// 005427b6  e859f94300           call 0x982114
// 005427bb  83c404               add esp, 4
// 005427be  8bc6                 mov eax, esi
// 005427c0  5e                   pop esi
// 005427c1  59                   pop ecx
// 005427c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
