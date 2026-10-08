// roc 2012-06 00558ac0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00558ac0
//
// 00558ac0  51                   push ecx
// 00558ac1  6a18                 push 0x18
// 00558ac3  c744240400000000     mov dword ptr [esp + 4], 0
// 00558acb  e84a964200           call 0x98211a
// 00558ad0  83c404               add esp, 4
// 00558ad3  85c0                 test eax, eax
// 00558ad5  7424                 je 0x558afb
// 00558ad7  c7008430b700         mov dword ptr [eax], 0xb73084
// 00558add  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00558ae1  894808               mov dword ptr [eax + 8], ecx
// 00558ae4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00558ae8  89500c               mov dword ptr [eax + 0xc], edx
// 00558aeb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00558aef  894810               mov dword ptr [eax + 0x10], ecx
// 00558af2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00558af6  895014               mov dword ptr [eax + 0x14], edx
// 00558af9  eb02                 jmp 0x558afd
// 00558afb  33c0                 xor eax, eax
// 00558afd  56                   push esi
// 00558afe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00558b02  6a00                 push 0
// 00558b04  8906                 mov dword ptr [esi], eax
// 00558b06  e809964200           call 0x982114
// 00558b0b  83c404               add esp, 4
// 00558b0e  8bc6                 mov eax, esi
// 00558b10  5e                   pop esi
// 00558b11  59                   pop ecx
// 00558b12  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
