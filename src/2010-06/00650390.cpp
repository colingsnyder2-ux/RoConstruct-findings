// roc 2010-06 00650390  unit: RBX::VPlayerCamera::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00650390
//
// 00650390  51                   push ecx
// 00650391  6a18                 push 0x18
// 00650393  c744240400000000     mov dword ptr [esp + 4], 0
// 0065039b  e800761500           call 0x7a79a0
// 006503a0  83c404               add esp, 4
// 006503a3  85c0                 test eax, eax
// 006503a5  7424                 je 0x6503cb
// 006503a7  c7003492a300         mov dword ptr [eax], 0xa39234
// 006503ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006503b1  894808               mov dword ptr [eax + 8], ecx
// 006503b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006503b8  89500c               mov dword ptr [eax + 0xc], edx
// 006503bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006503bf  894810               mov dword ptr [eax + 0x10], ecx
// 006503c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006503c6  895014               mov dword ptr [eax + 0x14], edx
// 006503c9  eb02                 jmp 0x6503cd
// 006503cb  33c0                 xor eax, eax
// 006503cd  56                   push esi
// 006503ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006503d2  6a00                 push 0
// 006503d4  8906                 mov dword ptr [esi], eax
// 006503d6  e8bf751500           call 0x7a799a
// 006503db  83c404               add esp, 4
// 006503de  8bc6                 mov eax, esi
// 006503e0  5e                   pop esi
// 006503e1  59                   pop ecx
// 006503e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
