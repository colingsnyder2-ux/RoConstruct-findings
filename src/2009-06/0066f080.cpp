// roc 2009-06 0066f080  unit: RBX::FileMesh  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f080
//
// 0066f080  51                   push ecx
// 0066f081  6a18                 push 0x18
// 0066f083  c744240400000000     mov dword ptr [esp + 4], 0
// 0066f08b  e8a8990a00           call 0x718a38
// 0066f090  83c404               add esp, 4
// 0066f093  85c0                 test eax, eax
// 0066f095  7424                 je 0x66f0bb
// 0066f097  c700f4348e00         mov dword ptr [eax], 0x8e34f4
// 0066f09d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066f0a1  894808               mov dword ptr [eax + 8], ecx
// 0066f0a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066f0a8  89500c               mov dword ptr [eax + 0xc], edx
// 0066f0ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066f0af  894810               mov dword ptr [eax + 0x10], ecx
// 0066f0b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066f0b6  895014               mov dword ptr [eax + 0x14], edx
// 0066f0b9  eb02                 jmp 0x66f0bd
// 0066f0bb  33c0                 xor eax, eax
// 0066f0bd  56                   push esi
// 0066f0be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066f0c2  6a00                 push 0
// 0066f0c4  8906                 mov dword ptr [esi], eax
// 0066f0c6  e867990a00           call 0x718a32
// 0066f0cb  83c404               add esp, 4
// 0066f0ce  8bc6                 mov eax, esi
// 0066f0d0  5e                   pop esi
// 0066f0d1  59                   pop ecx
// 0066f0d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
