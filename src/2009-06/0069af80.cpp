// roc 2009-06 0069af80  unit: RBX::Flag  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069af80
//
// 0069af80  51                   push ecx
// 0069af81  6a18                 push 0x18
// 0069af83  c744240400000000     mov dword ptr [esp + 4], 0
// 0069af8b  e8a8da0700           call 0x718a38
// 0069af90  83c404               add esp, 4
// 0069af93  85c0                 test eax, eax
// 0069af95  7424                 je 0x69afbb
// 0069af97  c70010878e00         mov dword ptr [eax], 0x8e8710
// 0069af9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069afa1  894808               mov dword ptr [eax + 8], ecx
// 0069afa4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0069afa8  89500c               mov dword ptr [eax + 0xc], edx
// 0069afab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069afaf  894810               mov dword ptr [eax + 0x10], ecx
// 0069afb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069afb6  895014               mov dword ptr [eax + 0x14], edx
// 0069afb9  eb02                 jmp 0x69afbd
// 0069afbb  33c0                 xor eax, eax
// 0069afbd  56                   push esi
// 0069afbe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069afc2  6a00                 push 0
// 0069afc4  8906                 mov dword ptr [esi], eax
// 0069afc6  e867da0700           call 0x718a32
// 0069afcb  83c404               add esp, 4
// 0069afce  8bc6                 mov eax, esi
// 0069afd0  5e                   pop esi
// 0069afd1  59                   pop ecx
// 0069afd2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
