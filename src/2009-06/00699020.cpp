// roc 2009-06 00699020  unit: RBX::VMotorFeature::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00699020
//
// 00699020  51                   push ecx
// 00699021  6a18                 push 0x18
// 00699023  c744240400000000     mov dword ptr [esp + 4], 0
// 0069902b  e808fa0700           call 0x718a38
// 00699030  83c404               add esp, 4
// 00699033  85c0                 test eax, eax
// 00699035  7424                 je 0x69905b
// 00699037  c700c4808e00         mov dword ptr [eax], 0x8e80c4
// 0069903d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00699041  894808               mov dword ptr [eax + 8], ecx
// 00699044  8b542410             mov edx, dword ptr [esp + 0x10]
// 00699048  89500c               mov dword ptr [eax + 0xc], edx
// 0069904b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069904f  894810               mov dword ptr [eax + 0x10], ecx
// 00699052  8b542418             mov edx, dword ptr [esp + 0x18]
// 00699056  895014               mov dword ptr [eax + 0x14], edx
// 00699059  eb02                 jmp 0x69905d
// 0069905b  33c0                 xor eax, eax
// 0069905d  56                   push esi
// 0069905e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00699062  6a00                 push 0
// 00699064  8906                 mov dword ptr [esi], eax
// 00699066  e8c7f90700           call 0x718a32
// 0069906b  83c404               add esp, 4
// 0069906e  8bc6                 mov eax, esi
// 00699070  5e                   pop esi
// 00699071  59                   pop ecx
// 00699072  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
