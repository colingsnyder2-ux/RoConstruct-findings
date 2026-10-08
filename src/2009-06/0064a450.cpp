// roc 2009-06 0064a450  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064a450
//
// 0064a450  51                   push ecx
// 0064a451  6a18                 push 0x18
// 0064a453  c744240400000000     mov dword ptr [esp + 4], 0
// 0064a45b  e8d8e50c00           call 0x718a38
// 0064a460  83c404               add esp, 4
// 0064a463  85c0                 test eax, eax
// 0064a465  7424                 je 0x64a48b
// 0064a467  c70038ee8d00         mov dword ptr [eax], 0x8dee38
// 0064a46d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064a471  894808               mov dword ptr [eax + 8], ecx
// 0064a474  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064a478  89500c               mov dword ptr [eax + 0xc], edx
// 0064a47b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064a47f  894810               mov dword ptr [eax + 0x10], ecx
// 0064a482  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064a486  895014               mov dword ptr [eax + 0x14], edx
// 0064a489  eb02                 jmp 0x64a48d
// 0064a48b  33c0                 xor eax, eax
// 0064a48d  56                   push esi
// 0064a48e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064a492  6a00                 push 0
// 0064a494  8906                 mov dword ptr [esi], eax
// 0064a496  e897e50c00           call 0x718a32
// 0064a49b  83c404               add esp, 4
// 0064a49e  8bc6                 mov eax, esi
// 0064a4a0  5e                   pop esi
// 0064a4a1  59                   pop ecx
// 0064a4a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
