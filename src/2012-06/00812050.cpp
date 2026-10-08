// roc 2012-06 00812050  unit: RBX::VGlue::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00812050
//
// 00812050  51                   push ecx
// 00812051  6a18                 push 0x18
// 00812053  c744240400000000     mov dword ptr [esp + 4], 0
// 0081205b  e8ba001700           call 0x98211a
// 00812060  83c404               add esp, 4
// 00812063  85c0                 test eax, eax
// 00812065  7424                 je 0x81208b
// 00812067  c700b060bc00         mov dword ptr [eax], 0xbc60b0
// 0081206d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00812071  894808               mov dword ptr [eax + 8], ecx
// 00812074  8b542410             mov edx, dword ptr [esp + 0x10]
// 00812078  89500c               mov dword ptr [eax + 0xc], edx
// 0081207b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081207f  894810               mov dword ptr [eax + 0x10], ecx
// 00812082  8b542418             mov edx, dword ptr [esp + 0x18]
// 00812086  895014               mov dword ptr [eax + 0x14], edx
// 00812089  eb02                 jmp 0x81208d
// 0081208b  33c0                 xor eax, eax
// 0081208d  56                   push esi
// 0081208e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00812092  6a00                 push 0
// 00812094  8906                 mov dword ptr [esi], eax
// 00812096  e879001700           call 0x982114
// 0081209b  83c404               add esp, 4
// 0081209e  8bc6                 mov eax, esi
// 008120a0  5e                   pop esi
// 008120a1  59                   pop ecx
// 008120a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
