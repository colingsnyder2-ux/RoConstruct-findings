// roc 2007-08 004881e0  unit: P8CRenderSettings::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004881e0
//
// 004881e0  51                   push ecx
// 004881e1  6a18                 push 0x18
// 004881e3  c744240400000000     mov dword ptr [esp + 4], 0
// 004881eb  e8067d1a00           call 0x62fef6
// 004881f0  83c404               add esp, 4
// 004881f3  85c0                 test eax, eax
// 004881f5  7424                 je 0x48821b
// 004881f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004881fb  8b542410             mov edx, dword ptr [esp + 0x10]
// 004881ff  894808               mov dword ptr [eax + 8], ecx
// 00488202  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00488206  89500c               mov dword ptr [eax + 0xc], edx
// 00488209  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048820d  c70090ae7900         mov dword ptr [eax], 0x79ae90
// 00488213  894810               mov dword ptr [eax + 0x10], ecx
// 00488216  895014               mov dword ptr [eax + 0x14], edx
// 00488219  eb02                 jmp 0x48821d
// 0048821b  33c0                 xor eax, eax
// 0048821d  56                   push esi
// 0048821e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00488222  6a00                 push 0
// 00488224  c744240800000000     mov dword ptr [esp + 8], 0
// 0048822c  8906                 mov dword ptr [esi], eax
// 0048822e  e82f7a1a00           call 0x62fc62
// 00488233  83c404               add esp, 4
// 00488236  8bc6                 mov eax, esi
// 00488238  5e                   pop esi
// 00488239  59                   pop ecx
// 0048823a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
