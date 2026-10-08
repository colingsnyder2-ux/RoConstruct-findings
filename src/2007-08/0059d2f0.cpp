// roc 2007-08 0059d2f0  unit: ChatEnter  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d2f0
//
// 0059d2f0  51                   push ecx
// 0059d2f1  6a18                 push 0x18
// 0059d2f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0059d2fb  e8f62b0900           call 0x62fef6
// 0059d300  83c404               add esp, 4
// 0059d303  85c0                 test eax, eax
// 0059d305  7424                 je 0x59d32b
// 0059d307  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059d30b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059d30f  894808               mov dword ptr [eax + 8], ecx
// 0059d312  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059d316  89500c               mov dword ptr [eax + 0xc], edx
// 0059d319  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059d31d  c700d01c7b00         mov dword ptr [eax], 0x7b1cd0
// 0059d323  894810               mov dword ptr [eax + 0x10], ecx
// 0059d326  895014               mov dword ptr [eax + 0x14], edx
// 0059d329  eb02                 jmp 0x59d32d
// 0059d32b  33c0                 xor eax, eax
// 0059d32d  56                   push esi
// 0059d32e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059d332  6a00                 push 0
// 0059d334  c744240800000000     mov dword ptr [esp + 8], 0
// 0059d33c  8906                 mov dword ptr [esi], eax
// 0059d33e  e81f290900           call 0x62fc62
// 0059d343  83c404               add esp, 4
// 0059d346  8bc6                 mov eax, esi
// 0059d348  5e                   pop esi
// 0059d349  59                   pop ecx
// 0059d34a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
