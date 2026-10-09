// roc 2009-12 007129f0  unit: RBX::Hint  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007129f0
//
// 007129f0  51                   push ecx
// 007129f1  6a18                 push 0x18
// 007129f3  c744240400000000     mov dword ptr [esp + 4], 0
// 007129fb  e8600e0e00           call 0x7f3860
// 00712a00  83c404               add esp, 4
// 00712a03  85c0                 test eax, eax
// 00712a05  7424                 je 0x712a2b
// 00712a07  c7007ce39d00         mov dword ptr [eax], 0x9de37c
// 00712a0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00712a11  894808               mov dword ptr [eax + 8], ecx
// 00712a14  8b542410             mov edx, dword ptr [esp + 0x10]
// 00712a18  89500c               mov dword ptr [eax + 0xc], edx
// 00712a1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00712a1f  894810               mov dword ptr [eax + 0x10], ecx
// 00712a22  8b542418             mov edx, dword ptr [esp + 0x18]
// 00712a26  895014               mov dword ptr [eax + 0x14], edx
// 00712a29  eb02                 jmp 0x712a2d
// 00712a2b  33c0                 xor eax, eax
// 00712a2d  56                   push esi
// 00712a2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00712a32  6a00                 push 0
// 00712a34  8906                 mov dword ptr [esi], eax
// 00712a36  e81f0e0e00           call 0x7f385a
// 00712a3b  83c404               add esp, 4
// 00712a3e  8bc6                 mov eax, esi
// 00712a40  5e                   pop esi
// 00712a41  59                   pop ecx
// 00712a42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
