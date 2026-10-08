// roc 2012-06 00899280  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00899280
//
// 00899280  51                   push ecx
// 00899281  6a18                 push 0x18
// 00899283  c744240400000000     mov dword ptr [esp + 4], 0
// 0089928b  e88a8e0e00           call 0x98211a
// 00899290  83c404               add esp, 4
// 00899293  85c0                 test eax, eax
// 00899295  7424                 je 0x8992bb
// 00899297  c70070bcbd00         mov dword ptr [eax], 0xbdbc70
// 0089929d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008992a1  894808               mov dword ptr [eax + 8], ecx
// 008992a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008992a8  89500c               mov dword ptr [eax + 0xc], edx
// 008992ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008992af  894810               mov dword ptr [eax + 0x10], ecx
// 008992b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008992b6  895014               mov dword ptr [eax + 0x14], edx
// 008992b9  eb02                 jmp 0x8992bd
// 008992bb  33c0                 xor eax, eax
// 008992bd  56                   push esi
// 008992be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008992c2  6a00                 push 0
// 008992c4  8906                 mov dword ptr [esi], eax
// 008992c6  e8498e0e00           call 0x982114
// 008992cb  83c404               add esp, 4
// 008992ce  8bc6                 mov eax, esi
// 008992d0  5e                   pop esi
// 008992d1  59                   pop ecx
// 008992d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
