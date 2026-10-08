// roc 2007-03 0048c5a0  unit: seg_00480000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048c5a0
//
// 0048c5a0  51                   push ecx
// 0048c5a1  6a18                 push 0x18
// 0048c5a3  c744240400000000     mov dword ptr [esp + 4], 0
// 0048c5ab  e8581b1900           call 0x61e108
// 0048c5b0  83c404               add esp, 4
// 0048c5b3  85c0                 test eax, eax
// 0048c5b5  7424                 je 0x48c5db
// 0048c5b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048c5bb  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048c5bf  894808               mov dword ptr [eax + 8], ecx
// 0048c5c2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048c5c6  89500c               mov dword ptr [eax + 0xc], edx
// 0048c5c9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048c5cd  c70038a97900         mov dword ptr [eax], 0x79a938
// 0048c5d3  894810               mov dword ptr [eax + 0x10], ecx
// 0048c5d6  895014               mov dword ptr [eax + 0x14], edx
// 0048c5d9  eb02                 jmp 0x48c5dd
// 0048c5db  33c0                 xor eax, eax
// 0048c5dd  56                   push esi
// 0048c5de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048c5e2  6a00                 push 0
// 0048c5e4  c744240800000000     mov dword ptr [esp + 8], 0
// 0048c5ec  8906                 mov dword ptr [esi], eax
// 0048c5ee  e8fd1a1900           call 0x61e0f0
// 0048c5f3  83c404               add esp, 4
// 0048c5f6  8bc6                 mov eax, esi
// 0048c5f8  5e                   pop esi
// 0048c5f9  59                   pop ecx
// 0048c5fa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
