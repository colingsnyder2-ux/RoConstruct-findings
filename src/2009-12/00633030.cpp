// roc 2009-12 00633030  unit: RBX::Object  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00633030
//
// 00633030  51                   push ecx
// 00633031  6a18                 push 0x18
// 00633033  c744240400000000     mov dword ptr [esp + 4], 0
// 0063303b  e820081c00           call 0x7f3860
// 00633040  83c404               add esp, 4
// 00633043  85c0                 test eax, eax
// 00633045  7424                 je 0x63306b
// 00633047  c70010bd9c00         mov dword ptr [eax], 0x9cbd10
// 0063304d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00633051  894808               mov dword ptr [eax + 8], ecx
// 00633054  8b542410             mov edx, dword ptr [esp + 0x10]
// 00633058  89500c               mov dword ptr [eax + 0xc], edx
// 0063305b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063305f  894810               mov dword ptr [eax + 0x10], ecx
// 00633062  8b542418             mov edx, dword ptr [esp + 0x18]
// 00633066  895014               mov dword ptr [eax + 0x14], edx
// 00633069  eb02                 jmp 0x63306d
// 0063306b  33c0                 xor eax, eax
// 0063306d  56                   push esi
// 0063306e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00633072  6a00                 push 0
// 00633074  8906                 mov dword ptr [esi], eax
// 00633076  e8df071c00           call 0x7f385a
// 0063307b  83c404               add esp, 4
// 0063307e  8bc6                 mov eax, esi
// 00633080  5e                   pop esi
// 00633081  59                   pop ecx
// 00633082  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
