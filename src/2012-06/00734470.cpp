// roc 2012-06 00734470  unit: RBX::Frame  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00734470
//
// 00734470  51                   push ecx
// 00734471  6a18                 push 0x18
// 00734473  c744240400000000     mov dword ptr [esp + 4], 0
// 0073447b  e89adc2400           call 0x98211a
// 00734480  83c404               add esp, 4
// 00734483  85c0                 test eax, eax
// 00734485  7424                 je 0x7344ab
// 00734487  c700a87eba00         mov dword ptr [eax], 0xba7ea8
// 0073448d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00734491  894808               mov dword ptr [eax + 8], ecx
// 00734494  8b542410             mov edx, dword ptr [esp + 0x10]
// 00734498  89500c               mov dword ptr [eax + 0xc], edx
// 0073449b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073449f  894810               mov dword ptr [eax + 0x10], ecx
// 007344a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007344a6  895014               mov dword ptr [eax + 0x14], edx
// 007344a9  eb02                 jmp 0x7344ad
// 007344ab  33c0                 xor eax, eax
// 007344ad  56                   push esi
// 007344ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007344b2  6a00                 push 0
// 007344b4  8906                 mov dword ptr [esi], eax
// 007344b6  e859dc2400           call 0x982114
// 007344bb  83c404               add esp, 4
// 007344be  8bc6                 mov eax, esi
// 007344c0  5e                   pop esi
// 007344c1  59                   pop ecx
// 007344c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
