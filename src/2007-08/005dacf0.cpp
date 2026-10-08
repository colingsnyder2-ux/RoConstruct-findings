// roc 2007-08 005dacf0  unit: RBX::VHole::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dacf0
//
// 005dacf0  51                   push ecx
// 005dacf1  6a18                 push 0x18
// 005dacf3  c744240400000000     mov dword ptr [esp + 4], 0
// 005dacfb  e8f6510500           call 0x62fef6
// 005dad00  83c404               add esp, 4
// 005dad03  85c0                 test eax, eax
// 005dad05  7424                 je 0x5dad2b
// 005dad07  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dad0b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005dad0f  894808               mov dword ptr [eax + 8], ecx
// 005dad12  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005dad16  89500c               mov dword ptr [eax + 0xc], edx
// 005dad19  8b542418             mov edx, dword ptr [esp + 0x18]
// 005dad1d  c7001cc17b00         mov dword ptr [eax], 0x7bc11c
// 005dad23  894810               mov dword ptr [eax + 0x10], ecx
// 005dad26  895014               mov dword ptr [eax + 0x14], edx
// 005dad29  eb02                 jmp 0x5dad2d
// 005dad2b  33c0                 xor eax, eax
// 005dad2d  56                   push esi
// 005dad2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dad32  6a00                 push 0
// 005dad34  c744240800000000     mov dword ptr [esp + 8], 0
// 005dad3c  8906                 mov dword ptr [esi], eax
// 005dad3e  e81f4f0500           call 0x62fc62
// 005dad43  83c404               add esp, 4
// 005dad46  8bc6                 mov eax, esi
// 005dad48  5e                   pop esi
// 005dad49  59                   pop ecx
// 005dad4a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
