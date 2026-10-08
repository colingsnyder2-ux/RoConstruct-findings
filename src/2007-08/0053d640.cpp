// roc 2007-08 0053d640  unit: RBX::VLocalScript::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d640
//
// 0053d640  51                   push ecx
// 0053d641  6a18                 push 0x18
// 0053d643  c744240400000000     mov dword ptr [esp + 4], 0
// 0053d64b  e8a6280f00           call 0x62fef6
// 0053d650  83c404               add esp, 4
// 0053d653  85c0                 test eax, eax
// 0053d655  7424                 je 0x53d67b
// 0053d657  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053d65b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053d65f  894808               mov dword ptr [eax + 8], ecx
// 0053d662  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053d666  89500c               mov dword ptr [eax + 0xc], edx
// 0053d669  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053d66d  c700605e7a00         mov dword ptr [eax], 0x7a5e60
// 0053d673  894810               mov dword ptr [eax + 0x10], ecx
// 0053d676  895014               mov dword ptr [eax + 0x14], edx
// 0053d679  eb02                 jmp 0x53d67d
// 0053d67b  33c0                 xor eax, eax
// 0053d67d  56                   push esi
// 0053d67e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053d682  6a00                 push 0
// 0053d684  c744240800000000     mov dword ptr [esp + 8], 0
// 0053d68c  8906                 mov dword ptr [esi], eax
// 0053d68e  e8cf250f00           call 0x62fc62
// 0053d693  83c404               add esp, 4
// 0053d696  8bc6                 mov eax, esi
// 0053d698  5e                   pop esi
// 0053d699  59                   pop ecx
// 0053d69a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
