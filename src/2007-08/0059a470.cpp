// roc 2007-08 0059a470  unit: RBX::VCamera::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059a470
//
// 0059a470  51                   push ecx
// 0059a471  6a18                 push 0x18
// 0059a473  c744240400000000     mov dword ptr [esp + 4], 0
// 0059a47b  e8765a0900           call 0x62fef6
// 0059a480  83c404               add esp, 4
// 0059a483  85c0                 test eax, eax
// 0059a485  7424                 je 0x59a4ab
// 0059a487  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059a48b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059a48f  894808               mov dword ptr [eax + 8], ecx
// 0059a492  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059a496  89500c               mov dword ptr [eax + 0xc], edx
// 0059a499  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059a49d  c70030167b00         mov dword ptr [eax], 0x7b1630
// 0059a4a3  894810               mov dword ptr [eax + 0x10], ecx
// 0059a4a6  895014               mov dword ptr [eax + 0x14], edx
// 0059a4a9  eb02                 jmp 0x59a4ad
// 0059a4ab  33c0                 xor eax, eax
// 0059a4ad  56                   push esi
// 0059a4ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059a4b2  6a00                 push 0
// 0059a4b4  c744240800000000     mov dword ptr [esp + 8], 0
// 0059a4bc  8906                 mov dword ptr [esi], eax
// 0059a4be  e89f570900           call 0x62fc62
// 0059a4c3  83c404               add esp, 4
// 0059a4c6  8bc6                 mov eax, esi
// 0059a4c8  5e                   pop esi
// 0059a4c9  59                   pop ecx
// 0059a4ca  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
