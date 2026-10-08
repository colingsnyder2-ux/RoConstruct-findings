// roc 2010-06 004a4810  unit: RBX::Network::Player  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a4810
//
// 004a4810  51                   push ecx
// 004a4811  6a18                 push 0x18
// 004a4813  c744240400000000     mov dword ptr [esp + 4], 0
// 004a481b  e880313000           call 0x7a79a0
// 004a4820  83c404               add esp, 4
// 004a4823  85c0                 test eax, eax
// 004a4825  7424                 je 0x4a484b
// 004a4827  c7006c7da100         mov dword ptr [eax], 0xa17d6c
// 004a482d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a4831  894808               mov dword ptr [eax + 8], ecx
// 004a4834  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a4838  89500c               mov dword ptr [eax + 0xc], edx
// 004a483b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a483f  894810               mov dword ptr [eax + 0x10], ecx
// 004a4842  8b542418             mov edx, dword ptr [esp + 0x18]
// 004a4846  895014               mov dword ptr [eax + 0x14], edx
// 004a4849  eb02                 jmp 0x4a484d
// 004a484b  33c0                 xor eax, eax
// 004a484d  56                   push esi
// 004a484e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a4852  6a00                 push 0
// 004a4854  8906                 mov dword ptr [esi], eax
// 004a4856  e83f313000           call 0x7a799a
// 004a485b  83c404               add esp, 4
// 004a485e  8bc6                 mov eax, esi
// 004a4860  5e                   pop esi
// 004a4861  59                   pop ecx
// 004a4862  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
