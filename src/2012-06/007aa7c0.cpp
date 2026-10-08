// roc 2012-06 007aa7c0  unit: RBX::VLighting::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007aa7c0
//
// 007aa7c0  51                   push ecx
// 007aa7c1  6a18                 push 0x18
// 007aa7c3  c744240400000000     mov dword ptr [esp + 4], 0
// 007aa7cb  e84a791d00           call 0x98211a
// 007aa7d0  83c404               add esp, 4
// 007aa7d3  85c0                 test eax, eax
// 007aa7d5  7424                 je 0x7aa7fb
// 007aa7d7  c700ec6abb00         mov dword ptr [eax], 0xbb6aec
// 007aa7dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007aa7e1  894808               mov dword ptr [eax + 8], ecx
// 007aa7e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007aa7e8  89500c               mov dword ptr [eax + 0xc], edx
// 007aa7eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007aa7ef  894810               mov dword ptr [eax + 0x10], ecx
// 007aa7f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007aa7f6  895014               mov dword ptr [eax + 0x14], edx
// 007aa7f9  eb02                 jmp 0x7aa7fd
// 007aa7fb  33c0                 xor eax, eax
// 007aa7fd  56                   push esi
// 007aa7fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007aa802  6a00                 push 0
// 007aa804  8906                 mov dword ptr [esi], eax
// 007aa806  e809791d00           call 0x982114
// 007aa80b  83c404               add esp, 4
// 007aa80e  8bc6                 mov eax, esi
// 007aa810  5e                   pop esi
// 007aa811  59                   pop ecx
// 007aa812  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
