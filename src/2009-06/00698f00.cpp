// roc 2009-06 00698f00  unit: RBX::VMotorFeature::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00698f00
//
// 00698f00  51                   push ecx
// 00698f01  6a18                 push 0x18
// 00698f03  c744240400000000     mov dword ptr [esp + 4], 0
// 00698f0b  e828fb0700           call 0x718a38
// 00698f10  83c404               add esp, 4
// 00698f13  85c0                 test eax, eax
// 00698f15  7424                 je 0x698f3b
// 00698f17  c70088808e00         mov dword ptr [eax], 0x8e8088
// 00698f1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00698f21  894808               mov dword ptr [eax + 8], ecx
// 00698f24  8b542410             mov edx, dword ptr [esp + 0x10]
// 00698f28  89500c               mov dword ptr [eax + 0xc], edx
// 00698f2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00698f2f  894810               mov dword ptr [eax + 0x10], ecx
// 00698f32  8b542418             mov edx, dword ptr [esp + 0x18]
// 00698f36  895014               mov dword ptr [eax + 0x14], edx
// 00698f39  eb02                 jmp 0x698f3d
// 00698f3b  33c0                 xor eax, eax
// 00698f3d  56                   push esi
// 00698f3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00698f42  6a00                 push 0
// 00698f44  8906                 mov dword ptr [esi], eax
// 00698f46  e8e7fa0700           call 0x718a32
// 00698f4b  83c404               add esp, 4
// 00698f4e  8bc6                 mov eax, esi
// 00698f50  5e                   pop esi
// 00698f51  59                   pop ecx
// 00698f52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
