// roc 2012-06 007acd00  unit: RBX::VSky::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007acd00
//
// 007acd00  51                   push ecx
// 007acd01  6a18                 push 0x18
// 007acd03  c744240400000000     mov dword ptr [esp + 4], 0
// 007acd0b  e80a541d00           call 0x98211a
// 007acd10  83c404               add esp, 4
// 007acd13  85c0                 test eax, eax
// 007acd15  7424                 je 0x7acd3b
// 007acd17  c700e46ebb00         mov dword ptr [eax], 0xbb6ee4
// 007acd1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007acd21  894808               mov dword ptr [eax + 8], ecx
// 007acd24  8b542410             mov edx, dword ptr [esp + 0x10]
// 007acd28  89500c               mov dword ptr [eax + 0xc], edx
// 007acd2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007acd2f  894810               mov dword ptr [eax + 0x10], ecx
// 007acd32  8b542418             mov edx, dword ptr [esp + 0x18]
// 007acd36  895014               mov dword ptr [eax + 0x14], edx
// 007acd39  eb02                 jmp 0x7acd3d
// 007acd3b  33c0                 xor eax, eax
// 007acd3d  56                   push esi
// 007acd3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007acd42  6a00                 push 0
// 007acd44  8906                 mov dword ptr [esi], eax
// 007acd46  e8c9531d00           call 0x982114
// 007acd4b  83c404               add esp, 4
// 007acd4e  8bc6                 mov eax, esi
// 007acd50  5e                   pop esi
// 007acd51  59                   pop ecx
// 007acd52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
