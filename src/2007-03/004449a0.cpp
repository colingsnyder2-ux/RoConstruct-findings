// roc 2007-03 004449a0  unit: seg_00440000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004449a0
//
// 004449a0  51                   push ecx
// 004449a1  6a18                 push 0x18
// 004449a3  c744240400000000     mov dword ptr [esp + 4], 0
// 004449ab  e858971d00           call 0x61e108
// 004449b0  83c404               add esp, 4
// 004449b3  85c0                 test eax, eax
// 004449b5  7424                 je 0x4449db
// 004449b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004449bb  8b542410             mov edx, dword ptr [esp + 0x10]
// 004449bf  894808               mov dword ptr [eax + 8], ecx
// 004449c2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004449c6  89500c               mov dword ptr [eax + 0xc], edx
// 004449c9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004449cd  c70018eb7800         mov dword ptr [eax], 0x78eb18
// 004449d3  894810               mov dword ptr [eax + 0x10], ecx
// 004449d6  895014               mov dword ptr [eax + 0x14], edx
// 004449d9  eb02                 jmp 0x4449dd
// 004449db  33c0                 xor eax, eax
// 004449dd  56                   push esi
// 004449de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004449e2  6a00                 push 0
// 004449e4  c744240800000000     mov dword ptr [esp + 8], 0
// 004449ec  8906                 mov dword ptr [esi], eax
// 004449ee  e8fd961d00           call 0x61e0f0
// 004449f3  83c404               add esp, 4
// 004449f6  8bc6                 mov eax, esi
// 004449f8  5e                   pop esi
// 004449f9  59                   pop ecx
// 004449fa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
