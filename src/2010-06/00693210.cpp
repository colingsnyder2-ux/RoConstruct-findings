// roc 2010-06 00693210  unit: RBX::P8Lighting::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00693210
//
// 00693210  51                   push ecx
// 00693211  6a18                 push 0x18
// 00693213  c744240400000000     mov dword ptr [esp + 4], 0
// 0069321b  e880471100           call 0x7a79a0
// 00693220  83c404               add esp, 4
// 00693223  85c0                 test eax, eax
// 00693225  7424                 je 0x69324b
// 00693227  c7006cdea300         mov dword ptr [eax], 0xa3de6c
// 0069322d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00693231  894808               mov dword ptr [eax + 8], ecx
// 00693234  8b542410             mov edx, dword ptr [esp + 0x10]
// 00693238  89500c               mov dword ptr [eax + 0xc], edx
// 0069323b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069323f  894810               mov dword ptr [eax + 0x10], ecx
// 00693242  8b542418             mov edx, dword ptr [esp + 0x18]
// 00693246  895014               mov dword ptr [eax + 0x14], edx
// 00693249  eb02                 jmp 0x69324d
// 0069324b  33c0                 xor eax, eax
// 0069324d  56                   push esi
// 0069324e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00693252  6a00                 push 0
// 00693254  8906                 mov dword ptr [esi], eax
// 00693256  e83f471100           call 0x7a799a
// 0069325b  83c404               add esp, 4
// 0069325e  8bc6                 mov eax, esi
// 00693260  5e                   pop esi
// 00693261  59                   pop ecx
// 00693262  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
