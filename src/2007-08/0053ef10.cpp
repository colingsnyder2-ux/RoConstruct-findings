// roc 2007-08 0053ef10  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053ef10
//
// 0053ef10  51                   push ecx
// 0053ef11  6a18                 push 0x18
// 0053ef13  c744240400000000     mov dword ptr [esp + 4], 0
// 0053ef1b  e8d60f0f00           call 0x62fef6
// 0053ef20  83c404               add esp, 4
// 0053ef23  85c0                 test eax, eax
// 0053ef25  7424                 je 0x53ef4b
// 0053ef27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053ef2b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053ef2f  894808               mov dword ptr [eax + 8], ecx
// 0053ef32  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053ef36  89500c               mov dword ptr [eax + 0xc], edx
// 0053ef39  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053ef3d  c700a8647a00         mov dword ptr [eax], 0x7a64a8
// 0053ef43  894810               mov dword ptr [eax + 0x10], ecx
// 0053ef46  895014               mov dword ptr [eax + 0x14], edx
// 0053ef49  eb02                 jmp 0x53ef4d
// 0053ef4b  33c0                 xor eax, eax
// 0053ef4d  56                   push esi
// 0053ef4e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053ef52  6a00                 push 0
// 0053ef54  c744240800000000     mov dword ptr [esp + 8], 0
// 0053ef5c  8906                 mov dword ptr [esi], eax
// 0053ef5e  e8ff0c0f00           call 0x62fc62
// 0053ef63  83c404               add esp, 4
// 0053ef66  8bc6                 mov eax, esi
// 0053ef68  5e                   pop esi
// 0053ef69  59                   pop ecx
// 0053ef6a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
