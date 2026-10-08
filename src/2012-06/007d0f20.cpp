// roc 2012-06 007d0f20  unit: RBX::VSky::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d0f20
//
// 007d0f20  51                   push ecx
// 007d0f21  6a18                 push 0x18
// 007d0f23  c744240400000000     mov dword ptr [esp + 4], 0
// 007d0f2b  e8ea111b00           call 0x98211a
// 007d0f30  83c404               add esp, 4
// 007d0f33  85c0                 test eax, eax
// 007d0f35  7424                 je 0x7d0f5b
// 007d0f37  c70044fabb00         mov dword ptr [eax], 0xbbfa44
// 007d0f3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007d0f41  894808               mov dword ptr [eax + 8], ecx
// 007d0f44  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d0f48  89500c               mov dword ptr [eax + 0xc], edx
// 007d0f4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d0f4f  894810               mov dword ptr [eax + 0x10], ecx
// 007d0f52  8b542418             mov edx, dword ptr [esp + 0x18]
// 007d0f56  895014               mov dword ptr [eax + 0x14], edx
// 007d0f59  eb02                 jmp 0x7d0f5d
// 007d0f5b  33c0                 xor eax, eax
// 007d0f5d  56                   push esi
// 007d0f5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007d0f62  6a00                 push 0
// 007d0f64  8906                 mov dword ptr [esi], eax
// 007d0f66  e8a9111b00           call 0x982114
// 007d0f6b  83c404               add esp, 4
// 007d0f6e  8bc6                 mov eax, esi
// 007d0f70  5e                   pop esi
// 007d0f71  59                   pop ecx
// 007d0f72  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
