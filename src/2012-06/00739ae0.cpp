// roc 2012-06 00739ae0  unit: RBX::BasePlayerGui  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00739ae0
//
// 00739ae0  51                   push ecx
// 00739ae1  6a18                 push 0x18
// 00739ae3  c744240400000000     mov dword ptr [esp + 4], 0
// 00739aeb  e82a862400           call 0x98211a
// 00739af0  83c404               add esp, 4
// 00739af3  85c0                 test eax, eax
// 00739af5  7424                 je 0x739b1b
// 00739af7  c7005c8dba00         mov dword ptr [eax], 0xba8d5c
// 00739afd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00739b01  894808               mov dword ptr [eax + 8], ecx
// 00739b04  8b542410             mov edx, dword ptr [esp + 0x10]
// 00739b08  89500c               mov dword ptr [eax + 0xc], edx
// 00739b0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00739b0f  894810               mov dword ptr [eax + 0x10], ecx
// 00739b12  8b542418             mov edx, dword ptr [esp + 0x18]
// 00739b16  895014               mov dword ptr [eax + 0x14], edx
// 00739b19  eb02                 jmp 0x739b1d
// 00739b1b  33c0                 xor eax, eax
// 00739b1d  56                   push esi
// 00739b1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00739b22  6a00                 push 0
// 00739b24  8906                 mov dword ptr [esi], eax
// 00739b26  e8e9852400           call 0x982114
// 00739b2b  83c404               add esp, 4
// 00739b2e  8bc6                 mov eax, esi
// 00739b30  5e                   pop esi
// 00739b31  59                   pop ecx
// 00739b32  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
