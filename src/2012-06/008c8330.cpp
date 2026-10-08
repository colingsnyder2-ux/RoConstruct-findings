// roc 2012-06 008c8330  unit: RBX::P8Tool::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c8330
//
// 008c8330  51                   push ecx
// 008c8331  6a18                 push 0x18
// 008c8333  c744240400000000     mov dword ptr [esp + 4], 0
// 008c833b  e8da9d0b00           call 0x98211a
// 008c8340  83c404               add esp, 4
// 008c8343  85c0                 test eax, eax
// 008c8345  7424                 je 0x8c836b
// 008c8347  c7002069be00         mov dword ptr [eax], 0xbe6920
// 008c834d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c8351  894808               mov dword ptr [eax + 8], ecx
// 008c8354  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c8358  89500c               mov dword ptr [eax + 0xc], edx
// 008c835b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c835f  894810               mov dword ptr [eax + 0x10], ecx
// 008c8362  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c8366  895014               mov dword ptr [eax + 0x14], edx
// 008c8369  eb02                 jmp 0x8c836d
// 008c836b  33c0                 xor eax, eax
// 008c836d  56                   push esi
// 008c836e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c8372  6a00                 push 0
// 008c8374  8906                 mov dword ptr [esi], eax
// 008c8376  e8999d0b00           call 0x982114
// 008c837b  83c404               add esp, 4
// 008c837e  8bc6                 mov eax, esi
// 008c8380  5e                   pop esi
// 008c8381  59                   pop ecx
// 008c8382  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
