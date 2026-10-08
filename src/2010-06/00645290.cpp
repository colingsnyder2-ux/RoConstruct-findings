// roc 2010-06 00645290  unit: RBX::FileMesh  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00645290
//
// 00645290  51                   push ecx
// 00645291  6a18                 push 0x18
// 00645293  c744240400000000     mov dword ptr [esp + 4], 0
// 0064529b  e800271600           call 0x7a79a0
// 006452a0  83c404               add esp, 4
// 006452a3  85c0                 test eax, eax
// 006452a5  7424                 je 0x6452cb
// 006452a7  c7008474a300         mov dword ptr [eax], 0xa37484
// 006452ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006452b1  894808               mov dword ptr [eax + 8], ecx
// 006452b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006452b8  89500c               mov dword ptr [eax + 0xc], edx
// 006452bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006452bf  894810               mov dword ptr [eax + 0x10], ecx
// 006452c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006452c6  895014               mov dword ptr [eax + 0x14], edx
// 006452c9  eb02                 jmp 0x6452cd
// 006452cb  33c0                 xor eax, eax
// 006452cd  56                   push esi
// 006452ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006452d2  6a00                 push 0
// 006452d4  8906                 mov dword ptr [esi], eax
// 006452d6  e8bf261600           call 0x7a799a
// 006452db  83c404               add esp, 4
// 006452de  8bc6                 mov eax, esi
// 006452e0  5e                   pop esi
// 006452e1  59                   pop ecx
// 006452e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
