// roc 2012-06 007e5870  unit: RBX::Assembly  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e5870
//
// 007e5870  51                   push ecx
// 007e5871  6a18                 push 0x18
// 007e5873  c744240400000000     mov dword ptr [esp + 4], 0
// 007e587b  e89ac81900           call 0x98211a
// 007e5880  83c404               add esp, 4
// 007e5883  85c0                 test eax, eax
// 007e5885  7424                 je 0x7e58ab
// 007e5887  c7002821bc00         mov dword ptr [eax], 0xbc2128
// 007e588d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e5891  894808               mov dword ptr [eax + 8], ecx
// 007e5894  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e5898  89500c               mov dword ptr [eax + 0xc], edx
// 007e589b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e589f  894810               mov dword ptr [eax + 0x10], ecx
// 007e58a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e58a6  895014               mov dword ptr [eax + 0x14], edx
// 007e58a9  eb02                 jmp 0x7e58ad
// 007e58ab  33c0                 xor eax, eax
// 007e58ad  56                   push esi
// 007e58ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e58b2  6a00                 push 0
// 007e58b4  8906                 mov dword ptr [esi], eax
// 007e58b6  e859c81900           call 0x982114
// 007e58bb  83c404               add esp, 4
// 007e58be  8bc6                 mov eax, esi
// 007e58c0  5e                   pop esi
// 007e58c1  59                   pop ecx
// 007e58c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
