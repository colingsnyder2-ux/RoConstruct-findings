// roc 2010-06 006e6320  unit: RBX::VInstance::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e6320
//
// 006e6320  51                   push ecx
// 006e6321  6a18                 push 0x18
// 006e6323  c744240400000000     mov dword ptr [esp + 4], 0
// 006e632b  e870160c00           call 0x7a79a0
// 006e6330  83c404               add esp, 4
// 006e6333  85c0                 test eax, eax
// 006e6335  7424                 je 0x6e635b
// 006e6337  c700ac97a400         mov dword ptr [eax], 0xa497ac
// 006e633d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e6341  894808               mov dword ptr [eax + 8], ecx
// 006e6344  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e6348  89500c               mov dword ptr [eax + 0xc], edx
// 006e634b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e634f  894810               mov dword ptr [eax + 0x10], ecx
// 006e6352  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e6356  895014               mov dword ptr [eax + 0x14], edx
// 006e6359  eb02                 jmp 0x6e635d
// 006e635b  33c0                 xor eax, eax
// 006e635d  56                   push esi
// 006e635e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e6362  6a00                 push 0
// 006e6364  8906                 mov dword ptr [esi], eax
// 006e6366  e82f160c00           call 0x7a799a
// 006e636b  83c404               add esp, 4
// 006e636e  8bc6                 mov eax, esi
// 006e6370  5e                   pop esi
// 006e6371  59                   pop ecx
// 006e6372  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
