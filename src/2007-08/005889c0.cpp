// roc 2007-08 005889c0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005889c0
//
// 005889c0  51                   push ecx
// 005889c1  6a18                 push 0x18
// 005889c3  c744240400000000     mov dword ptr [esp + 4], 0
// 005889cb  e826750a00           call 0x62fef6
// 005889d0  83c404               add esp, 4
// 005889d3  85c0                 test eax, eax
// 005889d5  7424                 je 0x5889fb
// 005889d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005889db  8b542410             mov edx, dword ptr [esp + 0x10]
// 005889df  894808               mov dword ptr [eax + 8], ecx
// 005889e2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005889e6  89500c               mov dword ptr [eax + 0xc], edx
// 005889e9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005889ed  c7005cea7a00         mov dword ptr [eax], 0x7aea5c
// 005889f3  894810               mov dword ptr [eax + 0x10], ecx
// 005889f6  895014               mov dword ptr [eax + 0x14], edx
// 005889f9  eb02                 jmp 0x5889fd
// 005889fb  33c0                 xor eax, eax
// 005889fd  56                   push esi
// 005889fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00588a02  6a00                 push 0
// 00588a04  c744240800000000     mov dword ptr [esp + 8], 0
// 00588a0c  8906                 mov dword ptr [esi], eax
// 00588a0e  e84f720a00           call 0x62fc62
// 00588a13  83c404               add esp, 4
// 00588a16  8bc6                 mov eax, esi
// 00588a18  5e                   pop esi
// 00588a19  59                   pop ecx
// 00588a1a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
