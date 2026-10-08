// roc 2007-08 00588a20  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588a20
//
// 00588a20  51                   push ecx
// 00588a21  6a18                 push 0x18
// 00588a23  c744240400000000     mov dword ptr [esp + 4], 0
// 00588a2b  e8c6740a00           call 0x62fef6
// 00588a30  83c404               add esp, 4
// 00588a33  85c0                 test eax, eax
// 00588a35  7424                 je 0x588a5b
// 00588a37  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00588a3b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00588a3f  894808               mov dword ptr [eax + 8], ecx
// 00588a42  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00588a46  89500c               mov dword ptr [eax + 0xc], edx
// 00588a49  8b542418             mov edx, dword ptr [esp + 0x18]
// 00588a4d  c7006cea7a00         mov dword ptr [eax], 0x7aea6c
// 00588a53  894810               mov dword ptr [eax + 0x10], ecx
// 00588a56  895014               mov dword ptr [eax + 0x14], edx
// 00588a59  eb02                 jmp 0x588a5d
// 00588a5b  33c0                 xor eax, eax
// 00588a5d  56                   push esi
// 00588a5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00588a62  6a00                 push 0
// 00588a64  c744240800000000     mov dword ptr [esp + 8], 0
// 00588a6c  8906                 mov dword ptr [esi], eax
// 00588a6e  e8ef710a00           call 0x62fc62
// 00588a73  83c404               add esp, 4
// 00588a76  8bc6                 mov eax, esi
// 00588a78  5e                   pop esi
// 00588a79  59                   pop ecx
// 00588a7a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
