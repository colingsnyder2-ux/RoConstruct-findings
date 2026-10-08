// roc 2007-03 005711d0  unit: seg_00570000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005711d0
//
// 005711d0  51                   push ecx
// 005711d1  6a18                 push 0x18
// 005711d3  c744240400000000     mov dword ptr [esp + 4], 0
// 005711db  e828cf0a00           call 0x61e108
// 005711e0  83c404               add esp, 4
// 005711e3  85c0                 test eax, eax
// 005711e5  7424                 je 0x57120b
// 005711e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005711eb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005711ef  894808               mov dword ptr [eax + 8], ecx
// 005711f2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005711f6  89500c               mov dword ptr [eax + 0xc], edx
// 005711f9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005711fd  c70000b97a00         mov dword ptr [eax], 0x7ab900
// 00571203  894810               mov dword ptr [eax + 0x10], ecx
// 00571206  895014               mov dword ptr [eax + 0x14], edx
// 00571209  eb02                 jmp 0x57120d
// 0057120b  33c0                 xor eax, eax
// 0057120d  56                   push esi
// 0057120e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00571212  6a00                 push 0
// 00571214  c744240800000000     mov dword ptr [esp + 8], 0
// 0057121c  8906                 mov dword ptr [esi], eax
// 0057121e  e8cdce0a00           call 0x61e0f0
// 00571223  83c404               add esp, 4
// 00571226  8bc6                 mov eax, esi
// 00571228  5e                   pop esi
// 00571229  59                   pop ecx
// 0057122a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
