// roc 2012-06 008e53f0  unit: RBX::P8SelectionPointLasso::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e53f0
//
// 008e53f0  51                   push ecx
// 008e53f1  6a18                 push 0x18
// 008e53f3  c744240400000000     mov dword ptr [esp + 4], 0
// 008e53fb  e81acd0900           call 0x98211a
// 008e5400  83c404               add esp, 4
// 008e5403  85c0                 test eax, eax
// 008e5405  7424                 je 0x8e542b
// 008e5407  c700acc9be00         mov dword ptr [eax], 0xbec9ac
// 008e540d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e5411  894808               mov dword ptr [eax + 8], ecx
// 008e5414  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e5418  89500c               mov dword ptr [eax + 0xc], edx
// 008e541b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e541f  894810               mov dword ptr [eax + 0x10], ecx
// 008e5422  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e5426  895014               mov dword ptr [eax + 0x14], edx
// 008e5429  eb02                 jmp 0x8e542d
// 008e542b  33c0                 xor eax, eax
// 008e542d  56                   push esi
// 008e542e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e5432  6a00                 push 0
// 008e5434  8906                 mov dword ptr [esi], eax
// 008e5436  e8d9cc0900           call 0x982114
// 008e543b  83c404               add esp, 4
// 008e543e  8bc6                 mov eax, esi
// 008e5440  5e                   pop esi
// 008e5441  59                   pop ecx
// 008e5442  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
