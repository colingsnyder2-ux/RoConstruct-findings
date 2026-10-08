// roc 2007-03 00571290  unit: seg_00570000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00571290
//
// 00571290  51                   push ecx
// 00571291  6a18                 push 0x18
// 00571293  c744240400000000     mov dword ptr [esp + 4], 0
// 0057129b  e868ce0a00           call 0x61e108
// 005712a0  83c404               add esp, 4
// 005712a3  85c0                 test eax, eax
// 005712a5  7424                 je 0x5712cb
// 005712a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005712ab  8b542410             mov edx, dword ptr [esp + 0x10]
// 005712af  894808               mov dword ptr [eax + 8], ecx
// 005712b2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005712b6  89500c               mov dword ptr [eax + 0xc], edx
// 005712b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005712bd  c70020b97a00         mov dword ptr [eax], 0x7ab920
// 005712c3  894810               mov dword ptr [eax + 0x10], ecx
// 005712c6  895014               mov dword ptr [eax + 0x14], edx
// 005712c9  eb02                 jmp 0x5712cd
// 005712cb  33c0                 xor eax, eax
// 005712cd  56                   push esi
// 005712ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005712d2  6a00                 push 0
// 005712d4  c744240800000000     mov dword ptr [esp + 8], 0
// 005712dc  8906                 mov dword ptr [esi], eax
// 005712de  e80dce0a00           call 0x61e0f0
// 005712e3  83c404               add esp, 4
// 005712e6  8bc6                 mov eax, esi
// 005712e8  5e                   pop esi
// 005712e9  59                   pop ecx
// 005712ea  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
