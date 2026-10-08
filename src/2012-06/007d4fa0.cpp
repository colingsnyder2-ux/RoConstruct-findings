// roc 2012-06 007d4fa0  unit: RBX::VSkin::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d4fa0
//
// 007d4fa0  51                   push ecx
// 007d4fa1  6a18                 push 0x18
// 007d4fa3  c744240400000000     mov dword ptr [esp + 4], 0
// 007d4fab  e86ad11a00           call 0x98211a
// 007d4fb0  83c404               add esp, 4
// 007d4fb3  85c0                 test eax, eax
// 007d4fb5  7424                 je 0x7d4fdb
// 007d4fb7  c700ec0bbc00         mov dword ptr [eax], 0xbc0bec
// 007d4fbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007d4fc1  894808               mov dword ptr [eax + 8], ecx
// 007d4fc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d4fc8  89500c               mov dword ptr [eax + 0xc], edx
// 007d4fcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d4fcf  894810               mov dword ptr [eax + 0x10], ecx
// 007d4fd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007d4fd6  895014               mov dword ptr [eax + 0x14], edx
// 007d4fd9  eb02                 jmp 0x7d4fdd
// 007d4fdb  33c0                 xor eax, eax
// 007d4fdd  56                   push esi
// 007d4fde  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007d4fe2  6a00                 push 0
// 007d4fe4  8906                 mov dword ptr [esi], eax
// 007d4fe6  e829d11a00           call 0x982114
// 007d4feb  83c404               add esp, 4
// 007d4fee  8bc6                 mov eax, esi
// 007d4ff0  5e                   pop esi
// 007d4ff1  59                   pop ecx
// 007d4ff2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
