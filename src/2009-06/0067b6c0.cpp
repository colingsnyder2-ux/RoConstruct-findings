// roc 2009-06 0067b6c0  unit: RBX::VRotate::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067b6c0
//
// 0067b6c0  51                   push ecx
// 0067b6c1  6a18                 push 0x18
// 0067b6c3  c744240400000000     mov dword ptr [esp + 4], 0
// 0067b6cb  e868d30900           call 0x718a38
// 0067b6d0  83c404               add esp, 4
// 0067b6d3  85c0                 test eax, eax
// 0067b6d5  7424                 je 0x67b6fb
// 0067b6d7  c7003c4e8e00         mov dword ptr [eax], 0x8e4e3c
// 0067b6dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067b6e1  894808               mov dword ptr [eax + 8], ecx
// 0067b6e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067b6e8  89500c               mov dword ptr [eax + 0xc], edx
// 0067b6eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067b6ef  894810               mov dword ptr [eax + 0x10], ecx
// 0067b6f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067b6f6  895014               mov dword ptr [eax + 0x14], edx
// 0067b6f9  eb02                 jmp 0x67b6fd
// 0067b6fb  33c0                 xor eax, eax
// 0067b6fd  56                   push esi
// 0067b6fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067b702  6a00                 push 0
// 0067b704  8906                 mov dword ptr [esi], eax
// 0067b706  e827d30900           call 0x718a32
// 0067b70b  83c404               add esp, 4
// 0067b70e  8bc6                 mov eax, esi
// 0067b710  5e                   pop esi
// 0067b711  59                   pop ecx
// 0067b712  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
