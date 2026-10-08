// roc 2010-06 006c2750  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c2750
//
// 006c2750  51                   push ecx
// 006c2751  6a18                 push 0x18
// 006c2753  c744240400000000     mov dword ptr [esp + 4], 0
// 006c275b  e840520e00           call 0x7a79a0
// 006c2760  83c404               add esp, 4
// 006c2763  85c0                 test eax, eax
// 006c2765  7424                 je 0x6c278b
// 006c2767  c700f43ba400         mov dword ptr [eax], 0xa43bf4
// 006c276d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c2771  894808               mov dword ptr [eax + 8], ecx
// 006c2774  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c2778  89500c               mov dword ptr [eax + 0xc], edx
// 006c277b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c277f  894810               mov dword ptr [eax + 0x10], ecx
// 006c2782  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c2786  895014               mov dword ptr [eax + 0x14], edx
// 006c2789  eb02                 jmp 0x6c278d
// 006c278b  33c0                 xor eax, eax
// 006c278d  56                   push esi
// 006c278e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c2792  6a00                 push 0
// 006c2794  8906                 mov dword ptr [esi], eax
// 006c2796  e8ff510e00           call 0x7a799a
// 006c279b  83c404               add esp, 4
// 006c279e  8bc6                 mov eax, esi
// 006c27a0  5e                   pop esi
// 006c27a1  59                   pop ecx
// 006c27a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
