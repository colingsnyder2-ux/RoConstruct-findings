// roc 2012-06 008e5390  unit: RBX::P8SelectionPointLasso::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e5390
//
// 008e5390  51                   push ecx
// 008e5391  6a18                 push 0x18
// 008e5393  c744240400000000     mov dword ptr [esp + 4], 0
// 008e539b  e87acd0900           call 0x98211a
// 008e53a0  83c404               add esp, 4
// 008e53a3  85c0                 test eax, eax
// 008e53a5  7424                 je 0x8e53cb
// 008e53a7  c70098c9be00         mov dword ptr [eax], 0xbec998
// 008e53ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e53b1  894808               mov dword ptr [eax + 8], ecx
// 008e53b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e53b8  89500c               mov dword ptr [eax + 0xc], edx
// 008e53bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e53bf  894810               mov dword ptr [eax + 0x10], ecx
// 008e53c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e53c6  895014               mov dword ptr [eax + 0x14], edx
// 008e53c9  eb02                 jmp 0x8e53cd
// 008e53cb  33c0                 xor eax, eax
// 008e53cd  56                   push esi
// 008e53ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e53d2  6a00                 push 0
// 008e53d4  8906                 mov dword ptr [esi], eax
// 008e53d6  e839cd0900           call 0x982114
// 008e53db  83c404               add esp, 4
// 008e53de  8bc6                 mov eax, esi
// 008e53e0  5e                   pop esi
// 008e53e1  59                   pop ecx
// 008e53e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
