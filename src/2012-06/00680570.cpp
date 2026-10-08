// roc 2012-06 00680570  unit: RBX::Object  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00680570
//
// 00680570  51                   push ecx
// 00680571  6a18                 push 0x18
// 00680573  c744240400000000     mov dword ptr [esp + 4], 0
// 0068057b  e89a1b3000           call 0x98211a
// 00680580  83c404               add esp, 4
// 00680583  85c0                 test eax, eax
// 00680585  7424                 je 0x6805ab
// 00680587  c700f0eeb800         mov dword ptr [eax], 0xb8eef0
// 0068058d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00680591  894808               mov dword ptr [eax + 8], ecx
// 00680594  8b542410             mov edx, dword ptr [esp + 0x10]
// 00680598  89500c               mov dword ptr [eax + 0xc], edx
// 0068059b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068059f  894810               mov dword ptr [eax + 0x10], ecx
// 006805a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006805a6  895014               mov dword ptr [eax + 0x14], edx
// 006805a9  eb02                 jmp 0x6805ad
// 006805ab  33c0                 xor eax, eax
// 006805ad  56                   push esi
// 006805ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006805b2  6a00                 push 0
// 006805b4  8906                 mov dword ptr [esi], eax
// 006805b6  e8591b3000           call 0x982114
// 006805bb  83c404               add esp, 4
// 006805be  8bc6                 mov eax, esi
// 006805c0  5e                   pop esi
// 006805c1  59                   pop ecx
// 006805c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
