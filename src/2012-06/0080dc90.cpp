// roc 2012-06 0080dc90  unit: RBX::TextBox  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0080dc90
//
// 0080dc90  51                   push ecx
// 0080dc91  6a18                 push 0x18
// 0080dc93  c744240400000000     mov dword ptr [esp + 4], 0
// 0080dc9b  e87a441700           call 0x98211a
// 0080dca0  83c404               add esp, 4
// 0080dca3  85c0                 test eax, eax
// 0080dca5  7424                 je 0x80dccb
// 0080dca7  c700ac53bc00         mov dword ptr [eax], 0xbc53ac
// 0080dcad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080dcb1  894808               mov dword ptr [eax + 8], ecx
// 0080dcb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080dcb8  89500c               mov dword ptr [eax + 0xc], edx
// 0080dcbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080dcbf  894810               mov dword ptr [eax + 0x10], ecx
// 0080dcc2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0080dcc6  895014               mov dword ptr [eax + 0x14], edx
// 0080dcc9  eb02                 jmp 0x80dccd
// 0080dccb  33c0                 xor eax, eax
// 0080dccd  56                   push esi
// 0080dcce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0080dcd2  6a00                 push 0
// 0080dcd4  8906                 mov dword ptr [esi], eax
// 0080dcd6  e839441700           call 0x982114
// 0080dcdb  83c404               add esp, 4
// 0080dcde  8bc6                 mov eax, esi
// 0080dce0  5e                   pop esi
// 0080dce1  59                   pop ecx
// 0080dce2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
