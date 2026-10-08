// roc 2012-06 007b5aa0  unit: RBX::PART::VWedge::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b5aa0
//
// 007b5aa0  51                   push ecx
// 007b5aa1  6a18                 push 0x18
// 007b5aa3  c744240400000000     mov dword ptr [esp + 4], 0
// 007b5aab  e86ac61c00           call 0x98211a
// 007b5ab0  83c404               add esp, 4
// 007b5ab3  85c0                 test eax, eax
// 007b5ab5  7424                 je 0x7b5adb
// 007b5ab7  c7001893bb00         mov dword ptr [eax], 0xbb9318
// 007b5abd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b5ac1  894808               mov dword ptr [eax + 8], ecx
// 007b5ac4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b5ac8  89500c               mov dword ptr [eax + 0xc], edx
// 007b5acb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b5acf  894810               mov dword ptr [eax + 0x10], ecx
// 007b5ad2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b5ad6  895014               mov dword ptr [eax + 0x14], edx
// 007b5ad9  eb02                 jmp 0x7b5add
// 007b5adb  33c0                 xor eax, eax
// 007b5add  56                   push esi
// 007b5ade  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b5ae2  6a00                 push 0
// 007b5ae4  8906                 mov dword ptr [esi], eax
// 007b5ae6  e829c61c00           call 0x982114
// 007b5aeb  83c404               add esp, 4
// 007b5aee  8bc6                 mov eax, esi
// 007b5af0  5e                   pop esi
// 007b5af1  59                   pop ecx
// 007b5af2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
