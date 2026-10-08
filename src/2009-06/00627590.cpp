// roc 2009-06 00627590  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00627590
//
// 00627590  51                   push ecx
// 00627591  6a18                 push 0x18
// 00627593  c744240400000000     mov dword ptr [esp + 4], 0
// 0062759b  e898140f00           call 0x718a38
// 006275a0  83c404               add esp, 4
// 006275a3  85c0                 test eax, eax
// 006275a5  7424                 je 0x6275cb
// 006275a7  c700b0a48d00         mov dword ptr [eax], 0x8da4b0
// 006275ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006275b1  894808               mov dword ptr [eax + 8], ecx
// 006275b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006275b8  89500c               mov dword ptr [eax + 0xc], edx
// 006275bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006275bf  894810               mov dword ptr [eax + 0x10], ecx
// 006275c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006275c6  895014               mov dword ptr [eax + 0x14], edx
// 006275c9  eb02                 jmp 0x6275cd
// 006275cb  33c0                 xor eax, eax
// 006275cd  56                   push esi
// 006275ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006275d2  6a00                 push 0
// 006275d4  8906                 mov dword ptr [esi], eax
// 006275d6  e857140f00           call 0x718a32
// 006275db  83c404               add esp, 4
// 006275de  8bc6                 mov eax, esi
// 006275e0  5e                   pop esi
// 006275e1  59                   pop ecx
// 006275e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
