// roc 2012-06 00899400  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00899400
//
// 00899400  51                   push ecx
// 00899401  6a18                 push 0x18
// 00899403  c744240400000000     mov dword ptr [esp + 4], 0
// 0089940b  e80a8d0e00           call 0x98211a
// 00899410  83c404               add esp, 4
// 00899413  85c0                 test eax, eax
// 00899415  7424                 je 0x89943b
// 00899417  c700c0bcbd00         mov dword ptr [eax], 0xbdbcc0
// 0089941d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00899421  894808               mov dword ptr [eax + 8], ecx
// 00899424  8b542410             mov edx, dword ptr [esp + 0x10]
// 00899428  89500c               mov dword ptr [eax + 0xc], edx
// 0089942b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089942f  894810               mov dword ptr [eax + 0x10], ecx
// 00899432  8b542418             mov edx, dword ptr [esp + 0x18]
// 00899436  895014               mov dword ptr [eax + 0x14], edx
// 00899439  eb02                 jmp 0x89943d
// 0089943b  33c0                 xor eax, eax
// 0089943d  56                   push esi
// 0089943e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00899442  6a00                 push 0
// 00899444  8906                 mov dword ptr [esi], eax
// 00899446  e8c98c0e00           call 0x982114
// 0089944b  83c404               add esp, 4
// 0089944e  8bc6                 mov eax, esi
// 00899450  5e                   pop esi
// 00899451  59                   pop ecx
// 00899452  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
