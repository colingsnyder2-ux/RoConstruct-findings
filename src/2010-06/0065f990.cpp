// roc 2010-06 0065f990  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065f990
//
// 0065f990  51                   push ecx
// 0065f991  6a18                 push 0x18
// 0065f993  c744240400000000     mov dword ptr [esp + 4], 0
// 0065f99b  e800801400           call 0x7a79a0
// 0065f9a0  83c404               add esp, 4
// 0065f9a3  85c0                 test eax, eax
// 0065f9a5  7424                 je 0x65f9cb
// 0065f9a7  c70024a7a300         mov dword ptr [eax], 0xa3a724
// 0065f9ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065f9b1  894808               mov dword ptr [eax + 8], ecx
// 0065f9b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065f9b8  89500c               mov dword ptr [eax + 0xc], edx
// 0065f9bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065f9bf  894810               mov dword ptr [eax + 0x10], ecx
// 0065f9c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065f9c6  895014               mov dword ptr [eax + 0x14], edx
// 0065f9c9  eb02                 jmp 0x65f9cd
// 0065f9cb  33c0                 xor eax, eax
// 0065f9cd  56                   push esi
// 0065f9ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065f9d2  6a00                 push 0
// 0065f9d4  8906                 mov dword ptr [esi], eax
// 0065f9d6  e8bf7f1400           call 0x7a799a
// 0065f9db  83c404               add esp, 4
// 0065f9de  8bc6                 mov eax, esi
// 0065f9e0  5e                   pop esi
// 0065f9e1  59                   pop ecx
// 0065f9e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
