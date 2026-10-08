// roc 2012-06 007aa820  unit: RBX::VLighting::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007aa820
//
// 007aa820  51                   push ecx
// 007aa821  6a18                 push 0x18
// 007aa823  c744240400000000     mov dword ptr [esp + 4], 0
// 007aa82b  e8ea781d00           call 0x98211a
// 007aa830  83c404               add esp, 4
// 007aa833  85c0                 test eax, eax
// 007aa835  7424                 je 0x7aa85b
// 007aa837  c7009c6abb00         mov dword ptr [eax], 0xbb6a9c
// 007aa83d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007aa841  894808               mov dword ptr [eax + 8], ecx
// 007aa844  8b542410             mov edx, dword ptr [esp + 0x10]
// 007aa848  89500c               mov dword ptr [eax + 0xc], edx
// 007aa84b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007aa84f  894810               mov dword ptr [eax + 0x10], ecx
// 007aa852  8b542418             mov edx, dword ptr [esp + 0x18]
// 007aa856  895014               mov dword ptr [eax + 0x14], edx
// 007aa859  eb02                 jmp 0x7aa85d
// 007aa85b  33c0                 xor eax, eax
// 007aa85d  56                   push esi
// 007aa85e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007aa862  6a00                 push 0
// 007aa864  8906                 mov dword ptr [esi], eax
// 007aa866  e8a9781d00           call 0x982114
// 007aa86b  83c404               add esp, 4
// 007aa86e  8bc6                 mov eax, esi
// 007aa870  5e                   pop esi
// 007aa871  59                   pop ecx
// 007aa872  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
