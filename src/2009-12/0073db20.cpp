// roc 2009-12 0073db20  unit: RBX::VClickDetector::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073db20
//
// 0073db20  51                   push ecx
// 0073db21  6a18                 push 0x18
// 0073db23  c744240400000000     mov dword ptr [esp + 4], 0
// 0073db2b  e8305d0b00           call 0x7f3860
// 0073db30  83c404               add esp, 4
// 0073db33  85c0                 test eax, eax
// 0073db35  7424                 je 0x73db5b
// 0073db37  c70058239e00         mov dword ptr [eax], 0x9e2358
// 0073db3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073db41  894808               mov dword ptr [eax + 8], ecx
// 0073db44  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073db48  89500c               mov dword ptr [eax + 0xc], edx
// 0073db4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073db4f  894810               mov dword ptr [eax + 0x10], ecx
// 0073db52  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073db56  895014               mov dword ptr [eax + 0x14], edx
// 0073db59  eb02                 jmp 0x73db5d
// 0073db5b  33c0                 xor eax, eax
// 0073db5d  56                   push esi
// 0073db5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0073db62  6a00                 push 0
// 0073db64  8906                 mov dword ptr [esi], eax
// 0073db66  e8ef5c0b00           call 0x7f385a
// 0073db6b  83c404               add esp, 4
// 0073db6e  8bc6                 mov eax, esi
// 0073db70  5e                   pop esi
// 0073db71  59                   pop ecx
// 0073db72  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
