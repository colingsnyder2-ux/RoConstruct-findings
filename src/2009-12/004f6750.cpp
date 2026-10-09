// roc 2009-12 004f6750  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f6750
//
// 004f6750  51                   push ecx
// 004f6751  6a18                 push 0x18
// 004f6753  c744240400000000     mov dword ptr [esp + 4], 0
// 004f675b  e800d12f00           call 0x7f3860
// 004f6760  83c404               add esp, 4
// 004f6763  85c0                 test eax, eax
// 004f6765  7424                 je 0x4f678b
// 004f6767  c700c4a09b00         mov dword ptr [eax], 0x9ba0c4
// 004f676d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f6771  894808               mov dword ptr [eax + 8], ecx
// 004f6774  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f6778  89500c               mov dword ptr [eax + 0xc], edx
// 004f677b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f677f  894810               mov dword ptr [eax + 0x10], ecx
// 004f6782  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f6786  895014               mov dword ptr [eax + 0x14], edx
// 004f6789  eb02                 jmp 0x4f678d
// 004f678b  33c0                 xor eax, eax
// 004f678d  56                   push esi
// 004f678e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f6792  6a00                 push 0
// 004f6794  8906                 mov dword ptr [esi], eax
// 004f6796  e8bfd02f00           call 0x7f385a
// 004f679b  83c404               add esp, 4
// 004f679e  8bc6                 mov eax, esi
// 004f67a0  5e                   pop esi
// 004f67a1  59                   pop ecx
// 004f67a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
