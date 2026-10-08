// roc 2010-06 006bd450  unit: RBX::CharacterMesh  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bd450
//
// 006bd450  51                   push ecx
// 006bd451  6a18                 push 0x18
// 006bd453  c744240400000000     mov dword ptr [esp + 4], 0
// 006bd45b  e840a50e00           call 0x7a79a0
// 006bd460  83c404               add esp, 4
// 006bd463  85c0                 test eax, eax
// 006bd465  7424                 je 0x6bd48b
// 006bd467  c7007431a400         mov dword ptr [eax], 0xa43174
// 006bd46d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006bd471  894808               mov dword ptr [eax + 8], ecx
// 006bd474  8b542410             mov edx, dword ptr [esp + 0x10]
// 006bd478  89500c               mov dword ptr [eax + 0xc], edx
// 006bd47b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006bd47f  894810               mov dword ptr [eax + 0x10], ecx
// 006bd482  8b542418             mov edx, dword ptr [esp + 0x18]
// 006bd486  895014               mov dword ptr [eax + 0x14], edx
// 006bd489  eb02                 jmp 0x6bd48d
// 006bd48b  33c0                 xor eax, eax
// 006bd48d  56                   push esi
// 006bd48e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bd492  6a00                 push 0
// 006bd494  8906                 mov dword ptr [esi], eax
// 006bd496  e8ffa40e00           call 0x7a799a
// 006bd49b  83c404               add esp, 4
// 006bd49e  8bc6                 mov eax, esi
// 006bd4a0  5e                   pop esi
// 006bd4a1  59                   pop ecx
// 006bd4a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
