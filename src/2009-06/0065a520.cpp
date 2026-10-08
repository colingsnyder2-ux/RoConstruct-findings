// roc 2009-06 0065a520  unit: RBX::Camera  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065a520
//
// 0065a520  51                   push ecx
// 0065a521  6a18                 push 0x18
// 0065a523  c744240400000000     mov dword ptr [esp + 4], 0
// 0065a52b  e808e50b00           call 0x718a38
// 0065a530  83c404               add esp, 4
// 0065a533  85c0                 test eax, eax
// 0065a535  7424                 je 0x65a55b
// 0065a537  c700fc118e00         mov dword ptr [eax], 0x8e11fc
// 0065a53d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065a541  894808               mov dword ptr [eax + 8], ecx
// 0065a544  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065a548  89500c               mov dword ptr [eax + 0xc], edx
// 0065a54b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065a54f  894810               mov dword ptr [eax + 0x10], ecx
// 0065a552  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065a556  895014               mov dword ptr [eax + 0x14], edx
// 0065a559  eb02                 jmp 0x65a55d
// 0065a55b  33c0                 xor eax, eax
// 0065a55d  56                   push esi
// 0065a55e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065a562  6a00                 push 0
// 0065a564  8906                 mov dword ptr [esi], eax
// 0065a566  e8c7e40b00           call 0x718a32
// 0065a56b  83c404               add esp, 4
// 0065a56e  8bc6                 mov eax, esi
// 0065a570  5e                   pop esi
// 0065a571  59                   pop ecx
// 0065a572  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
