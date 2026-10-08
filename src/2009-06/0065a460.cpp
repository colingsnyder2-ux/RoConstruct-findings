// roc 2009-06 0065a460  unit: RBX::Camera  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065a460
//
// 0065a460  51                   push ecx
// 0065a461  6a18                 push 0x18
// 0065a463  c744240400000000     mov dword ptr [esp + 4], 0
// 0065a46b  e8c8e50b00           call 0x718a38
// 0065a470  83c404               add esp, 4
// 0065a473  85c0                 test eax, eax
// 0065a475  7424                 je 0x65a49b
// 0065a477  c700d4118e00         mov dword ptr [eax], 0x8e11d4
// 0065a47d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065a481  894808               mov dword ptr [eax + 8], ecx
// 0065a484  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065a488  89500c               mov dword ptr [eax + 0xc], edx
// 0065a48b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065a48f  894810               mov dword ptr [eax + 0x10], ecx
// 0065a492  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065a496  895014               mov dword ptr [eax + 0x14], edx
// 0065a499  eb02                 jmp 0x65a49d
// 0065a49b  33c0                 xor eax, eax
// 0065a49d  56                   push esi
// 0065a49e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065a4a2  6a00                 push 0
// 0065a4a4  8906                 mov dword ptr [esi], eax
// 0065a4a6  e887e50b00           call 0x718a32
// 0065a4ab  83c404               add esp, 4
// 0065a4ae  8bc6                 mov eax, esi
// 0065a4b0  5e                   pop esi
// 0065a4b1  59                   pop ecx
// 0065a4b2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
