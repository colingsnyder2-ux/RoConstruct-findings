// roc 2012-06 008f4cf0  unit: RBX::HandlesBase  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f4cf0
//
// 008f4cf0  51                   push ecx
// 008f4cf1  6a18                 push 0x18
// 008f4cf3  c744240400000000     mov dword ptr [esp + 4], 0
// 008f4cfb  e81ad40800           call 0x98211a
// 008f4d00  83c404               add esp, 4
// 008f4d03  85c0                 test eax, eax
// 008f4d05  7424                 je 0x8f4d2b
// 008f4d07  c70030febe00         mov dword ptr [eax], 0xbefe30
// 008f4d0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f4d11  894808               mov dword ptr [eax + 8], ecx
// 008f4d14  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f4d18  89500c               mov dword ptr [eax + 0xc], edx
// 008f4d1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f4d1f  894810               mov dword ptr [eax + 0x10], ecx
// 008f4d22  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f4d26  895014               mov dword ptr [eax + 0x14], edx
// 008f4d29  eb02                 jmp 0x8f4d2d
// 008f4d2b  33c0                 xor eax, eax
// 008f4d2d  56                   push esi
// 008f4d2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008f4d32  6a00                 push 0
// 008f4d34  8906                 mov dword ptr [esi], eax
// 008f4d36  e8d9d30800           call 0x982114
// 008f4d3b  83c404               add esp, 4
// 008f4d3e  8bc6                 mov eax, esi
// 008f4d40  5e                   pop esi
// 008f4d41  59                   pop ecx
// 008f4d42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
