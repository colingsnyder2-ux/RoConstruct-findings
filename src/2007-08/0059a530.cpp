// roc 2007-08 0059a530  unit: RBX::VCamera::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059a530
//
// 0059a530  51                   push ecx
// 0059a531  6a18                 push 0x18
// 0059a533  c744240400000000     mov dword ptr [esp + 4], 0
// 0059a53b  e8b6590900           call 0x62fef6
// 0059a540  83c404               add esp, 4
// 0059a543  85c0                 test eax, eax
// 0059a545  7424                 je 0x59a56b
// 0059a547  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059a54b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059a54f  894808               mov dword ptr [eax + 8], ecx
// 0059a552  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059a556  89500c               mov dword ptr [eax + 0xc], edx
// 0059a559  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059a55d  c70050167b00         mov dword ptr [eax], 0x7b1650
// 0059a563  894810               mov dword ptr [eax + 0x10], ecx
// 0059a566  895014               mov dword ptr [eax + 0x14], edx
// 0059a569  eb02                 jmp 0x59a56d
// 0059a56b  33c0                 xor eax, eax
// 0059a56d  56                   push esi
// 0059a56e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059a572  6a00                 push 0
// 0059a574  c744240800000000     mov dword ptr [esp + 8], 0
// 0059a57c  8906                 mov dword ptr [esi], eax
// 0059a57e  e8df560900           call 0x62fc62
// 0059a583  83c404               add esp, 4
// 0059a586  8bc6                 mov eax, esi
// 0059a588  5e                   pop esi
// 0059a589  59                   pop ecx
// 0059a58a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
