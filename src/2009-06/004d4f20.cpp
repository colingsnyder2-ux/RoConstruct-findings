// roc 2009-06 004d4f20  unit: RBX::VNetworkSettings::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d4f20
//
// 004d4f20  51                   push ecx
// 004d4f21  6a18                 push 0x18
// 004d4f23  c744240400000000     mov dword ptr [esp + 4], 0
// 004d4f2b  e8083b2400           call 0x718a38
// 004d4f30  83c404               add esp, 4
// 004d4f33  85c0                 test eax, eax
// 004d4f35  7424                 je 0x4d4f5b
// 004d4f37  c700fc598c00         mov dword ptr [eax], 0x8c59fc
// 004d4f3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d4f41  894808               mov dword ptr [eax + 8], ecx
// 004d4f44  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d4f48  89500c               mov dword ptr [eax + 0xc], edx
// 004d4f4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d4f4f  894810               mov dword ptr [eax + 0x10], ecx
// 004d4f52  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d4f56  895014               mov dword ptr [eax + 0x14], edx
// 004d4f59  eb02                 jmp 0x4d4f5d
// 004d4f5b  33c0                 xor eax, eax
// 004d4f5d  56                   push esi
// 004d4f5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d4f62  6a00                 push 0
// 004d4f64  8906                 mov dword ptr [esi], eax
// 004d4f66  e8c73a2400           call 0x718a32
// 004d4f6b  83c404               add esp, 4
// 004d4f6e  8bc6                 mov eax, esi
// 004d4f70  5e                   pop esi
// 004d4f71  59                   pop ecx
// 004d4f72  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
