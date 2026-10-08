// roc 2012-06 00812110  unit: RBX::VGlue::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00812110
//
// 00812110  51                   push ecx
// 00812111  6a18                 push 0x18
// 00812113  c744240400000000     mov dword ptr [esp + 4], 0
// 0081211b  e8faff1600           call 0x98211a
// 00812120  83c404               add esp, 4
// 00812123  85c0                 test eax, eax
// 00812125  7424                 je 0x81214b
// 00812127  c700d860bc00         mov dword ptr [eax], 0xbc60d8
// 0081212d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00812131  894808               mov dword ptr [eax + 8], ecx
// 00812134  8b542410             mov edx, dword ptr [esp + 0x10]
// 00812138  89500c               mov dword ptr [eax + 0xc], edx
// 0081213b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081213f  894810               mov dword ptr [eax + 0x10], ecx
// 00812142  8b542418             mov edx, dword ptr [esp + 0x18]
// 00812146  895014               mov dword ptr [eax + 0x14], edx
// 00812149  eb02                 jmp 0x81214d
// 0081214b  33c0                 xor eax, eax
// 0081214d  56                   push esi
// 0081214e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00812152  6a00                 push 0
// 00812154  8906                 mov dword ptr [esi], eax
// 00812156  e8b9ff1600           call 0x982114
// 0081215b  83c404               add esp, 4
// 0081215e  8bc6                 mov eax, esi
// 00812160  5e                   pop esi
// 00812161  59                   pop ecx
// 00812162  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
