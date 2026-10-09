// roc 2009-12 00756da0  unit: RBX::ScreenGui  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00756da0
//
// 00756da0  51                   push ecx
// 00756da1  6a18                 push 0x18
// 00756da3  c744240400000000     mov dword ptr [esp + 4], 0
// 00756dab  e8b0ca0900           call 0x7f3860
// 00756db0  83c404               add esp, 4
// 00756db3  85c0                 test eax, eax
// 00756db5  7424                 je 0x756ddb
// 00756db7  c700fc4f9e00         mov dword ptr [eax], 0x9e4ffc
// 00756dbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00756dc1  894808               mov dword ptr [eax + 8], ecx
// 00756dc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00756dc8  89500c               mov dword ptr [eax + 0xc], edx
// 00756dcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00756dcf  894810               mov dword ptr [eax + 0x10], ecx
// 00756dd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00756dd6  895014               mov dword ptr [eax + 0x14], edx
// 00756dd9  eb02                 jmp 0x756ddd
// 00756ddb  33c0                 xor eax, eax
// 00756ddd  56                   push esi
// 00756dde  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00756de2  6a00                 push 0
// 00756de4  8906                 mov dword ptr [esi], eax
// 00756de6  e86fca0900           call 0x7f385a
// 00756deb  83c404               add esp, 4
// 00756dee  8bc6                 mov eax, esi
// 00756df0  5e                   pop esi
// 00756df1  59                   pop ecx
// 00756df2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
