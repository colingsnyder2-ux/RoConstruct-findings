// roc 2012-06 008ccbd0  unit: RBX::BodyVelocity  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008ccbd0
//
// 008ccbd0  51                   push ecx
// 008ccbd1  6a18                 push 0x18
// 008ccbd3  c744240400000000     mov dword ptr [esp + 4], 0
// 008ccbdb  e83a550b00           call 0x98211a
// 008ccbe0  83c404               add esp, 4
// 008ccbe3  85c0                 test eax, eax
// 008ccbe5  7424                 je 0x8ccc0b
// 008ccbe7  c7008480be00         mov dword ptr [eax], 0xbe8084
// 008ccbed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ccbf1  894808               mov dword ptr [eax + 8], ecx
// 008ccbf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ccbf8  89500c               mov dword ptr [eax + 0xc], edx
// 008ccbfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ccbff  894810               mov dword ptr [eax + 0x10], ecx
// 008ccc02  8b542418             mov edx, dword ptr [esp + 0x18]
// 008ccc06  895014               mov dword ptr [eax + 0x14], edx
// 008ccc09  eb02                 jmp 0x8ccc0d
// 008ccc0b  33c0                 xor eax, eax
// 008ccc0d  56                   push esi
// 008ccc0e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008ccc12  6a00                 push 0
// 008ccc14  8906                 mov dword ptr [esi], eax
// 008ccc16  e8f9540b00           call 0x982114
// 008ccc1b  83c404               add esp, 4
// 008ccc1e  8bc6                 mov eax, esi
// 008ccc20  5e                   pop esi
// 008ccc21  59                   pop ecx
// 008ccc22  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
