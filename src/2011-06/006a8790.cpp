// roc 2011-06 006a8790  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a8790
//
// 006a8790  51                   push ecx
// 006a8791  6a18                 push 0x18
// 006a8793  c744240400000000     mov dword ptr [esp + 4], 0
// 006a879b  e8be181600           call 0x80a05e
// 006a87a0  83c404               add esp, 4
// 006a87a3  85c0                 test eax, eax
// 006a87a5  742c                 je 0x6a87d3
// 006a87a7  c700c431aa00         mov dword ptr [eax], 0xaa31c4
// 006a87ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a87b1  894808               mov dword ptr [eax + 8], ecx
// 006a87b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a87b8  89500c               mov dword ptr [eax + 0xc], edx
// 006a87bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a87bf  894810               mov dword ptr [eax + 0x10], ecx
// 006a87c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a87c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006a87ca  895014               mov dword ptr [eax + 0x14], edx
// 006a87cd  8901                 mov dword ptr [ecx], eax
// 006a87cf  8bc1                 mov eax, ecx
// 006a87d1  59                   pop ecx
// 006a87d2  c3                   ret 
// 006a87d3  8b442408             mov eax, dword ptr [esp + 8]
// 006a87d7  33c9                 xor ecx, ecx
// 006a87d9  8908                 mov dword ptr [eax], ecx
// 006a87db  59                   pop ecx
// 006a87dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
