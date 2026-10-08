// roc 2007-08 005f8bf0  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8bf0
//
// 005f8bf0  51                   push ecx
// 005f8bf1  6a18                 push 0x18
// 005f8bf3  c744240400000000     mov dword ptr [esp + 4], 0
// 005f8bfb  e8f6720300           call 0x62fef6
// 005f8c00  83c404               add esp, 4
// 005f8c03  85c0                 test eax, eax
// 005f8c05  7424                 je 0x5f8c2b
// 005f8c07  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f8c0b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f8c0f  894808               mov dword ptr [eax + 8], ecx
// 005f8c12  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f8c16  89500c               mov dword ptr [eax + 0xc], edx
// 005f8c19  8b542418             mov edx, dword ptr [esp + 0x18]
// 005f8c1d  c700841b7c00         mov dword ptr [eax], 0x7c1b84
// 005f8c23  894810               mov dword ptr [eax + 0x10], ecx
// 005f8c26  895014               mov dword ptr [eax + 0x14], edx
// 005f8c29  eb02                 jmp 0x5f8c2d
// 005f8c2b  33c0                 xor eax, eax
// 005f8c2d  56                   push esi
// 005f8c2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f8c32  6a00                 push 0
// 005f8c34  c744240800000000     mov dword ptr [esp + 8], 0
// 005f8c3c  8906                 mov dword ptr [esi], eax
// 005f8c3e  e81f700300           call 0x62fc62
// 005f8c43  83c404               add esp, 4
// 005f8c46  8bc6                 mov eax, esi
// 005f8c48  5e                   pop esi
// 005f8c49  59                   pop ecx
// 005f8c4a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
