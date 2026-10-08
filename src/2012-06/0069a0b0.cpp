// roc 2012-06 0069a0b0  unit: RBX::VTeam::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0069a0b0
//
// 0069a0b0  51                   push ecx
// 0069a0b1  6a18                 push 0x18
// 0069a0b3  c744240400000000     mov dword ptr [esp + 4], 0
// 0069a0bb  e85a802e00           call 0x98211a
// 0069a0c0  83c404               add esp, 4
// 0069a0c3  85c0                 test eax, eax
// 0069a0c5  7424                 je 0x69a0eb
// 0069a0c7  c7005c3bb900         mov dword ptr [eax], 0xb93b5c
// 0069a0cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069a0d1  894808               mov dword ptr [eax + 8], ecx
// 0069a0d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0069a0d8  89500c               mov dword ptr [eax + 0xc], edx
// 0069a0db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069a0df  894810               mov dword ptr [eax + 0x10], ecx
// 0069a0e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069a0e6  895014               mov dword ptr [eax + 0x14], edx
// 0069a0e9  eb02                 jmp 0x69a0ed
// 0069a0eb  33c0                 xor eax, eax
// 0069a0ed  56                   push esi
// 0069a0ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069a0f2  6a00                 push 0
// 0069a0f4  8906                 mov dword ptr [esi], eax
// 0069a0f6  e819802e00           call 0x982114
// 0069a0fb  83c404               add esp, 4
// 0069a0fe  8bc6                 mov eax, esi
// 0069a100  5e                   pop esi
// 0069a101  59                   pop ecx
// 0069a102  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
