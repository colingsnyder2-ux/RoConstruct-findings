// roc 2007-08 00445420  unit: VCRenderSettings::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00445420
//
// 00445420  51                   push ecx
// 00445421  6a18                 push 0x18
// 00445423  c744240400000000     mov dword ptr [esp + 4], 0
// 0044542b  e8c6aa1e00           call 0x62fef6
// 00445430  83c404               add esp, 4
// 00445433  85c0                 test eax, eax
// 00445435  7424                 je 0x44545b
// 00445437  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044543b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044543f  894808               mov dword ptr [eax + 8], ecx
// 00445442  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00445446  89500c               mov dword ptr [eax + 0xc], edx
// 00445449  8b542418             mov edx, dword ptr [esp + 0x18]
// 0044544d  c7002cfc7800         mov dword ptr [eax], 0x78fc2c
// 00445453  894810               mov dword ptr [eax + 0x10], ecx
// 00445456  895014               mov dword ptr [eax + 0x14], edx
// 00445459  eb02                 jmp 0x44545d
// 0044545b  33c0                 xor eax, eax
// 0044545d  56                   push esi
// 0044545e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00445462  6a00                 push 0
// 00445464  c744240800000000     mov dword ptr [esp + 8], 0
// 0044546c  8906                 mov dword ptr [esi], eax
// 0044546e  e8efa71e00           call 0x62fc62
// 00445473  83c404               add esp, 4
// 00445476  8bc6                 mov eax, esi
// 00445478  5e                   pop esi
// 00445479  59                   pop ecx
// 0044547a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
