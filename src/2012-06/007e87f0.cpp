// roc 2012-06 007e87f0  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e87f0
//
// 007e87f0  51                   push ecx
// 007e87f1  6a18                 push 0x18
// 007e87f3  c744240400000000     mov dword ptr [esp + 4], 0
// 007e87fb  e81a991900           call 0x98211a
// 007e8800  83c404               add esp, 4
// 007e8803  85c0                 test eax, eax
// 007e8805  7424                 je 0x7e882b
// 007e8807  c7009824bc00         mov dword ptr [eax], 0xbc2498
// 007e880d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e8811  894808               mov dword ptr [eax + 8], ecx
// 007e8814  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e8818  89500c               mov dword ptr [eax + 0xc], edx
// 007e881b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e881f  894810               mov dword ptr [eax + 0x10], ecx
// 007e8822  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e8826  895014               mov dword ptr [eax + 0x14], edx
// 007e8829  eb02                 jmp 0x7e882d
// 007e882b  33c0                 xor eax, eax
// 007e882d  56                   push esi
// 007e882e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e8832  6a00                 push 0
// 007e8834  8906                 mov dword ptr [esi], eax
// 007e8836  e8d9981900           call 0x982114
// 007e883b  83c404               add esp, 4
// 007e883e  8bc6                 mov eax, esi
// 007e8840  5e                   pop esi
// 007e8841  59                   pop ecx
// 007e8842  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
