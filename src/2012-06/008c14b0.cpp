// roc 2012-06 008c14b0  unit: RBX::BillboardGui  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c14b0
//
// 008c14b0  51                   push ecx
// 008c14b1  6a18                 push 0x18
// 008c14b3  c744240400000000     mov dword ptr [esp + 4], 0
// 008c14bb  e85a0c0c00           call 0x98211a
// 008c14c0  83c404               add esp, 4
// 008c14c3  85c0                 test eax, eax
// 008c14c5  7424                 je 0x8c14eb
// 008c14c7  c700945dbe00         mov dword ptr [eax], 0xbe5d94
// 008c14cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c14d1  894808               mov dword ptr [eax + 8], ecx
// 008c14d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c14d8  89500c               mov dword ptr [eax + 0xc], edx
// 008c14db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c14df  894810               mov dword ptr [eax + 0x10], ecx
// 008c14e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c14e6  895014               mov dword ptr [eax + 0x14], edx
// 008c14e9  eb02                 jmp 0x8c14ed
// 008c14eb  33c0                 xor eax, eax
// 008c14ed  56                   push esi
// 008c14ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c14f2  6a00                 push 0
// 008c14f4  8906                 mov dword ptr [esi], eax
// 008c14f6  e8190c0c00           call 0x982114
// 008c14fb  83c404               add esp, 4
// 008c14fe  8bc6                 mov eax, esi
// 008c1500  5e                   pop esi
// 008c1501  59                   pop ecx
// 008c1502  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
