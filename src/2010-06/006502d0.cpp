// roc 2010-06 006502d0  unit: RBX::VPlayerCamera::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006502d0
//
// 006502d0  51                   push ecx
// 006502d1  6a18                 push 0x18
// 006502d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006502db  e8c0761500           call 0x7a79a0
// 006502e0  83c404               add esp, 4
// 006502e3  85c0                 test eax, eax
// 006502e5  7424                 je 0x65030b
// 006502e7  c7000492a300         mov dword ptr [eax], 0xa39204
// 006502ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006502f1  894808               mov dword ptr [eax + 8], ecx
// 006502f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006502f8  89500c               mov dword ptr [eax + 0xc], edx
// 006502fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006502ff  894810               mov dword ptr [eax + 0x10], ecx
// 00650302  8b542418             mov edx, dword ptr [esp + 0x18]
// 00650306  895014               mov dword ptr [eax + 0x14], edx
// 00650309  eb02                 jmp 0x65030d
// 0065030b  33c0                 xor eax, eax
// 0065030d  56                   push esi
// 0065030e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00650312  6a00                 push 0
// 00650314  8906                 mov dword ptr [esi], eax
// 00650316  e87f761500           call 0x7a799a
// 0065031b  83c404               add esp, 4
// 0065031e  8bc6                 mov eax, esi
// 00650320  5e                   pop esi
// 00650321  59                   pop ecx
// 00650322  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
