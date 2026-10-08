// roc 2009-06 004d5090  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d5090
//
// 004d5090  51                   push ecx
// 004d5091  6a18                 push 0x18
// 004d5093  c744240400000000     mov dword ptr [esp + 4], 0
// 004d509b  e898392400           call 0x718a38
// 004d50a0  83c404               add esp, 4
// 004d50a3  85c0                 test eax, eax
// 004d50a5  7424                 je 0x4d50cb
// 004d50a7  c700605a8c00         mov dword ptr [eax], 0x8c5a60
// 004d50ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d50b1  894808               mov dword ptr [eax + 8], ecx
// 004d50b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d50b8  89500c               mov dword ptr [eax + 0xc], edx
// 004d50bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d50bf  894810               mov dword ptr [eax + 0x10], ecx
// 004d50c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d50c6  895014               mov dword ptr [eax + 0x14], edx
// 004d50c9  eb02                 jmp 0x4d50cd
// 004d50cb  33c0                 xor eax, eax
// 004d50cd  56                   push esi
// 004d50ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d50d2  6a00                 push 0
// 004d50d4  8906                 mov dword ptr [esi], eax
// 004d50d6  e857392400           call 0x718a32
// 004d50db  83c404               add esp, 4
// 004d50de  8bc6                 mov eax, esi
// 004d50e0  5e                   pop esi
// 004d50e1  59                   pop ecx
// 004d50e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
