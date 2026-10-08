// roc 2012-06 007b72f0  unit: RBX::Fire  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b72f0
//
// 007b72f0  51                   push ecx
// 007b72f1  6a18                 push 0x18
// 007b72f3  c744240400000000     mov dword ptr [esp + 4], 0
// 007b72fb  e81aae1c00           call 0x98211a
// 007b7300  83c404               add esp, 4
// 007b7303  85c0                 test eax, eax
// 007b7305  7424                 je 0x7b732b
// 007b7307  c7001899bb00         mov dword ptr [eax], 0xbb9918
// 007b730d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b7311  894808               mov dword ptr [eax + 8], ecx
// 007b7314  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b7318  89500c               mov dword ptr [eax + 0xc], edx
// 007b731b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b731f  894810               mov dword ptr [eax + 0x10], ecx
// 007b7322  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b7326  895014               mov dword ptr [eax + 0x14], edx
// 007b7329  eb02                 jmp 0x7b732d
// 007b732b  33c0                 xor eax, eax
// 007b732d  56                   push esi
// 007b732e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b7332  6a00                 push 0
// 007b7334  8906                 mov dword ptr [esi], eax
// 007b7336  e8d9ad1c00           call 0x982114
// 007b733b  83c404               add esp, 4
// 007b733e  8bc6                 mov eax, esi
// 007b7340  5e                   pop esi
// 007b7341  59                   pop ecx
// 007b7342  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
