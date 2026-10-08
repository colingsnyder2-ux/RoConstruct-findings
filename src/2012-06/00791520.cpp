// roc 2012-06 00791520  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00791520
//
// 00791520  51                   push ecx
// 00791521  6a18                 push 0x18
// 00791523  c744240400000000     mov dword ptr [esp + 4], 0
// 0079152b  e8ea0b1f00           call 0x98211a
// 00791530  83c404               add esp, 4
// 00791533  85c0                 test eax, eax
// 00791535  7424                 je 0x79155b
// 00791537  c7004c23bb00         mov dword ptr [eax], 0xbb234c
// 0079153d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00791541  894808               mov dword ptr [eax + 8], ecx
// 00791544  8b542410             mov edx, dword ptr [esp + 0x10]
// 00791548  89500c               mov dword ptr [eax + 0xc], edx
// 0079154b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079154f  894810               mov dword ptr [eax + 0x10], ecx
// 00791552  8b542418             mov edx, dword ptr [esp + 0x18]
// 00791556  895014               mov dword ptr [eax + 0x14], edx
// 00791559  eb02                 jmp 0x79155d
// 0079155b  33c0                 xor eax, eax
// 0079155d  56                   push esi
// 0079155e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00791562  6a00                 push 0
// 00791564  8906                 mov dword ptr [esi], eax
// 00791566  e8a90b1f00           call 0x982114
// 0079156b  83c404               add esp, 4
// 0079156e  8bc6                 mov eax, esi
// 00791570  5e                   pop esi
// 00791571  59                   pop ecx
// 00791572  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
