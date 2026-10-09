// roc 2009-12 0075f800  unit: RBX::VInstance::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075f800
//
// 0075f800  51                   push ecx
// 0075f801  6a18                 push 0x18
// 0075f803  c744240400000000     mov dword ptr [esp + 4], 0
// 0075f80b  e850400900           call 0x7f3860
// 0075f810  83c404               add esp, 4
// 0075f813  85c0                 test eax, eax
// 0075f815  7424                 je 0x75f83b
// 0075f817  c7005c739e00         mov dword ptr [eax], 0x9e735c
// 0075f81d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075f821  894808               mov dword ptr [eax + 8], ecx
// 0075f824  8b542410             mov edx, dword ptr [esp + 0x10]
// 0075f828  89500c               mov dword ptr [eax + 0xc], edx
// 0075f82b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075f82f  894810               mov dword ptr [eax + 0x10], ecx
// 0075f832  8b542418             mov edx, dword ptr [esp + 0x18]
// 0075f836  895014               mov dword ptr [eax + 0x14], edx
// 0075f839  eb02                 jmp 0x75f83d
// 0075f83b  33c0                 xor eax, eax
// 0075f83d  56                   push esi
// 0075f83e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0075f842  6a00                 push 0
// 0075f844  8906                 mov dword ptr [esi], eax
// 0075f846  e80f400900           call 0x7f385a
// 0075f84b  83c404               add esp, 4
// 0075f84e  8bc6                 mov eax, esi
// 0075f850  5e                   pop esi
// 0075f851  59                   pop ecx
// 0075f852  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
