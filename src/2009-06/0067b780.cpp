// roc 2009-06 0067b780  unit: RBX::VRotate::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067b780
//
// 0067b780  51                   push ecx
// 0067b781  6a18                 push 0x18
// 0067b783  c744240400000000     mov dword ptr [esp + 4], 0
// 0067b78b  e8a8d20900           call 0x718a38
// 0067b790  83c404               add esp, 4
// 0067b793  85c0                 test eax, eax
// 0067b795  7424                 je 0x67b7bb
// 0067b797  c700644e8e00         mov dword ptr [eax], 0x8e4e64
// 0067b79d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067b7a1  894808               mov dword ptr [eax + 8], ecx
// 0067b7a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067b7a8  89500c               mov dword ptr [eax + 0xc], edx
// 0067b7ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067b7af  894810               mov dword ptr [eax + 0x10], ecx
// 0067b7b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067b7b6  895014               mov dword ptr [eax + 0x14], edx
// 0067b7b9  eb02                 jmp 0x67b7bd
// 0067b7bb  33c0                 xor eax, eax
// 0067b7bd  56                   push esi
// 0067b7be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067b7c2  6a00                 push 0
// 0067b7c4  8906                 mov dword ptr [esi], eax
// 0067b7c6  e867d20900           call 0x718a32
// 0067b7cb  83c404               add esp, 4
// 0067b7ce  8bc6                 mov eax, esi
// 0067b7d0  5e                   pop esi
// 0067b7d1  59                   pop ecx
// 0067b7d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
