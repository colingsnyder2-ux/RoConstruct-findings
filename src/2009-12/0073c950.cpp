// roc 2009-12 0073c950  unit: RBX::AdornBillboarder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073c950
//
// 0073c950  51                   push ecx
// 0073c951  6a18                 push 0x18
// 0073c953  c744240400000000     mov dword ptr [esp + 4], 0
// 0073c95b  e8006f0b00           call 0x7f3860
// 0073c960  83c404               add esp, 4
// 0073c963  85c0                 test eax, eax
// 0073c965  7424                 je 0x73c98b
// 0073c967  c700901e9e00         mov dword ptr [eax], 0x9e1e90
// 0073c96d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073c971  894808               mov dword ptr [eax + 8], ecx
// 0073c974  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073c978  89500c               mov dword ptr [eax + 0xc], edx
// 0073c97b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073c97f  894810               mov dword ptr [eax + 0x10], ecx
// 0073c982  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073c986  895014               mov dword ptr [eax + 0x14], edx
// 0073c989  eb02                 jmp 0x73c98d
// 0073c98b  33c0                 xor eax, eax
// 0073c98d  56                   push esi
// 0073c98e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0073c992  6a00                 push 0
// 0073c994  8906                 mov dword ptr [esi], eax
// 0073c996  e8bf6e0b00           call 0x7f385a
// 0073c99b  83c404               add esp, 4
// 0073c99e  8bc6                 mov eax, esi
// 0073c9a0  5e                   pop esi
// 0073c9a1  59                   pop ecx
// 0073c9a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
