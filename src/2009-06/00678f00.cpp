// roc 2009-06 00678f00  unit: RBX::P8Lighting::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00678f00
//
// 00678f00  51                   push ecx
// 00678f01  6a18                 push 0x18
// 00678f03  c744240400000000     mov dword ptr [esp + 4], 0
// 00678f0b  e828fb0900           call 0x718a38
// 00678f10  83c404               add esp, 4
// 00678f13  85c0                 test eax, eax
// 00678f15  7424                 je 0x678f3b
// 00678f17  c700bc488e00         mov dword ptr [eax], 0x8e48bc
// 00678f1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00678f21  894808               mov dword ptr [eax + 8], ecx
// 00678f24  8b542410             mov edx, dword ptr [esp + 0x10]
// 00678f28  89500c               mov dword ptr [eax + 0xc], edx
// 00678f2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00678f2f  894810               mov dword ptr [eax + 0x10], ecx
// 00678f32  8b542418             mov edx, dword ptr [esp + 0x18]
// 00678f36  895014               mov dword ptr [eax + 0x14], edx
// 00678f39  eb02                 jmp 0x678f3d
// 00678f3b  33c0                 xor eax, eax
// 00678f3d  56                   push esi
// 00678f3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00678f42  6a00                 push 0
// 00678f44  8906                 mov dword ptr [esi], eax
// 00678f46  e8e7fa0900           call 0x718a32
// 00678f4b  83c404               add esp, 4
// 00678f4e  8bc6                 mov eax, esi
// 00678f50  5e                   pop esi
// 00678f51  59                   pop ecx
// 00678f52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
