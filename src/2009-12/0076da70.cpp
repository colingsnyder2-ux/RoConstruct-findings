// roc 2009-12 0076da70  unit: RBX::VFrame::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076da70
//
// 0076da70  51                   push ecx
// 0076da71  6a18                 push 0x18
// 0076da73  c744240400000000     mov dword ptr [esp + 4], 0
// 0076da7b  e8e05d0800           call 0x7f3860
// 0076da80  83c404               add esp, 4
// 0076da83  85c0                 test eax, eax
// 0076da85  7424                 je 0x76daab
// 0076da87  c7003c829e00         mov dword ptr [eax], 0x9e823c
// 0076da8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076da91  894808               mov dword ptr [eax + 8], ecx
// 0076da94  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076da98  89500c               mov dword ptr [eax + 0xc], edx
// 0076da9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076da9f  894810               mov dword ptr [eax + 0x10], ecx
// 0076daa2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076daa6  895014               mov dword ptr [eax + 0x14], edx
// 0076daa9  eb02                 jmp 0x76daad
// 0076daab  33c0                 xor eax, eax
// 0076daad  56                   push esi
// 0076daae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076dab2  6a00                 push 0
// 0076dab4  8906                 mov dword ptr [esi], eax
// 0076dab6  e89f5d0800           call 0x7f385a
// 0076dabb  83c404               add esp, 4
// 0076dabe  8bc6                 mov eax, esi
// 0076dac0  5e                   pop esi
// 0076dac1  59                   pop ecx
// 0076dac2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
