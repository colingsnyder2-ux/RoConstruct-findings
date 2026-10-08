// roc 2009-06 00644320  unit: RBX::Soundscape::SoundChannel  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00644320
//
// 00644320  51                   push ecx
// 00644321  6a18                 push 0x18
// 00644323  c744240400000000     mov dword ptr [esp + 4], 0
// 0064432b  e808470d00           call 0x718a38
// 00644330  83c404               add esp, 4
// 00644333  85c0                 test eax, eax
// 00644335  7424                 je 0x64435b
// 00644337  c70074e48d00         mov dword ptr [eax], 0x8de474
// 0064433d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00644341  894808               mov dword ptr [eax + 8], ecx
// 00644344  8b542410             mov edx, dword ptr [esp + 0x10]
// 00644348  89500c               mov dword ptr [eax + 0xc], edx
// 0064434b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064434f  894810               mov dword ptr [eax + 0x10], ecx
// 00644352  8b542418             mov edx, dword ptr [esp + 0x18]
// 00644356  895014               mov dword ptr [eax + 0x14], edx
// 00644359  eb02                 jmp 0x64435d
// 0064435b  33c0                 xor eax, eax
// 0064435d  56                   push esi
// 0064435e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00644362  6a00                 push 0
// 00644364  8906                 mov dword ptr [esi], eax
// 00644366  e8c7460d00           call 0x718a32
// 0064436b  83c404               add esp, 4
// 0064436e  8bc6                 mov eax, esi
// 00644370  5e                   pop esi
// 00644371  59                   pop ecx
// 00644372  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
