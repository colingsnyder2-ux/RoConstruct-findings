// roc 2012-06 007e8790  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e8790
//
// 007e8790  51                   push ecx
// 007e8791  6a18                 push 0x18
// 007e8793  c744240400000000     mov dword ptr [esp + 4], 0
// 007e879b  e87a991900           call 0x98211a
// 007e87a0  83c404               add esp, 4
// 007e87a3  85c0                 test eax, eax
// 007e87a5  7424                 je 0x7e87cb
// 007e87a7  c7009c26bc00         mov dword ptr [eax], 0xbc269c
// 007e87ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e87b1  894808               mov dword ptr [eax + 8], ecx
// 007e87b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e87b8  89500c               mov dword ptr [eax + 0xc], edx
// 007e87bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e87bf  894810               mov dword ptr [eax + 0x10], ecx
// 007e87c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e87c6  895014               mov dword ptr [eax + 0x14], edx
// 007e87c9  eb02                 jmp 0x7e87cd
// 007e87cb  33c0                 xor eax, eax
// 007e87cd  56                   push esi
// 007e87ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e87d2  6a00                 push 0
// 007e87d4  8906                 mov dword ptr [esi], eax
// 007e87d6  e839991900           call 0x982114
// 007e87db  83c404               add esp, 4
// 007e87de  8bc6                 mov eax, esi
// 007e87e0  5e                   pop esi
// 007e87e1  59                   pop ecx
// 007e87e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
