// roc 2012-06 008e6cd0  unit: RBX::VSelectionPointLasso::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e6cd0
//
// 008e6cd0  51                   push ecx
// 008e6cd1  6a18                 push 0x18
// 008e6cd3  c744240400000000     mov dword ptr [esp + 4], 0
// 008e6cdb  e83ab40900           call 0x98211a
// 008e6ce0  83c404               add esp, 4
// 008e6ce3  85c0                 test eax, eax
// 008e6ce5  7424                 je 0x8e6d0b
// 008e6ce7  c70040cfbe00         mov dword ptr [eax], 0xbecf40
// 008e6ced  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e6cf1  894808               mov dword ptr [eax + 8], ecx
// 008e6cf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e6cf8  89500c               mov dword ptr [eax + 0xc], edx
// 008e6cfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e6cff  894810               mov dword ptr [eax + 0x10], ecx
// 008e6d02  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e6d06  895014               mov dword ptr [eax + 0x14], edx
// 008e6d09  eb02                 jmp 0x8e6d0d
// 008e6d0b  33c0                 xor eax, eax
// 008e6d0d  56                   push esi
// 008e6d0e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e6d12  6a00                 push 0
// 008e6d14  8906                 mov dword ptr [esi], eax
// 008e6d16  e8f9b30900           call 0x982114
// 008e6d1b  83c404               add esp, 4
// 008e6d1e  8bc6                 mov eax, esi
// 008e6d20  5e                   pop esi
// 008e6d21  59                   pop ecx
// 008e6d22  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
