// roc 2009-12 006f0fb0  unit: RBX::P8Tool::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f0fb0
//
// 006f0fb0  51                   push ecx
// 006f0fb1  6a18                 push 0x18
// 006f0fb3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f0fbb  e8a0281000           call 0x7f3860
// 006f0fc0  83c404               add esp, 4
// 006f0fc3  85c0                 test eax, eax
// 006f0fc5  7424                 je 0x6f0feb
// 006f0fc7  c7009cb69d00         mov dword ptr [eax], 0x9db69c
// 006f0fcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f0fd1  894808               mov dword ptr [eax + 8], ecx
// 006f0fd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f0fd8  89500c               mov dword ptr [eax + 0xc], edx
// 006f0fdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f0fdf  894810               mov dword ptr [eax + 0x10], ecx
// 006f0fe2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f0fe6  895014               mov dword ptr [eax + 0x14], edx
// 006f0fe9  eb02                 jmp 0x6f0fed
// 006f0feb  33c0                 xor eax, eax
// 006f0fed  56                   push esi
// 006f0fee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f0ff2  6a00                 push 0
// 006f0ff4  8906                 mov dword ptr [esi], eax
// 006f0ff6  e85f281000           call 0x7f385a
// 006f0ffb  83c404               add esp, 4
// 006f0ffe  8bc6                 mov eax, esi
// 006f1000  5e                   pop esi
// 006f1001  59                   pop ecx
// 006f1002  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
