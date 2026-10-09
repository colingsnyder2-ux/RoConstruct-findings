// roc 2009-12 00753380  unit: RBX::TouchTransmitter  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00753380
//
// 00753380  51                   push ecx
// 00753381  6a18                 push 0x18
// 00753383  c744240400000000     mov dword ptr [esp + 4], 0
// 0075338b  e8d0040a00           call 0x7f3860
// 00753390  83c404               add esp, 4
// 00753393  85c0                 test eax, eax
// 00753395  7424                 je 0x7533bb
// 00753397  c700bc479e00         mov dword ptr [eax], 0x9e47bc
// 0075339d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007533a1  894808               mov dword ptr [eax + 8], ecx
// 007533a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007533a8  89500c               mov dword ptr [eax + 0xc], edx
// 007533ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007533af  894810               mov dword ptr [eax + 0x10], ecx
// 007533b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007533b6  895014               mov dword ptr [eax + 0x14], edx
// 007533b9  eb02                 jmp 0x7533bd
// 007533bb  33c0                 xor eax, eax
// 007533bd  56                   push esi
// 007533be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007533c2  6a00                 push 0
// 007533c4  8906                 mov dword ptr [esi], eax
// 007533c6  e88f040a00           call 0x7f385a
// 007533cb  83c404               add esp, 4
// 007533ce  8bc6                 mov eax, esi
// 007533d0  5e                   pop esi
// 007533d1  59                   pop ecx
// 007533d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
