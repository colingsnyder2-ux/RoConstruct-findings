// roc 2009-12 0075f860  unit: RBX::VInstance::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075f860
//
// 0075f860  51                   push ecx
// 0075f861  6a18                 push 0x18
// 0075f863  c744240400000000     mov dword ptr [esp + 4], 0
// 0075f86b  e8f03f0900           call 0x7f3860
// 0075f870  83c404               add esp, 4
// 0075f873  85c0                 test eax, eax
// 0075f875  7424                 je 0x75f89b
// 0075f877  c70074739e00         mov dword ptr [eax], 0x9e7374
// 0075f87d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075f881  894808               mov dword ptr [eax + 8], ecx
// 0075f884  8b542410             mov edx, dword ptr [esp + 0x10]
// 0075f888  89500c               mov dword ptr [eax + 0xc], edx
// 0075f88b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075f88f  894810               mov dword ptr [eax + 0x10], ecx
// 0075f892  8b542418             mov edx, dword ptr [esp + 0x18]
// 0075f896  895014               mov dword ptr [eax + 0x14], edx
// 0075f899  eb02                 jmp 0x75f89d
// 0075f89b  33c0                 xor eax, eax
// 0075f89d  56                   push esi
// 0075f89e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0075f8a2  6a00                 push 0
// 0075f8a4  8906                 mov dword ptr [esi], eax
// 0075f8a6  e8af3f0900           call 0x7f385a
// 0075f8ab  83c404               add esp, 4
// 0075f8ae  8bc6                 mov eax, esi
// 0075f8b0  5e                   pop esi
// 0075f8b1  59                   pop ecx
// 0075f8b2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
