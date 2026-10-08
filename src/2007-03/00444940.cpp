// roc 2007-03 00444940  unit: seg_00440000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444940
//
// 00444940  51                   push ecx
// 00444941  6a18                 push 0x18
// 00444943  c744240400000000     mov dword ptr [esp + 4], 0
// 0044494b  e8b8971d00           call 0x61e108
// 00444950  83c404               add esp, 4
// 00444953  85c0                 test eax, eax
// 00444955  7424                 je 0x44497b
// 00444957  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044495b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044495f  894808               mov dword ptr [eax + 8], ecx
// 00444962  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00444966  89500c               mov dword ptr [eax + 0xc], edx
// 00444969  8b542418             mov edx, dword ptr [esp + 0x18]
// 0044496d  c70008eb7800         mov dword ptr [eax], 0x78eb08
// 00444973  894810               mov dword ptr [eax + 0x10], ecx
// 00444976  895014               mov dword ptr [eax + 0x14], edx
// 00444979  eb02                 jmp 0x44497d
// 0044497b  33c0                 xor eax, eax
// 0044497d  56                   push esi
// 0044497e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00444982  6a00                 push 0
// 00444984  c744240800000000     mov dword ptr [esp + 8], 0
// 0044498c  8906                 mov dword ptr [esi], eax
// 0044498e  e85d971d00           call 0x61e0f0
// 00444993  83c404               add esp, 4
// 00444996  8bc6                 mov eax, esi
// 00444998  5e                   pop esi
// 00444999  59                   pop ecx
// 0044499a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
