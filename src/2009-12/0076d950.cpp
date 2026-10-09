// roc 2009-12 0076d950  unit: RBX::VFrame::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076d950
//
// 0076d950  51                   push ecx
// 0076d951  6a18                 push 0x18
// 0076d953  c744240400000000     mov dword ptr [esp + 4], 0
// 0076d95b  e8005f0800           call 0x7f3860
// 0076d960  83c404               add esp, 4
// 0076d963  85c0                 test eax, eax
// 0076d965  7424                 je 0x76d98b
// 0076d967  c7000c829e00         mov dword ptr [eax], 0x9e820c
// 0076d96d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076d971  894808               mov dword ptr [eax + 8], ecx
// 0076d974  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076d978  89500c               mov dword ptr [eax + 0xc], edx
// 0076d97b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076d97f  894810               mov dword ptr [eax + 0x10], ecx
// 0076d982  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076d986  895014               mov dword ptr [eax + 0x14], edx
// 0076d989  eb02                 jmp 0x76d98d
// 0076d98b  33c0                 xor eax, eax
// 0076d98d  56                   push esi
// 0076d98e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076d992  6a00                 push 0
// 0076d994  8906                 mov dword ptr [esi], eax
// 0076d996  e8bf5e0800           call 0x7f385a
// 0076d99b  83c404               add esp, 4
// 0076d99e  8bc6                 mov eax, esi
// 0076d9a0  5e                   pop esi
// 0076d9a1  59                   pop ecx
// 0076d9a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
