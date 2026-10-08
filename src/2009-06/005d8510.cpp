// roc 2009-06 005d8510  unit: RBX::Team  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d8510
//
// 005d8510  51                   push ecx
// 005d8511  6a18                 push 0x18
// 005d8513  c744240400000000     mov dword ptr [esp + 4], 0
// 005d851b  e818051400           call 0x718a38
// 005d8520  83c404               add esp, 4
// 005d8523  85c0                 test eax, eax
// 005d8525  7424                 je 0x5d854b
// 005d8527  c70098558d00         mov dword ptr [eax], 0x8d5598
// 005d852d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d8531  894808               mov dword ptr [eax + 8], ecx
// 005d8534  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d8538  89500c               mov dword ptr [eax + 0xc], edx
// 005d853b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d853f  894810               mov dword ptr [eax + 0x10], ecx
// 005d8542  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d8546  895014               mov dword ptr [eax + 0x14], edx
// 005d8549  eb02                 jmp 0x5d854d
// 005d854b  33c0                 xor eax, eax
// 005d854d  56                   push esi
// 005d854e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d8552  6a00                 push 0
// 005d8554  8906                 mov dword ptr [esi], eax
// 005d8556  e8d7041400           call 0x718a32
// 005d855b  83c404               add esp, 4
// 005d855e  8bc6                 mov eax, esi
// 005d8560  5e                   pop esi
// 005d8561  59                   pop ecx
// 005d8562  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
