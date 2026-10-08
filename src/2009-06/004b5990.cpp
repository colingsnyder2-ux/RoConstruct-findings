// roc 2009-06 004b5990  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b5990
//
// 004b5990  51                   push ecx
// 004b5991  6a18                 push 0x18
// 004b5993  c744240400000000     mov dword ptr [esp + 4], 0
// 004b599b  e898302600           call 0x718a38
// 004b59a0  83c404               add esp, 4
// 004b59a3  85c0                 test eax, eax
// 004b59a5  7424                 je 0x4b59cb
// 004b59a7  c70008458c00         mov dword ptr [eax], 0x8c4508
// 004b59ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b59b1  894808               mov dword ptr [eax + 8], ecx
// 004b59b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b59b8  89500c               mov dword ptr [eax + 0xc], edx
// 004b59bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b59bf  894810               mov dword ptr [eax + 0x10], ecx
// 004b59c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b59c6  895014               mov dword ptr [eax + 0x14], edx
// 004b59c9  eb02                 jmp 0x4b59cd
// 004b59cb  33c0                 xor eax, eax
// 004b59cd  56                   push esi
// 004b59ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b59d2  6a00                 push 0
// 004b59d4  8906                 mov dword ptr [esi], eax
// 004b59d6  e857302600           call 0x718a32
// 004b59db  83c404               add esp, 4
// 004b59de  8bc6                 mov eax, esi
// 004b59e0  5e                   pop esi
// 004b59e1  59                   pop ecx
// 004b59e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
