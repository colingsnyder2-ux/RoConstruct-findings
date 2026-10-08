// roc 2010-06 0058e410  unit: seg_00580000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058e410
//
// 0058e410  51                   push ecx
// 0058e411  6a18                 push 0x18
// 0058e413  c744240400000000     mov dword ptr [esp + 4], 0
// 0058e41b  e880952100           call 0x7a79a0
// 0058e420  83c404               add esp, 4
// 0058e423  85c0                 test eax, eax
// 0058e425  7424                 je 0x58e44b
// 0058e427  c700088ba200         mov dword ptr [eax], 0xa28b08
// 0058e42d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058e431  894808               mov dword ptr [eax + 8], ecx
// 0058e434  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058e438  89500c               mov dword ptr [eax + 0xc], edx
// 0058e43b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058e43f  894810               mov dword ptr [eax + 0x10], ecx
// 0058e442  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058e446  895014               mov dword ptr [eax + 0x14], edx
// 0058e449  eb02                 jmp 0x58e44d
// 0058e44b  33c0                 xor eax, eax
// 0058e44d  56                   push esi
// 0058e44e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058e452  6a00                 push 0
// 0058e454  8906                 mov dword ptr [esi], eax
// 0058e456  e83f952100           call 0x7a799a
// 0058e45b  83c404               add esp, 4
// 0058e45e  8bc6                 mov eax, esi
// 0058e460  5e                   pop esi
// 0058e461  59                   pop ecx
// 0058e462  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
