// roc 2009-12 006f5090  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f5090
//
// 006f5090  51                   push ecx
// 006f5091  6a18                 push 0x18
// 006f5093  c744240400000000     mov dword ptr [esp + 4], 0
// 006f509b  e8c0e70f00           call 0x7f3860
// 006f50a0  83c404               add esp, 4
// 006f50a3  85c0                 test eax, eax
// 006f50a5  7424                 je 0x6f50cb
// 006f50a7  c70044c99d00         mov dword ptr [eax], 0x9dc944
// 006f50ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f50b1  894808               mov dword ptr [eax + 8], ecx
// 006f50b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f50b8  89500c               mov dword ptr [eax + 0xc], edx
// 006f50bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f50bf  894810               mov dword ptr [eax + 0x10], ecx
// 006f50c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f50c6  895014               mov dword ptr [eax + 0x14], edx
// 006f50c9  eb02                 jmp 0x6f50cd
// 006f50cb  33c0                 xor eax, eax
// 006f50cd  56                   push esi
// 006f50ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f50d2  6a00                 push 0
// 006f50d4  8906                 mov dword ptr [esi], eax
// 006f50d6  e87fe70f00           call 0x7f385a
// 006f50db  83c404               add esp, 4
// 006f50de  8bc6                 mov eax, esi
// 006f50e0  5e                   pop esi
// 006f50e1  59                   pop ecx
// 006f50e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
