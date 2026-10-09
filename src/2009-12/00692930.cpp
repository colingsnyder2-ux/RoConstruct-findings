// roc 2009-12 00692930  unit: RBX::Tool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00692930
//
// 00692930  51                   push ecx
// 00692931  6a18                 push 0x18
// 00692933  c744240400000000     mov dword ptr [esp + 4], 0
// 0069293b  e8200f1600           call 0x7f3860
// 00692940  83c404               add esp, 4
// 00692943  85c0                 test eax, eax
// 00692945  7424                 je 0x69296b
// 00692947  c700281c9d00         mov dword ptr [eax], 0x9d1c28
// 0069294d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00692951  894808               mov dword ptr [eax + 8], ecx
// 00692954  8b542410             mov edx, dword ptr [esp + 0x10]
// 00692958  89500c               mov dword ptr [eax + 0xc], edx
// 0069295b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069295f  894810               mov dword ptr [eax + 0x10], ecx
// 00692962  8b542418             mov edx, dword ptr [esp + 0x18]
// 00692966  895014               mov dword ptr [eax + 0x14], edx
// 00692969  eb02                 jmp 0x69296d
// 0069296b  33c0                 xor eax, eax
// 0069296d  56                   push esi
// 0069296e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00692972  6a00                 push 0
// 00692974  8906                 mov dword ptr [esi], eax
// 00692976  e8df0e1600           call 0x7f385a
// 0069297b  83c404               add esp, 4
// 0069297e  8bc6                 mov eax, esi
// 00692980  5e                   pop esi
// 00692981  59                   pop ecx
// 00692982  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
