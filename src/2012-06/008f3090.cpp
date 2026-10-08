// roc 2012-06 008f3090  unit: RBX::P8NetworkSettings::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f3090
//
// 008f3090  51                   push ecx
// 008f3091  6a18                 push 0x18
// 008f3093  c744240400000000     mov dword ptr [esp + 4], 0
// 008f309b  e87af00800           call 0x98211a
// 008f30a0  83c404               add esp, 4
// 008f30a3  85c0                 test eax, eax
// 008f30a5  7424                 je 0x8f30cb
// 008f30a7  c700fcf6be00         mov dword ptr [eax], 0xbef6fc
// 008f30ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f30b1  894808               mov dword ptr [eax + 8], ecx
// 008f30b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f30b8  89500c               mov dword ptr [eax + 0xc], edx
// 008f30bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f30bf  894810               mov dword ptr [eax + 0x10], ecx
// 008f30c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f30c6  895014               mov dword ptr [eax + 0x14], edx
// 008f30c9  eb02                 jmp 0x8f30cd
// 008f30cb  33c0                 xor eax, eax
// 008f30cd  56                   push esi
// 008f30ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008f30d2  6a00                 push 0
// 008f30d4  8906                 mov dword ptr [esi], eax
// 008f30d6  e839f00800           call 0x982114
// 008f30db  83c404               add esp, 4
// 008f30de  8bc6                 mov eax, esi
// 008f30e0  5e                   pop esi
// 008f30e1  59                   pop ecx
// 008f30e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
