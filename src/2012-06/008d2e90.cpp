// roc 2012-06 008d2e90  unit: RBX::Handles  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008d2e90
//
// 008d2e90  51                   push ecx
// 008d2e91  6a18                 push 0x18
// 008d2e93  c744240400000000     mov dword ptr [esp + 4], 0
// 008d2e9b  e87af20a00           call 0x98211a
// 008d2ea0  83c404               add esp, 4
// 008d2ea3  85c0                 test eax, eax
// 008d2ea5  7424                 je 0x8d2ecb
// 008d2ea7  c700349abe00         mov dword ptr [eax], 0xbe9a34
// 008d2ead  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d2eb1  894808               mov dword ptr [eax + 8], ecx
// 008d2eb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d2eb8  89500c               mov dword ptr [eax + 0xc], edx
// 008d2ebb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d2ebf  894810               mov dword ptr [eax + 0x10], ecx
// 008d2ec2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d2ec6  895014               mov dword ptr [eax + 0x14], edx
// 008d2ec9  eb02                 jmp 0x8d2ecd
// 008d2ecb  33c0                 xor eax, eax
// 008d2ecd  56                   push esi
// 008d2ece  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008d2ed2  6a00                 push 0
// 008d2ed4  8906                 mov dword ptr [esi], eax
// 008d2ed6  e839f20a00           call 0x982114
// 008d2edb  83c404               add esp, 4
// 008d2ede  8bc6                 mov eax, esi
// 008d2ee0  5e                   pop esi
// 008d2ee1  59                   pop ecx
// 008d2ee2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
