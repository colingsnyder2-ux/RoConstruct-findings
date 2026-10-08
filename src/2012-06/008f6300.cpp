// roc 2012-06 008f6300  unit: RBX::Scale9Frame  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f6300
//
// 008f6300  51                   push ecx
// 008f6301  6a18                 push 0x18
// 008f6303  c744240400000000     mov dword ptr [esp + 4], 0
// 008f630b  e80abe0800           call 0x98211a
// 008f6310  83c404               add esp, 4
// 008f6313  85c0                 test eax, eax
// 008f6315  7424                 je 0x8f633b
// 008f6317  c700b800bf00         mov dword ptr [eax], 0xbf00b8
// 008f631d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f6321  894808               mov dword ptr [eax + 8], ecx
// 008f6324  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f6328  89500c               mov dword ptr [eax + 0xc], edx
// 008f632b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f632f  894810               mov dword ptr [eax + 0x10], ecx
// 008f6332  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f6336  895014               mov dword ptr [eax + 0x14], edx
// 008f6339  eb02                 jmp 0x8f633d
// 008f633b  33c0                 xor eax, eax
// 008f633d  56                   push esi
// 008f633e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008f6342  6a00                 push 0
// 008f6344  8906                 mov dword ptr [esi], eax
// 008f6346  e8c9bd0800           call 0x982114
// 008f634b  83c404               add esp, 4
// 008f634e  8bc6                 mov eax, esi
// 008f6350  5e                   pop esi
// 008f6351  59                   pop ecx
// 008f6352  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
