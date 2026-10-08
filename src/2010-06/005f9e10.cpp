// roc 2010-06 005f9e10  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f9e10
//
// 005f9e10  51                   push ecx
// 005f9e11  6a18                 push 0x18
// 005f9e13  c744240400000000     mov dword ptr [esp + 4], 0
// 005f9e1b  e880db1a00           call 0x7a79a0
// 005f9e20  83c404               add esp, 4
// 005f9e23  85c0                 test eax, eax
// 005f9e25  7424                 je 0x5f9e4b
// 005f9e27  c700e8ffa200         mov dword ptr [eax], 0xa2ffe8
// 005f9e2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f9e31  894808               mov dword ptr [eax + 8], ecx
// 005f9e34  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f9e38  89500c               mov dword ptr [eax + 0xc], edx
// 005f9e3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f9e3f  894810               mov dword ptr [eax + 0x10], ecx
// 005f9e42  8b542418             mov edx, dword ptr [esp + 0x18]
// 005f9e46  895014               mov dword ptr [eax + 0x14], edx
// 005f9e49  eb02                 jmp 0x5f9e4d
// 005f9e4b  33c0                 xor eax, eax
// 005f9e4d  56                   push esi
// 005f9e4e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f9e52  6a00                 push 0
// 005f9e54  8906                 mov dword ptr [esi], eax
// 005f9e56  e83fdb1a00           call 0x7a799a
// 005f9e5b  83c404               add esp, 4
// 005f9e5e  8bc6                 mov eax, esi
// 005f9e60  5e                   pop esi
// 005f9e61  59                   pop ecx
// 005f9e62  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
