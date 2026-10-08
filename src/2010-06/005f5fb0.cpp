// roc 2010-06 005f5fb0  unit: RBX::VTextureId::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f5fb0
//
// 005f5fb0  51                   push ecx
// 005f5fb1  6a18                 push 0x18
// 005f5fb3  c744240400000000     mov dword ptr [esp + 4], 0
// 005f5fbb  e8e0191b00           call 0x7a79a0
// 005f5fc0  83c404               add esp, 4
// 005f5fc3  85c0                 test eax, eax
// 005f5fc5  7424                 je 0x5f5feb
// 005f5fc7  c70020f7a200         mov dword ptr [eax], 0xa2f720
// 005f5fcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f5fd1  894808               mov dword ptr [eax + 8], ecx
// 005f5fd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f5fd8  89500c               mov dword ptr [eax + 0xc], edx
// 005f5fdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f5fdf  894810               mov dword ptr [eax + 0x10], ecx
// 005f5fe2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005f5fe6  895014               mov dword ptr [eax + 0x14], edx
// 005f5fe9  eb02                 jmp 0x5f5fed
// 005f5feb  33c0                 xor eax, eax
// 005f5fed  56                   push esi
// 005f5fee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f5ff2  6a00                 push 0
// 005f5ff4  8906                 mov dword ptr [esi], eax
// 005f5ff6  e89f191b00           call 0x7a799a
// 005f5ffb  83c404               add esp, 4
// 005f5ffe  8bc6                 mov eax, esi
// 005f6000  5e                   pop esi
// 005f6001  59                   pop ecx
// 005f6002  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
