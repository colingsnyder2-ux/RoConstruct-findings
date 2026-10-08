// roc 2010-06 0069f170  unit: RBX::VDecal::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069f170
//
// 0069f170  51                   push ecx
// 0069f171  6a18                 push 0x18
// 0069f173  c744240400000000     mov dword ptr [esp + 4], 0
// 0069f17b  e820881000           call 0x7a79a0
// 0069f180  83c404               add esp, 4
// 0069f183  85c0                 test eax, eax
// 0069f185  7424                 je 0x69f1ab
// 0069f187  c7007c04a400         mov dword ptr [eax], 0xa4047c
// 0069f18d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069f191  894808               mov dword ptr [eax + 8], ecx
// 0069f194  8b542410             mov edx, dword ptr [esp + 0x10]
// 0069f198  89500c               mov dword ptr [eax + 0xc], edx
// 0069f19b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069f19f  894810               mov dword ptr [eax + 0x10], ecx
// 0069f1a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069f1a6  895014               mov dword ptr [eax + 0x14], edx
// 0069f1a9  eb02                 jmp 0x69f1ad
// 0069f1ab  33c0                 xor eax, eax
// 0069f1ad  56                   push esi
// 0069f1ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069f1b2  6a00                 push 0
// 0069f1b4  8906                 mov dword ptr [esi], eax
// 0069f1b6  e8df871000           call 0x7a799a
// 0069f1bb  83c404               add esp, 4
// 0069f1be  8bc6                 mov eax, esi
// 0069f1c0  5e                   pop esi
// 0069f1c1  59                   pop ecx
// 0069f1c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
