// roc 2009-06 0065a4c0  unit: RBX::Camera  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065a4c0
//
// 0065a4c0  51                   push ecx
// 0065a4c1  6a18                 push 0x18
// 0065a4c3  c744240400000000     mov dword ptr [esp + 4], 0
// 0065a4cb  e868e50b00           call 0x718a38
// 0065a4d0  83c404               add esp, 4
// 0065a4d3  85c0                 test eax, eax
// 0065a4d5  7424                 je 0x65a4fb
// 0065a4d7  c700e8118e00         mov dword ptr [eax], 0x8e11e8
// 0065a4dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065a4e1  894808               mov dword ptr [eax + 8], ecx
// 0065a4e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065a4e8  89500c               mov dword ptr [eax + 0xc], edx
// 0065a4eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065a4ef  894810               mov dword ptr [eax + 0x10], ecx
// 0065a4f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065a4f6  895014               mov dword ptr [eax + 0x14], edx
// 0065a4f9  eb02                 jmp 0x65a4fd
// 0065a4fb  33c0                 xor eax, eax
// 0065a4fd  56                   push esi
// 0065a4fe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065a502  6a00                 push 0
// 0065a504  8906                 mov dword ptr [esi], eax
// 0065a506  e827e50b00           call 0x718a32
// 0065a50b  83c404               add esp, 4
// 0065a50e  8bc6                 mov eax, esi
// 0065a510  5e                   pop esi
// 0065a511  59                   pop ecx
// 0065a512  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
