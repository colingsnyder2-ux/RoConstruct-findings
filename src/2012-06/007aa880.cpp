// roc 2012-06 007aa880  unit: RBX::VLighting::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007aa880
//
// 007aa880  51                   push ecx
// 007aa881  6a18                 push 0x18
// 007aa883  c744240400000000     mov dword ptr [esp + 4], 0
// 007aa88b  e88a781d00           call 0x98211a
// 007aa890  83c404               add esp, 4
// 007aa893  85c0                 test eax, eax
// 007aa895  7424                 je 0x7aa8bb
// 007aa897  c700b06abb00         mov dword ptr [eax], 0xbb6ab0
// 007aa89d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007aa8a1  894808               mov dword ptr [eax + 8], ecx
// 007aa8a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007aa8a8  89500c               mov dword ptr [eax + 0xc], edx
// 007aa8ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007aa8af  894810               mov dword ptr [eax + 0x10], ecx
// 007aa8b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007aa8b6  895014               mov dword ptr [eax + 0x14], edx
// 007aa8b9  eb02                 jmp 0x7aa8bd
// 007aa8bb  33c0                 xor eax, eax
// 007aa8bd  56                   push esi
// 007aa8be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007aa8c2  6a00                 push 0
// 007aa8c4  8906                 mov dword ptr [esi], eax
// 007aa8c6  e849781d00           call 0x982114
// 007aa8cb  83c404               add esp, 4
// 007aa8ce  8bc6                 mov eax, esi
// 007aa8d0  5e                   pop esi
// 007aa8d1  59                   pop ecx
// 007aa8d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
