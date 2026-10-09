// roc 2009-12 0072db50  unit: RBX::VNetworkSettings::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072db50
//
// 0072db50  51                   push ecx
// 0072db51  6a18                 push 0x18
// 0072db53  c744240400000000     mov dword ptr [esp + 4], 0
// 0072db5b  e8005d0c00           call 0x7f3860
// 0072db60  83c404               add esp, 4
// 0072db63  85c0                 test eax, eax
// 0072db65  7424                 je 0x72db8b
// 0072db67  c70024069e00         mov dword ptr [eax], 0x9e0624
// 0072db6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072db71  894808               mov dword ptr [eax + 8], ecx
// 0072db74  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072db78  89500c               mov dword ptr [eax + 0xc], edx
// 0072db7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072db7f  894810               mov dword ptr [eax + 0x10], ecx
// 0072db82  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072db86  895014               mov dword ptr [eax + 0x14], edx
// 0072db89  eb02                 jmp 0x72db8d
// 0072db8b  33c0                 xor eax, eax
// 0072db8d  56                   push esi
// 0072db8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0072db92  6a00                 push 0
// 0072db94  8906                 mov dword ptr [esi], eax
// 0072db96  e8bf5c0c00           call 0x7f385a
// 0072db9b  83c404               add esp, 4
// 0072db9e  8bc6                 mov eax, esi
// 0072dba0  5e                   pop esi
// 0072dba1  59                   pop ecx
// 0072dba2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
