// roc 2011-06 006a87e0  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a87e0
//
// 006a87e0  51                   push ecx
// 006a87e1  6a18                 push 0x18
// 006a87e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006a87eb  e86e181600           call 0x80a05e
// 006a87f0  83c404               add esp, 4
// 006a87f3  85c0                 test eax, eax
// 006a87f5  742c                 je 0x6a8823
// 006a87f7  c700d831aa00         mov dword ptr [eax], 0xaa31d8
// 006a87fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a8801  894808               mov dword ptr [eax + 8], ecx
// 006a8804  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a8808  89500c               mov dword ptr [eax + 0xc], edx
// 006a880b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a880f  894810               mov dword ptr [eax + 0x10], ecx
// 006a8812  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a8816  8b542418             mov edx, dword ptr [esp + 0x18]
// 006a881a  895014               mov dword ptr [eax + 0x14], edx
// 006a881d  8901                 mov dword ptr [ecx], eax
// 006a881f  8bc1                 mov eax, ecx
// 006a8821  59                   pop ecx
// 006a8822  c3                   ret 
// 006a8823  8b442408             mov eax, dword ptr [esp + 8]
// 006a8827  33c9                 xor ecx, ecx
// 006a8829  8908                 mov dword ptr [eax], ecx
// 006a882b  59                   pop ecx
// 006a882c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
