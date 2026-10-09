// roc 2009-12 006c7330  unit: RBX::IStepped  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c7330
//
// 006c7330  51                   push ecx
// 006c7331  6a18                 push 0x18
// 006c7333  c744240400000000     mov dword ptr [esp + 4], 0
// 006c733b  e820c51200           call 0x7f3860
// 006c7340  83c404               add esp, 4
// 006c7343  85c0                 test eax, eax
// 006c7345  7424                 je 0x6c736b
// 006c7347  c700c4749d00         mov dword ptr [eax], 0x9d74c4
// 006c734d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c7351  894808               mov dword ptr [eax + 8], ecx
// 006c7354  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c7358  89500c               mov dword ptr [eax + 0xc], edx
// 006c735b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c735f  894810               mov dword ptr [eax + 0x10], ecx
// 006c7362  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c7366  895014               mov dword ptr [eax + 0x14], edx
// 006c7369  eb02                 jmp 0x6c736d
// 006c736b  33c0                 xor eax, eax
// 006c736d  56                   push esi
// 006c736e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c7372  6a00                 push 0
// 006c7374  8906                 mov dword ptr [esi], eax
// 006c7376  e8dfc41200           call 0x7f385a
// 006c737b  83c404               add esp, 4
// 006c737e  8bc6                 mov eax, esi
// 006c7380  5e                   pop esi
// 006c7381  59                   pop ecx
// 006c7382  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
