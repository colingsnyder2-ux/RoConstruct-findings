// roc 2010-06 0069f800  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069f800
//
// 0069f800  51                   push ecx
// 0069f801  6a18                 push 0x18
// 0069f803  c744240400000000     mov dword ptr [esp + 4], 0
// 0069f80b  e890811000           call 0x7a79a0
// 0069f810  83c404               add esp, 4
// 0069f813  85c0                 test eax, eax
// 0069f815  7424                 je 0x69f83b
// 0069f817  c7008c07a400         mov dword ptr [eax], 0xa4078c
// 0069f81d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069f821  894808               mov dword ptr [eax + 8], ecx
// 0069f824  8b542410             mov edx, dword ptr [esp + 0x10]
// 0069f828  89500c               mov dword ptr [eax + 0xc], edx
// 0069f82b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069f82f  894810               mov dword ptr [eax + 0x10], ecx
// 0069f832  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069f836  895014               mov dword ptr [eax + 0x14], edx
// 0069f839  eb02                 jmp 0x69f83d
// 0069f83b  33c0                 xor eax, eax
// 0069f83d  56                   push esi
// 0069f83e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069f842  6a00                 push 0
// 0069f844  8906                 mov dword ptr [esi], eax
// 0069f846  e84f811000           call 0x7a799a
// 0069f84b  83c404               add esp, 4
// 0069f84e  8bc6                 mov eax, esi
// 0069f850  5e                   pop esi
// 0069f851  59                   pop ecx
// 0069f852  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
