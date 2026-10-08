// roc 2012-06 007914c0  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007914c0
//
// 007914c0  51                   push ecx
// 007914c1  6a18                 push 0x18
// 007914c3  c744240400000000     mov dword ptr [esp + 4], 0
// 007914cb  e84a0c1f00           call 0x98211a
// 007914d0  83c404               add esp, 4
// 007914d3  85c0                 test eax, eax
// 007914d5  7424                 je 0x7914fb
// 007914d7  c7003823bb00         mov dword ptr [eax], 0xbb2338
// 007914dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007914e1  894808               mov dword ptr [eax + 8], ecx
// 007914e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007914e8  89500c               mov dword ptr [eax + 0xc], edx
// 007914eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007914ef  894810               mov dword ptr [eax + 0x10], ecx
// 007914f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007914f6  895014               mov dword ptr [eax + 0x14], edx
// 007914f9  eb02                 jmp 0x7914fd
// 007914fb  33c0                 xor eax, eax
// 007914fd  56                   push esi
// 007914fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00791502  6a00                 push 0
// 00791504  8906                 mov dword ptr [esi], eax
// 00791506  e8090c1f00           call 0x982114
// 0079150b  83c404               add esp, 4
// 0079150e  8bc6                 mov eax, esi
// 00791510  5e                   pop esi
// 00791511  59                   pop ecx
// 00791512  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
