// roc 2009-12 0071da60  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071da60
//
// 0071da60  51                   push ecx
// 0071da61  6a18                 push 0x18
// 0071da63  c744240400000000     mov dword ptr [esp + 4], 0
// 0071da6b  e8f05d0d00           call 0x7f3860
// 0071da70  83c404               add esp, 4
// 0071da73  85c0                 test eax, eax
// 0071da75  7424                 je 0x71da9b
// 0071da77  c70064fb9d00         mov dword ptr [eax], 0x9dfb64
// 0071da7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071da81  894808               mov dword ptr [eax + 8], ecx
// 0071da84  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071da88  89500c               mov dword ptr [eax + 0xc], edx
// 0071da8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071da8f  894810               mov dword ptr [eax + 0x10], ecx
// 0071da92  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071da96  895014               mov dword ptr [eax + 0x14], edx
// 0071da99  eb02                 jmp 0x71da9d
// 0071da9b  33c0                 xor eax, eax
// 0071da9d  56                   push esi
// 0071da9e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071daa2  6a00                 push 0
// 0071daa4  8906                 mov dword ptr [esi], eax
// 0071daa6  e8af5d0d00           call 0x7f385a
// 0071daab  83c404               add esp, 4
// 0071daae  8bc6                 mov eax, esi
// 0071dab0  5e                   pop esi
// 0071dab1  59                   pop ecx
// 0071dab2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
