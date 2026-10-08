// roc 2012-06 008e6bb0  unit: RBX::VSelectionPointLasso::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e6bb0
//
// 008e6bb0  51                   push ecx
// 008e6bb1  6a18                 push 0x18
// 008e6bb3  c744240400000000     mov dword ptr [esp + 4], 0
// 008e6bbb  e85ab50900           call 0x98211a
// 008e6bc0  83c404               add esp, 4
// 008e6bc3  85c0                 test eax, eax
// 008e6bc5  7424                 je 0x8e6beb
// 008e6bc7  c70004cfbe00         mov dword ptr [eax], 0xbecf04
// 008e6bcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e6bd1  894808               mov dword ptr [eax + 8], ecx
// 008e6bd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e6bd8  89500c               mov dword ptr [eax + 0xc], edx
// 008e6bdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e6bdf  894810               mov dword ptr [eax + 0x10], ecx
// 008e6be2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e6be6  895014               mov dword ptr [eax + 0x14], edx
// 008e6be9  eb02                 jmp 0x8e6bed
// 008e6beb  33c0                 xor eax, eax
// 008e6bed  56                   push esi
// 008e6bee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e6bf2  6a00                 push 0
// 008e6bf4  8906                 mov dword ptr [esi], eax
// 008e6bf6  e819b50900           call 0x982114
// 008e6bfb  83c404               add esp, 4
// 008e6bfe  8bc6                 mov eax, esi
// 008e6c00  5e                   pop esi
// 008e6c01  59                   pop ecx
// 008e6c02  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
