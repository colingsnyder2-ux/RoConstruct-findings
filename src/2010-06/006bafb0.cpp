// roc 2010-06 006bafb0  unit: RBX::P8BillboardGui::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bafb0
//
// 006bafb0  51                   push ecx
// 006bafb1  6a18                 push 0x18
// 006bafb3  c744240400000000     mov dword ptr [esp + 4], 0
// 006bafbb  e8e0c90e00           call 0x7a79a0
// 006bafc0  83c404               add esp, 4
// 006bafc3  85c0                 test eax, eax
// 006bafc5  7424                 je 0x6bafeb
// 006bafc7  c700c42ba400         mov dword ptr [eax], 0xa42bc4
// 006bafcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006bafd1  894808               mov dword ptr [eax + 8], ecx
// 006bafd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006bafd8  89500c               mov dword ptr [eax + 0xc], edx
// 006bafdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006bafdf  894810               mov dword ptr [eax + 0x10], ecx
// 006bafe2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006bafe6  895014               mov dword ptr [eax + 0x14], edx
// 006bafe9  eb02                 jmp 0x6bafed
// 006bafeb  33c0                 xor eax, eax
// 006bafed  56                   push esi
// 006bafee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006baff2  6a00                 push 0
// 006baff4  8906                 mov dword ptr [esi], eax
// 006baff6  e89fc90e00           call 0x7a799a
// 006baffb  83c404               add esp, 4
// 006baffe  8bc6                 mov eax, esi
// 006bb000  5e                   pop esi
// 006bb001  59                   pop ecx
// 006bb002  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
