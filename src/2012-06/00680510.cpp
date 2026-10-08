// roc 2012-06 00680510  unit: RBX::Object  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00680510
//
// 00680510  51                   push ecx
// 00680511  6a18                 push 0x18
// 00680513  c744240400000000     mov dword ptr [esp + 4], 0
// 0068051b  e8fa1b3000           call 0x98211a
// 00680520  83c404               add esp, 4
// 00680523  85c0                 test eax, eax
// 00680525  7424                 je 0x68054b
// 00680527  c700dceeb800         mov dword ptr [eax], 0xb8eedc
// 0068052d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00680531  894808               mov dword ptr [eax + 8], ecx
// 00680534  8b542410             mov edx, dword ptr [esp + 0x10]
// 00680538  89500c               mov dword ptr [eax + 0xc], edx
// 0068053b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068053f  894810               mov dword ptr [eax + 0x10], ecx
// 00680542  8b542418             mov edx, dword ptr [esp + 0x18]
// 00680546  895014               mov dword ptr [eax + 0x14], edx
// 00680549  eb02                 jmp 0x68054d
// 0068054b  33c0                 xor eax, eax
// 0068054d  56                   push esi
// 0068054e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00680552  6a00                 push 0
// 00680554  8906                 mov dword ptr [esi], eax
// 00680556  e8b91b3000           call 0x982114
// 0068055b  83c404               add esp, 4
// 0068055e  8bc6                 mov eax, esi
// 00680560  5e                   pop esi
// 00680561  59                   pop ecx
// 00680562  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
