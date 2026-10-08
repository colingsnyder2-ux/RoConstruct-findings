// roc 2007-03 00542e10  unit: seg_00540000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00542e10
//
// 00542e10  51                   push ecx
// 00542e11  6a18                 push 0x18
// 00542e13  c744240400000000     mov dword ptr [esp + 4], 0
// 00542e1b  e8e8b20d00           call 0x61e108
// 00542e20  83c404               add esp, 4
// 00542e23  85c0                 test eax, eax
// 00542e25  7424                 je 0x542e4b
// 00542e27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00542e2b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00542e2f  894808               mov dword ptr [eax + 8], ecx
// 00542e32  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00542e36  89500c               mov dword ptr [eax + 0xc], edx
// 00542e39  8b542418             mov edx, dword ptr [esp + 0x18]
// 00542e3d  c7006c687a00         mov dword ptr [eax], 0x7a686c
// 00542e43  894810               mov dword ptr [eax + 0x10], ecx
// 00542e46  895014               mov dword ptr [eax + 0x14], edx
// 00542e49  eb02                 jmp 0x542e4d
// 00542e4b  33c0                 xor eax, eax
// 00542e4d  56                   push esi
// 00542e4e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00542e52  6a00                 push 0
// 00542e54  c744240800000000     mov dword ptr [esp + 8], 0
// 00542e5c  8906                 mov dword ptr [esi], eax
// 00542e5e  e88db20d00           call 0x61e0f0
// 00542e63  83c404               add esp, 4
// 00542e66  8bc6                 mov eax, esi
// 00542e68  5e                   pop esi
// 00542e69  59                   pop ecx
// 00542e6a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
