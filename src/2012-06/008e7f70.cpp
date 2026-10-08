// roc 2012-06 008e7f70  unit: RBX::P8TextureTrail::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e7f70
//
// 008e7f70  51                   push ecx
// 008e7f71  6a18                 push 0x18
// 008e7f73  c744240400000000     mov dword ptr [esp + 4], 0
// 008e7f7b  e89aa10900           call 0x98211a
// 008e7f80  83c404               add esp, 4
// 008e7f83  85c0                 test eax, eax
// 008e7f85  7424                 je 0x8e7fab
// 008e7f87  c70090d3be00         mov dword ptr [eax], 0xbed390
// 008e7f8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e7f91  894808               mov dword ptr [eax + 8], ecx
// 008e7f94  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e7f98  89500c               mov dword ptr [eax + 0xc], edx
// 008e7f9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e7f9f  894810               mov dword ptr [eax + 0x10], ecx
// 008e7fa2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e7fa6  895014               mov dword ptr [eax + 0x14], edx
// 008e7fa9  eb02                 jmp 0x8e7fad
// 008e7fab  33c0                 xor eax, eax
// 008e7fad  56                   push esi
// 008e7fae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e7fb2  6a00                 push 0
// 008e7fb4  8906                 mov dword ptr [esi], eax
// 008e7fb6  e859a10900           call 0x982114
// 008e7fbb  83c404               add esp, 4
// 008e7fbe  8bc6                 mov eax, esi
// 008e7fc0  5e                   pop esi
// 008e7fc1  59                   pop ecx
// 008e7fc2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
