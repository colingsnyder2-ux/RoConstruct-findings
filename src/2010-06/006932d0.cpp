// roc 2010-06 006932d0  unit: RBX::P8Lighting::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006932d0
//
// 006932d0  51                   push ecx
// 006932d1  6a18                 push 0x18
// 006932d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006932db  e8c0461100           call 0x7a79a0
// 006932e0  83c404               add esp, 4
// 006932e3  85c0                 test eax, eax
// 006932e5  7424                 je 0x69330b
// 006932e7  c7009cdea300         mov dword ptr [eax], 0xa3de9c
// 006932ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006932f1  894808               mov dword ptr [eax + 8], ecx
// 006932f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006932f8  89500c               mov dword ptr [eax + 0xc], edx
// 006932fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006932ff  894810               mov dword ptr [eax + 0x10], ecx
// 00693302  8b542418             mov edx, dword ptr [esp + 0x18]
// 00693306  895014               mov dword ptr [eax + 0x14], edx
// 00693309  eb02                 jmp 0x69330d
// 0069330b  33c0                 xor eax, eax
// 0069330d  56                   push esi
// 0069330e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00693312  6a00                 push 0
// 00693314  8906                 mov dword ptr [esi], eax
// 00693316  e87f461100           call 0x7a799a
// 0069331b  83c404               add esp, 4
// 0069331e  8bc6                 mov eax, esi
// 00693320  5e                   pop esi
// 00693321  59                   pop ecx
// 00693322  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
