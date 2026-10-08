// roc 2012-06 0070c5c0  unit: RBX::Hopper  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070c5c0
//
// 0070c5c0  51                   push ecx
// 0070c5c1  6a18                 push 0x18
// 0070c5c3  c744240400000000     mov dword ptr [esp + 4], 0
// 0070c5cb  e84a5b2700           call 0x98211a
// 0070c5d0  83c404               add esp, 4
// 0070c5d3  85c0                 test eax, eax
// 0070c5d5  7424                 je 0x70c5fb
// 0070c5d7  c7002402ba00         mov dword ptr [eax], 0xba0224
// 0070c5dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070c5e1  894808               mov dword ptr [eax + 8], ecx
// 0070c5e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070c5e8  89500c               mov dword ptr [eax + 0xc], edx
// 0070c5eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070c5ef  894810               mov dword ptr [eax + 0x10], ecx
// 0070c5f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070c5f6  895014               mov dword ptr [eax + 0x14], edx
// 0070c5f9  eb02                 jmp 0x70c5fd
// 0070c5fb  33c0                 xor eax, eax
// 0070c5fd  56                   push esi
// 0070c5fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070c602  6a00                 push 0
// 0070c604  8906                 mov dword ptr [esi], eax
// 0070c606  e8095b2700           call 0x982114
// 0070c60b  83c404               add esp, 4
// 0070c60e  8bc6                 mov eax, esi
// 0070c610  5e                   pop esi
// 0070c611  59                   pop ecx
// 0070c612  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
