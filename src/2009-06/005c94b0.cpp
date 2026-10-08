// roc 2009-06 005c94b0  unit: seg_005c0000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c94b0
//
// 005c94b0  51                   push ecx
// 005c94b1  6a18                 push 0x18
// 005c94b3  c744240400000000     mov dword ptr [esp + 4], 0
// 005c94bb  e878f51400           call 0x718a38
// 005c94c0  83c404               add esp, 4
// 005c94c3  85c0                 test eax, eax
// 005c94c5  7424                 je 0x5c94eb
// 005c94c7  c70010428d00         mov dword ptr [eax], 0x8d4210
// 005c94cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c94d1  894808               mov dword ptr [eax + 8], ecx
// 005c94d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c94d8  89500c               mov dword ptr [eax + 0xc], edx
// 005c94db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c94df  894810               mov dword ptr [eax + 0x10], ecx
// 005c94e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c94e6  895014               mov dword ptr [eax + 0x14], edx
// 005c94e9  eb02                 jmp 0x5c94ed
// 005c94eb  33c0                 xor eax, eax
// 005c94ed  56                   push esi
// 005c94ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c94f2  6a00                 push 0
// 005c94f4  8906                 mov dword ptr [esi], eax
// 005c94f6  e837f51400           call 0x718a32
// 005c94fb  83c404               add esp, 4
// 005c94fe  8bc6                 mov eax, esi
// 005c9500  5e                   pop esi
// 005c9501  59                   pop ecx
// 005c9502  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
