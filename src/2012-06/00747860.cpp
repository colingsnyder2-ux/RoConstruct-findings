// roc 2012-06 00747860  unit: RBX::VDecal::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00747860
//
// 00747860  51                   push ecx
// 00747861  6a18                 push 0x18
// 00747863  c744240400000000     mov dword ptr [esp + 4], 0
// 0074786b  e8aaa82300           call 0x98211a
// 00747870  83c404               add esp, 4
// 00747873  85c0                 test eax, eax
// 00747875  7424                 je 0x74789b
// 00747877  c700f4adba00         mov dword ptr [eax], 0xbaadf4
// 0074787d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00747881  894808               mov dword ptr [eax + 8], ecx
// 00747884  8b542410             mov edx, dword ptr [esp + 0x10]
// 00747888  89500c               mov dword ptr [eax + 0xc], edx
// 0074788b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074788f  894810               mov dword ptr [eax + 0x10], ecx
// 00747892  8b542418             mov edx, dword ptr [esp + 0x18]
// 00747896  895014               mov dword ptr [eax + 0x14], edx
// 00747899  eb02                 jmp 0x74789d
// 0074789b  33c0                 xor eax, eax
// 0074789d  56                   push esi
// 0074789e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007478a2  6a00                 push 0
// 007478a4  8906                 mov dword ptr [esi], eax
// 007478a6  e869a82300           call 0x982114
// 007478ab  83c404               add esp, 4
// 007478ae  8bc6                 mov eax, esi
// 007478b0  5e                   pop esi
// 007478b1  59                   pop ecx
// 007478b2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
