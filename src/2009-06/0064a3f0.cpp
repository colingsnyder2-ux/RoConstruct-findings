// roc 2009-06 0064a3f0  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064a3f0
//
// 0064a3f0  51                   push ecx
// 0064a3f1  6a18                 push 0x18
// 0064a3f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0064a3fb  e838e60c00           call 0x718a38
// 0064a400  83c404               add esp, 4
// 0064a403  85c0                 test eax, eax
// 0064a405  7424                 je 0x64a42b
// 0064a407  c70024ee8d00         mov dword ptr [eax], 0x8dee24
// 0064a40d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064a411  894808               mov dword ptr [eax + 8], ecx
// 0064a414  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064a418  89500c               mov dword ptr [eax + 0xc], edx
// 0064a41b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064a41f  894810               mov dword ptr [eax + 0x10], ecx
// 0064a422  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064a426  895014               mov dword ptr [eax + 0x14], edx
// 0064a429  eb02                 jmp 0x64a42d
// 0064a42b  33c0                 xor eax, eax
// 0064a42d  56                   push esi
// 0064a42e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064a432  6a00                 push 0
// 0064a434  8906                 mov dword ptr [esi], eax
// 0064a436  e8f7e50c00           call 0x718a32
// 0064a43b  83c404               add esp, 4
// 0064a43e  8bc6                 mov eax, esi
// 0064a440  5e                   pop esi
// 0064a441  59                   pop ecx
// 0064a442  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
